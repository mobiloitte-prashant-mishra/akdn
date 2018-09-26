<?php

/**
 * @file
 * akdn_new_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function akdn_new_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'custom_content_header_revision';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node_revision';
  $view->human_name = 'Custom Content Header Revision';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view revisions';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content (historical data): Short Title */
  $handler->display->display_options['fields']['field_short_title-revision_id']['id'] = 'field_short_title-revision_id';
  $handler->display->display_options['fields']['field_short_title-revision_id']['table'] = 'field_revision_field_short_title';
  $handler->display->display_options['fields']['field_short_title-revision_id']['field'] = 'field_short_title-revision_id';
  $handler->display->display_options['fields']['field_short_title-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_short_title-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_short_title-revision_id']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_short_title-revision_id']['element_class'] = 'basic-page-custom-logo-title';
  $handler->display->display_options['fields']['field_short_title-revision_id']['element_label_colon'] = FALSE;
  /* Field: Content (historical data): Logo */
  $handler->display->display_options['fields']['field_agency_logo-revision_id']['id'] = 'field_agency_logo-revision_id';
  $handler->display->display_options['fields']['field_agency_logo-revision_id']['table'] = 'field_revision_field_agency_logo';
  $handler->display->display_options['fields']['field_agency_logo-revision_id']['field'] = 'field_agency_logo-revision_id';
  $handler->display->display_options['fields']['field_agency_logo-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_agency_logo-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_agency_logo-revision_id']['empty'] = '<div class = "basic-page-custom-logo-title">[field_short_title-revision_id]</div>';
  $handler->display->display_options['fields']['field_agency_logo-revision_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_agency_logo-revision_id']['settings'] = array(
    'image_style' => 'agency_listing_logos',
    'image_link' => '',
  );
  /* Contextual filter: Content revision: Vid */
  $handler->display->display_options['arguments']['vid']['id'] = 'vid';
  $handler->display->display_options['arguments']['vid']['table'] = 'node_revision';
  $handler->display->display_options['arguments']['vid']['field'] = 'vid';
  $handler->display->display_options['arguments']['vid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['vid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['vid']['default_argument_options']['code'] = '$node = node_load(arg(1));
if(arg(0) == \'node\' && arg(2) == \'draft\'){
   return $node->workbench_moderation[\'current\']->vid;
}else{
    return $node->workbench_moderation[\'published\']->vid;
}';
  $handler->display->display_options['arguments']['vid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['vid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['vid']['summary_options']['items_per_page'] = '25';

  /* Display: Custom Content Header Revision */
  $handler = $view->new_display('block', 'Custom Content Header Revision', 'custom_content_header_revision');
  $handler->display->display_options['block_description'] = 'Custom Content Header Revision';
  $export['custom_content_header_revision'] = $view;


  $view = new view();
  $view->name = 'akdn_logo_with_title';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'AKDN logo with title';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Logo with Title */
  $handler->display->display_options['fields']['field_agency_logo_with_title']['id'] = 'field_agency_logo_with_title';
  $handler->display->display_options['fields']['field_agency_logo_with_title']['table'] = 'field_data_field_agency_logo_with_title';
  $handler->display->display_options['fields']['field_agency_logo_with_title']['field'] = 'field_agency_logo_with_title';
  $handler->display->display_options['fields']['field_agency_logo_with_title']['label'] = '';
  $handler->display->display_options['fields']['field_agency_logo_with_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_agency_logo_with_title']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_agency_logo_with_title']['settings'] = array(
    'image_style' => 'agency_listing_logo_full',
    'image_link' => '',
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '$node = node_load(arg(1));
$plid = $node->menu_node_links[key($node->menu_node_links)]->plid;
$menu = menu_link_load($plid);
if($menu[\'depth\'] == 2){
   $array = explode(\'/\',$menu[\'link_path\']);
}
if($menu[\'depth\'] == 3){
   $menu_1 = menu_link_load($menu[\'plid\']);
   $array = explode(\'/\',$menu_1[\'link_path\']);
}

  return $array[1];';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'AKDN logo with title';
  $export['akdn_logo_with_title'] = $view;

  $view = new view();
  $view->name = 'akdn_node_attachment';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'AKDN Node Attachment';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'pane-node-field-attachment';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Entity translation: Attachment: translated */
  $handler->display->display_options['fields']['field_attachment_et']['id'] = 'field_attachment_et';
  $handler->display->display_options['fields']['field_attachment_et']['table'] = 'field_data_field_attachment';
  $handler->display->display_options['fields']['field_attachment_et']['field'] = 'field_attachment_et';
  $handler->display->display_options['fields']['field_attachment_et']['label'] = '';
  $handler->display->display_options['fields']['field_attachment_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attachment_et']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_attachment_et']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_attachment_et']['settings'] = array(
    'text' => '[file:extension]',
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Attachment (field_attachment:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_field_attachment';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'AKDN Node Attachment';
  $export['akdn_node_attachment'] = $view;


  return $export;
}
