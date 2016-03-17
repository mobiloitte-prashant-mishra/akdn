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

$type = (isset($_GET['type'])) ? $_GET['type'] : 'article';
_get_migration_list();

/**
 * Get list of migrations
 * @return string
 */
function _get_migration_list() {
  $content_type = (isset($_REQUEST['process_for'])) ? $_REQUEST['process_for'] : 'content';
  $type_list = array('article' , 'gallery', 'event', 'internalarticle',
    'specialarticle', 'festivalarticle', 'redirectarticle', 'videoarticle', 'speech');
  switch ($content_type) {
    case 'content':
      $type_list = array('article' , 'gallery','event', 'internalarticle',
    'specialarticle', 'festivalarticle', 'redirectarticle', 'videoarticle', 'speech');
      break;
    case 'glossary':
      $type_list = array('glossary');
      break;
    default:
      break;
  }
  $output = 'Find and replace Syntax<br/><br/>';
  $output .= 'Visit <a href="http://www.tools4noobs.com/online_php_functions/urlencode/"> here</a> to encode url';
  $output .= '<br/><br/>?auto_path=1&update_table=field_data_body&update_field_name=body_value&process_for=content&pattern=ContentLink.asp?type=cont.currentlang&id';
  $output .= '<br/><br/>';
  print $output;
  $output = "<table style='width:1200px;'><thead><tr><td><strong></strong></td></tr></thead>";

  $case = ($_GET['case'] == 'migrated') ? 'migrated' : 'normal';
  switch ($case) {
    case 'migrated':
      $table_name = array('migrate_map_migrated_node');
      $source_pattern = _get_migration_type_path($type);
      $data = _get_migrated_data($table_name, $type, $source_pattern);
      $output .= $data['output'];
      break;
    case 'normal':
      foreach ($type_list as $type) {
        $table_name = _get_migration_type($type);
        $source_pattern = _get_migration_type_path($type);
        $data = _get_migrated_data($table_name, $type, $source_pattern);
        $output .= $data['output'];
      }
      break;
  }
  $output .= '</table>';
  print $output;
}

/**
 * Get current migration show info
 * @return string
 */
function _get_migration_type($type) {
  $table_name = array('migrate_map_' . $type . 'content');
  switch ($type) {
    case 'article':
      $table_name = array('migrate_map_articlecontent');
      break;
    case 'event':
      $table_name = array('migrate_map_eventcontent');
      break;
    case 'festivalarticle':
      $table_name = array('migrate_map_festivalarticlecontent');
      break;
    case 'gallery':
      $table_name = array('migrate_map_gallerycontent');
      break;
    case 'internalarticle':
      $table_name = array('migrate_map_internalarticlecontent');
      break;
    case 'redirectarticle':
      $table_name = array('migrate_map_redirectarticlecontent');
      break;
    case 'specialarticle':
      $table_name = array('migrate_map_specialarticlecontent');
      break;
    case 'speech':
      $table_name = array('migrate_map_speechcontent');
      break;
    case 'videoarticle':
      $table_name = array('migrate_map_videoarticlecontent');
      break;     
  }
  return $table_name;
}

/**
 * Get current migration show info
 * @return string
 */
function _get_migration_type_path($type) {
  $path = 'view_article.asp?ContentID=';
  switch ($type) {
    case 'videos' :
    case 'spotlight' :
    case 'news_events' :
      $path = 'view_article.asp?ContentID=';
      break;
    case 'people' :
      $path = 'personedit.asp?per_id';
      break;
    case 'glossary' :
      $path = 'ContentLink.asp?type=glossary&id';
      break;
    default :
      $path = 'view_article.asp?ContentID';
      break;
  }
  return $path;
}

/**
 * Get migrated data of a particular type
 * @param type $table_name
 * @return string
 */
function _get_migrated_data($table_name = array(), $type, $source_pattern = '', $base_site_url = 'http://iis.ac.uk/', $base_dest_table = 'node') {
  // print_r ($table_name); return '';
  if ($type == 'people') {
    $base_site_url = 'http://cms.iis.ac.uk/';
  }
  if ($type == 'glossary') {
    $base_dest_table = 'taxonomy_term_data';
  }
  $total = 0;
  foreach ($table_name as $table) {
    $query = db_select($base_dest_table, "n")->distinct();
    if ($type == 'glossary') {
      $query->join($table, 't', "t.destid1 = n.tid");
      $query->fields("n", array("tid", "description"));
      $query->fields("t", array("sourceid1"));
      $query->orderBy("t.sourceid1", "DESC");
      $result = $query->execute();
    } else {
      $query->join($table, 't', "t.destid1 = n.nid");
      $query->fields("n", array("nid", "title", "created"));
      $query->fields("t", array("sourceid1"));
      $query->orderBy("n.created", "DESC");
      $result = $query->execute();
    }
    $final_output = _show_migrated_data($result, $type, $base_site_url, $source_pattern);
  }
  return $final_output;
}

/**
 * Get output to be displayed for migrated nodes
 * @param  [type] $result
 * @param  [type] $type
 * @param  [type] $target_path
 * @param  [type] $base_site_url
 * @return [type]
 */
function _show_migrated_data($result, $type, $base_site_url, $source_pattern) {
  $final_output = $output = '';
  $return_data = array('output' => '');
  $pattern = (isset($_REQUEST['pattern'])) ? $_REQUEST['pattern'] : $source_pattern;
  $upate_table_name = (isset($_REQUEST['update_table'])) ? $_REQUEST['update_table'] : 'field_data_body';
  $update_field_name = (isset($_REQUEST['update_field_name'])) ? $_REQUEST['update_field_name'] : 'body_value';
  // $output .= "<tr><td>UPDATE $upate_table_name SET $update_field_name=(REPLACE ($update_field_name,  '</A>', '</a>'". '));</td></tr>';
  //UPDATE field_data_field_descriptions SET field_descriptions_value=(REPLACE (field_descriptions_value,'?page=1"','?page=1" style="display:none;"'));
  foreach ($result as $row) {
    $output .= _get_body_replace_data($row, $pattern);
  }
  $return_data['output'] = $output;
  return $return_data;
}

/**
 * Get Body replace pattern
 * @param  [type] $type [description]
 * @return [type]       [description]
 */
function _get_body_replace_data($row, $pattern) {
  $output = '';
  $nid = (isset($row->nid)) ? $row->nid : (isset($row->id) ? $row->id : '');
  $nid = (isset($row->tid)) ? $row->tid : $nid;
  $final_path = _get_alias_for_migrated_node($nid);
  $list = array('field_data_field_introduction' => 'field_introduction_value',
    'field_data_body' => 'body_value',
   'field_data_field_body' => 'field_body_value'
   );
  foreach ($list as $upate_table_name => $update_field_name) {
    $output .= "<tr><td>UPDATE $upate_table_name SET $update_field_name=(REPLACE ($update_field_name,  '$pattern=$row->sourceid1\"', '$final_path\"'". '));</td></tr>';
  }
  return $output;
}

/**
 * Get node alias
 * @param  [type] $nid [description]
 * @return [type]      [description]
 */
function _get_alias_for_migrated_node($nid) {
  $alias = '';
  $query = db_select("url_alias", "u");
  $query->condition('u.source', "node/" . $nid, '=');
  $query->fields("u", array("alias"));
  $result = $query->execute();
  foreach ($result as $row) {
    $alias = $row->alias;
  }
  if (empty($alias)) {
    $alias = drupal_get_path_alias('node/' . $nid);
  }
  return $alias;
}