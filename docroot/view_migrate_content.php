<?php

define('DRUPAL_ROOT', getcwd());
require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

global $user;
$view = variable_get('content_migrate_unt_view_migrated_list', FALSE);
if (!$view) {
  return '';
}
if (! (($user->uid == '1') or (isset($user->roles['11']))) ) {
  return '';
}


$action = (isset($_GET['action'])) ? $_GET['action'] : '';
$relation_ship_info = array('source_table' => 'ismaili_tag',
      'map_table' => 'migrate_map_geographyterm',
      'parent_field_name' => 'parenttagid',
      'source_map_field' => 'tagid'
);
switch ($action) {
  case 'geography_relationship' :
    srijan_migration_handle_missing_content_category_relationship($relation_ship_info);
    break;
  case 'node_load':
    echo '<pre>', print_r(node_load($_GET['nid']));
    break;
  case 'show_nutrient_info':
    srijan_migration_show_nutrient_info(); //@TODO Show nutrient info
    break;
  case 'delete_media_info':
    srijan_migration_delete_media_info();
    break;
  case 'delete_removed_media_info':
    srijan_migration_delete_removed_media_info();
    break;
  case 'show_same_title_nodes':
    srijan_migration_show_same_title_nodes();
    break;
  case 'unpublish_published_nodes':
    content_migrate_unt_process_published_nodes();
    break;
}

if ($action) {
  return '';
}

$type = (isset($_GET['type'])) ? $_GET['type'] : 'article';
print _get_migration_list();



$table_name = _get_migration_type($type);
$source_path = _get_migration_type_path($type);
$output = '';
switch ($type) {
  case 'broken_data':
    $output = _get_migrated_borken_data($table_name, $type);
    break;
  default:
    $output = _get_migrated_data($table_name, $type, $source_path);
    break;
}
print $output;

/**
* Show nodes having same title
**/
function srijan_migration_show_same_title_nodes() {
  $query = "select title, count(*) total, group_concat(nid) nids from
    node group by title having count(*) >1 order by total ASC";
  $result = db_query($query);
  $output = "<table>";
  $output .= "<thead><tr><td><b>Title</b></td><td><b>Total</b></td><td><b>Node Links</b></td></tr></thead>";
  $pos = 1;
  foreach ($result as $row) {
    $link = "";
    $total = $row->total;
    $title = $row->title;
    $output .= "<tr><td>" . $title ."</td>";
    $output .="<td>$total<td>";
    $nids = explode(",", $row->nids);
    foreach ($nids as $pos => $nid) {
      $link = l($pos, 'node/' . $nid);
      $output .= " " .$link;
    }
    $output .= "</td></tr>";
  }
  $output .= "</table>";
  print $output;
}
/**
* Remove entry from the mapping of media content migration
**/
function srijan_migration_delete_removed_media_info() {
  $total_ids = db_query("select count(mc.sourceid1)
    from migrate_map_mediacontent mc where mc.destid1 not in (select fid from file_managed)")->fetchField();
  print "<br />Total files to be deleted :: $total_ids <br />";
  if ($total_ids == 0) {
    return '';
  }
  $query = "select mc.sourceid1
    from migrate_map_mediacontent mc where mc.destid1 not in (select fid from file_managed) ";
  echo "<br/> <br/>Delete Media info Info::<br/>";
  $delete_fids = '';
  $result = db_query($query);
  foreach ($result as $row) {
    $file = file_load($row->fid);
    $delete_fids = ($delete_fids == '') ? $row->sourceid1 : $delete_fids .',' . $row->sourceid1;
  }
  if ($delete_fids != '') {
    $delete_query = "DELETE FROM {migrate_map_mediacontent} where sourceid1 in (" . $delete_fids .")";
    db_query($delete_query);
    print "successfully deleted all fids from migrate_map_mediacontent.";
  }

}

/**
* Delete Media info
**/
function srijan_migration_delete_media_info() {
  $limit = ($_GET['limit']) ? $_GET['limit'] : 1;
  $total_query = db_query("SELECT count(fid) FROM file_managed where fid not in
  (SELECT fu.fid FROM file_usage fu union select mc.destid1
    from migrate_map_mediacontent mc where mc.destid1 is not null 
    union select mg.destid1 from  migrate_map_generalmediacontent mg
    where mg.destid1 is not null)")->fetchField();
  print "<br />Total files to be deleted :: $total_query <br />";

  $query = "SELECT fid FROM file_managed where fid not in
  (SELECT fu.fid FROM file_usage fu union select mc.destid1
    from migrate_map_mediacontent mc where mc.destid1 is not null 
    union select mg.destid1 from  migrate_map_generalmediacontent mg
    where mg.destid1 is not null) limit $limit ";
  echo "<br/> <br/>Delete Media info Info::<br/>";
  $result = db_query($query);
  foreach ($result as $row) {
    $file = file_load($row->fid);
    if ($_GET['show']) {
      echo "<br />URI: ", $file->uri;
      echo $row->fid, "<br/>";
      print file_create_url($file->uri);
    }
    if ($_GET['delete']) {
      drupal_unlink($file->uri);
      file_delete($file);
    }
  }
}

/**
* Show nutrient info
**/
function srijan_migration_show_nutrient_info() {
  echo "<br/> <br/>New Database Nutrient Info::<br/>";
  $query = db_select('field_data_field_machine_name', "n")->distinct();
  $query->fields("n", array('entity_id', 'field_machine_name_value'));
  $result = $query->execute();
  foreach ($result as $row) {
    echo $row->field_machine_name_value, '=>', $row->entity_id, "<br/>";
  }

  // In old Database
  echo "<br/> <br/>Old Database Nutrient Info::<br/>";
  $query = db_select('ismaili_nutrient', "n")->distinct();
  $query->fields("n", array('nutrientid', 'name'));
  $result = $query->execute();
  foreach ($result as $row) {
    echo $row->nutrientid, '=>', $row->name, "<br/>";
  }
}

/**
 * Get list of migrations
 * @return string
 */
function _get_migration_list() {
  $type_list = array('article' , 'gallery', 'recipe' ,'event', 'internalarticle',
    'specialarticle', 'festivalarticle', 'redirectarticle', 'videoarticle');
  $output = 'View migrated Nodes for ';
  foreach ($type_list as $list) {
    $output .= "<a href='view_migrate_content.php?type=" . $list . "'>$list</a> ";
  }
  $output .= "<br /><br />";
  $output .= "Additional Activity";
  $additional = array('geography_relationship', 'node_load');
  foreach ($additional as $key) {
    $output .= "<a href='view_migrate_content.php?action=" . $key . "'>$key</a> ";
  }
  return $output;
}

/**
 * Get current migration show info
 * @return string
 */
function _get_migration_type($type) {
  $table_name = array('article');
  switch ($type) {
    default :
      $table_name = array('migrate_map_' . $type . 'content');
      break;
  }
  return $table_name;
}

/**
 * Get current migration show info
 * @return string
 */
function _get_migration_type_path($type) {
  $path = 'cms_links.asp?action=edit&id=';
  switch ($type) {
    case 'video' :
    case 'spotlight' :
    case 'events' :
    case 'news_events' :
      $path = 'view_article.asp?ContentID=';
      break;
    case 'people' :
      $path = 'personedit.asp?per_id=';
      break;
    case 'author' :
      $path = 'view_person.asp?type=auth&ID=';
      break;
    case 'glossary' :
      $path = 'GlossaryItem.asp?GlossaryID=';
      break;
    case 'recipe' :
      $path = 'recipe.asp?action=edit&recipeID=';
      break;
    default :
      $path = 'cms_links.asp?action=edit&id=';
      break;
  }
  return $path;
}

/**
 * Get migrated data of a particular type
 * @param type $table_name
 * @return string
 */
function _get_migrated_data($table_name = array(), $type, $target_path = '', $original_site_url = 'http://admin.theismaili.org/', $base_dest_table = 'node') {
  $base_table = 'ismaili_contentitem'  ;
  $map_field = 'contentid';
  switch($type) {
    case 'author' :
      $base_table = 'cms_publishauthor';
      $map_field = 'per_id';
      break;
    case 'people' :
      $base_table = 'cms_person';
      $map_field = 'per_id';
      break;
    case 'recipe' :
      $base_table = 'ismaili_recipe';
      $map_field = 'recipeid';
      break;
  }
  if ($type == 'people') {
    $original_site_url = 'http://cms.iis.ac.uk/';
  }
  if ($type == 'glossary') {
    $base_dest_table = 'word_link';
  }
  $output = '<b>Current view :: ' . $type . '</b>';
  $total = 0;
  foreach ($table_name as $table) {
    $query = db_select($base_dest_table, "n")->distinct();
    if ($type == 'glossary') {
      $query->join($table, 't', "t.destid1 = n.id");
      $query->fields("n", array("id", "text"));
      $query->fields("t", array("sourceid1"));
      $query->orderBy("n.id", "DESC");
      $result = $query->execute();
    } else {
      $query->join($table, 't', "t.destid1 = n.nid");
      $query->fields("n", array("nid", "title", "created"));

      $query->join(CONTENT_MIGRATE_DATABASE_NAME . '.'. $base_table, 'sn', "t.sourceid1 = sn." . $map_field);
      if (isset($_REQUEST['update'])) {
        $query->fields("sn", array("changed"));
      }

      $query->fields("t", array("sourceid1"));
      $query->orderBy("t.destid1", "DESC");
      $result = $query->execute();
    }
    $final_output = _show_migrated_data($result, $type, $target_path, $original_site_url);
  }
  return $final_output;
}

/**
 * Get output to be displayed for migrated nodes
 * @param  [type] $result
 * @param  [type] $type
 * @param  [type] $target_path
 * @param  [type] $original_site_url
 * @return [type]
 */
function _show_migrated_data($result , $type, $target_path, $original_site_url) {
  $view_path = "http://www.theismaili.org/cms/";
  if ($type == 'recipe') {
    $view_path = "http://www.theismaili.org/recipe/";
  }
  $update = (isset($_REQUEST['update'])) ? 1 : 0;
  $final_output = $output = '';
  $total = 0;
  $params['action'] = 'node_load';
  foreach ($result as $row) {
    if ($update) {
      content_migrate_unt_update_chagnged_time($row->nid, $row->changed);
    }
    $title = (isset($row->title)) ? $row->title : (isset($row->text) ? $row->text : '');
    $nid = (isset($row->nid)) ? $row->nid : (isset($row->id) ? $row->id : '');
    $path = ($type == 'glossary') ? l(t('View'), 'admin/config/content/word-link/edit/' . $nid) : l(t('view'), 'node/' . $nid);
    $alt_title = $title . ' [' . $nid .']';
    $params['nid'] = $nid;
    $node_load_link = l(t('Node load'), 'view_migrate_content.php',
      array('query' => $params, 'html' => TRUE, 'attributes' => array('target' => '_blank')));
    $original_link = "<a href='$original_site_url" . $target_path . $row->sourceid1 . "' target='_new'>" . t('Edit') . "</a>";
    $original_link2 = "<a href='" . $view_path . $row->sourceid1 . "/' target='_new'>" . t('View') . "</a>";
    $output .= "<tr><td title='$alt_title'> " . $title. '</td><td>' . $path . '</td><td>' . $original_link . '/'. $original_link2 . '</td><td>' . $node_load_link . '</td></tr>';
    $total++;
  }
  $final_output = "<table style='width:800px;'><thead><tr><td><strong>Total $type Record :: " . $total . '</strong></td><td>&nbsp;</td></tr></thead>';
  if ($total != 0) {
    $final_output .= '<tr><td><b>' . t('Title') . '</b></td><td style="width:100px;"><b>' . t('Migrated link') . '</b></td><td style="width:100px;"><b>' . t('Original link') . '</b></td><td><b>' . t('Load Node') .'</b></td></tr>';
  }
  if ($total == 0) {
    $final_output .= '<tr><td>' . l(t('Click here '), 'admin/content/migrate') . 'to perform migration</td><td></td></tr>';
  }
  $final_output .= $output . '</table>';
  return $final_output;
}

/**
 * Get broken data
 * @param  [type] $table_name [description]
 * @return [type]             [description]
 */
function _get_migrated_borken_data($table_name, $type) {
  $total = 0;
  $output = '';
  foreach ($table_name as $table) {
    $query = db_select($table, "n")->distinct();
    $query->fields("n", array("name"));
    $result = $query->execute();
    foreach ($result as $row) {
      $title = (isset($row->name)) ? $row->name : '';
      $output .= "<tr><td><a target ='_blank' href='" . $title . "'>" . $title . "</a></td><td></tr>";
      $total++;
    }
    $final_output = "<table style='width:800px;'><thead><tr><td><strong>Total $type Record :: " . $total . '</strong></td></tr></thead>';
    if ($total != 0) {
      $final_output .= '<tr><td><b>' . t('Links') . '</b></td></tr>';
    }
    $final_output .= $output . '</table>';
  }
  return $final_output;
}

/**
 * Process Content Category Term names
 * @return [type] [description]
 */
function srijan_migration_handle_missing_content_category_relationship($relation_ship_info) {
  $query = "SELECT mc.sourceid1, mc.destid1, cs." . $relation_ship_info['parent_field_name'] ." FROM " . $relation_ship_info['source_table'] ." cs
    left join " . $relation_ship_info['map_table'] ." mc ON (cs." . $relation_ship_info['source_map_field'] ." = mc.sourceid1)
    left join taxonomy_term_hierarchy th ON (mc.destid1 = th.tid)
    WHERE th.parent = 0 and cs." . $relation_ship_info['parent_field_name'] . " > 0";
  $result = db_query($query);
  $missing_tid_parentid = '';
  foreach($result as $data) {
    $missing_content_data[$data->sourceid1] = $data;
    $missing_tid_parentid = ($missing_tid_parentid != '') ? $missing_tid_parentid . "," .$data->{$relation_ship_info['parent_field_name']} : $data->{$relation_ship_info['parent_field_name']};
  }
  
  if ($missing_tid_parentid != '') {
    $parent_data = srijan_migration_fetch_content_category_missing_info($missing_tid_parentid, $relation_ship_info);
    srijan_migration_complete_content_category_relationship($missing_content_data, $parent_data, $relation_ship_info);
  }
}

/**
 * Update missing relation ship
 * @param  [type] $missing_content_data [description]
 * @param  [type] $parent_data          [description]
 * @return [type]                       [description]
 */
function srijan_migration_complete_content_category_relationship($missing_content_data, $parent_data, $relation_ship_info) {
  $total = 0;
  $output = "";
  foreach ($missing_content_data as $key => $data) {
    $missing_tid = $data->destid1;
    // $ptid = $data->parenttagid;
    $ptid = $data->{$relation_ship_info['parent_field_name']};
    $missing_parent_tid = $parent_data[$ptid]->destid1;
    if (!$missing_parent_tid) {
      continue;
    }
    $total++;
    db_update("taxonomy_term_hierarchy")      ->condition('tid', $missing_tid)
      ->fields(array('parent' => $missing_parent_tid))
      ->execute();
    $output .=  "<br /> Map $missing_tid -> $missing_parent_tid";
  }
  echo "<br />Repaired total ::", $total, " terms";
  print $output;
}



 /**
 * Process Content Category Term names
 * @return [type] [description]
 */
function srijan_migration_fetch_content_category_missing_info($missing_tid_parentid, $relation_ship_info) {
  $parent_data = array();
  $query = "SELECT sourceid1, destid1 FROM " . $relation_ship_info['map_table'] . "
    WHERE sourceid1 in (" . $missing_tid_parentid. ")";
  $result = db_query($query);
  foreach($result as $data) {
    $parent_data[$data->sourceid1] = $data;
  }
  return $parent_data;
}

/**
* Process the nodes which needs to be unpublished
**/
function content_migrate_unt_process_published_nodes() {
	$limit = (isset($_GET['limit'])) ? $_GET['limit'] : 1;
	$process = (isset($_GET['process'])) ? $_GET['process'] : 0;
	$show  = (isset($_GET['show'])) ? $_GET['show'] : 0;
	$action_progress  = (isset($_GET['process'])) ? "Processing" : "Showing";
	$compile_data = "<br /><a href='/view_migrate_content.php?process=1&limit=1'>Process 1 item</a>";
	$compile_data .= "<br /><a href='/view_migrate_content.php?process=0&show=1&limit=10'>Show 10 item</a><br />";
	print $compile_data;

  $query = "select count(*) count from migrate_map_migrated_node m
  left join node n on (m.destid1=n.nid) where sourceid1
  	in (select contentid from ismaili_contentitem where statusid in (100,101,120))
     and n.status =1";
  $result = db_query($query);
  foreach($result as $data) {
    print "Total Unpublished Publish Node :: " . $data->count;
  }

  $query = "select destid1 nid from migrate_map_migrated_node  m
  left join node n on (m.destid1=n.nid) where sourceid1
  	in (select contentid from ismaili_contentitem where statusid in (100,101,120))
    and n.status =1 limit $limit";

  $result = db_query($query);
  foreach($result as $data) {
    print "<br /> $action_progress for node :: $data->nid <br />" . $data->nid;
    
    print "<br />" .  l($data->nid, 'node/' . $data->nid);
    
    if (!$process) {
      continue;
    }
    print "processing";
    content_migrate_unt_unpublish_node($data->nid);
  }
}

/**
* un publish the nodes
**/
function content_migrate_unt_unpublish_node($nid) {
  $node = node_load($nid);
  $query = db_update('workbench_moderation_node_history')
      ->condition('hid', $node->workbench_moderation['current']->hid)
      ->fields(array('published' => 0))
      ->execute();
  workbench_moderation_moderate($node, 'draft');
  $live_revision = workbench_moderation_node_current_load($node);
  $live_revision->status = 0;
  $live->changed = $node->changed;
  $live_revision->revision = 0;
  $live_revision->workbench_moderation['updating_live_revision'] = TRUE;
  node_save($live_revision);
   $node->status=0;
   node_save($node);
}
