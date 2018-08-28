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
  $array = explode(\'/\',$menu[\'link_path\']);
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

  return $export;
}
