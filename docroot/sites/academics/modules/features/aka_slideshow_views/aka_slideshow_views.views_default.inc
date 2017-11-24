<?php
/**
 * @file
 * aka_slideshow_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function aka_slideshow_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'slideshow_home';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'slideshow';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_image_panoramic' => 0,
    'title' => 0,
    'field_caption' => 0,
    'field_node_reference' => 0,
    'path' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_image_panoramic' => 0,
    'title' => 0,
    'field_caption' => 0,
    'field_node_reference' => 0,
    'path' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '7000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Node reference (field_node_reference) */
  $handler->display->display_options['relationships']['field_node_reference_nid']['id'] = 'field_node_reference_nid';
  $handler->display->display_options['relationships']['field_node_reference_nid']['table'] = 'field_data_field_node_reference';
  $handler->display->display_options['relationships']['field_node_reference_nid']['field'] = 'field_node_reference_nid';
  $handler->display->display_options['relationships']['field_node_reference_nid']['delta'] = '-1';
  /* Field: Content: Panoramic image */
  $handler->display->display_options['fields']['field_image_panoramic']['id'] = 'field_image_panoramic';
  $handler->display->display_options['fields']['field_image_panoramic']['table'] = 'field_data_field_image_panoramic';
  $handler->display->display_options['fields']['field_image_panoramic']['field'] = 'field_image_panoramic';
  $handler->display->display_options['fields']['field_image_panoramic']['label'] = '';
  $handler->display->display_options['fields']['field_image_panoramic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_panoramic']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_panoramic']['settings'] = array(
    'image_style' => 'slide_fullsize',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  /* Field: Content: Node reference */
  $handler->display->display_options['fields']['field_node_reference']['id'] = 'field_node_reference';
  $handler->display->display_options['fields']['field_node_reference']['table'] = 'field_data_field_node_reference';
  $handler->display->display_options['fields']['field_node_reference']['field'] = 'field_node_reference';
  $handler->display->display_options['fields']['field_node_reference']['label'] = '';
  $handler->display->display_options['fields']['field_node_reference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_node_reference']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_node_reference']['alter']['text'] = 'Find out more';
  $handler->display->display_options['fields']['field_node_reference']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_node_reference']['alter']['path'] = 'mombasa/why-choose-aga-khan-academy-mombasa';
  $handler->display->display_options['fields']['field_node_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_node_reference']['delta_offset'] = '0';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_node_reference_nid';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="slideshow_text">
<span class="slideshow_content">
<h3>[title_field]</h3>
[field_caption]<br />
[ <a href="[path]">Find out more</a> ]
</span>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Sort order (field_sort_order) */
  $handler->display->display_options['sorts']['field_sort_order_value']['id'] = 'field_sort_order_value';
  $handler->display->display_options['sorts']['field_sort_order_value']['table'] = 'field_data_field_sort_order';
  $handler->display->display_options['sorts']['field_sort_order_value']['field'] = 'field_sort_order_value';
  /* Contextual filter: Content: Academy name (field_academy_name_taxonomy) */
  $handler->display->display_options['arguments']['field_academy_name_taxonomy_tid']['id'] = 'field_academy_name_taxonomy_tid';
  $handler->display->display_options['arguments']['field_academy_name_taxonomy_tid']['table'] = 'field_data_field_academy_name_taxonomy';
  $handler->display->display_options['arguments']['field_academy_name_taxonomy_tid']['field'] = 'field_academy_name_taxonomy_tid';
  $handler->display->display_options['arguments']['field_academy_name_taxonomy_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_academy_name_taxonomy_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_academy_name_taxonomy_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_academy_name_taxonomy_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_academy_name_taxonomy_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_academy_name_taxonomy_tid']['default_argument_options']['vocabularies'] = array(
    'academy_name' => 'academy_name',
  );
  $handler->display->display_options['arguments']['field_academy_name_taxonomy_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_academy_name_taxonomy_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_academy_name_taxonomy_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slideshow_home' => 'slideshow_home',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sort order (field_sort_order) */
  $handler->display->display_options['sorts']['field_sort_order_value']['id'] = 'field_sort_order_value';
  $handler->display->display_options['sorts']['field_sort_order_value']['table'] = 'field_data_field_sort_order';
  $handler->display->display_options['sorts']['field_sort_order_value']['field'] = 'field_sort_order_value';

  /* Display: Home */
  $handler = $view->new_display('block', 'Home', 'block_1');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sort order (field_sort_order) */
  $handler->display->display_options['sorts']['field_sort_order_value']['id'] = 'field_sort_order_value';
  $handler->display->display_options['sorts']['field_sort_order_value']['table'] = 'field_data_field_sort_order';
  $handler->display->display_options['sorts']['field_sort_order_value']['field'] = 'field_sort_order_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slideshow_home' => 'slideshow_home',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $translatables['slideshow_home'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_node_reference'),
    t('Find out more'),
    t('<div id="slideshow_text">
<span class="slideshow_content">
<h3>[title_field]</h3>
[field_caption]<br />
[ <a href="[path]">Find out more</a> ]
</span>
</div>'),
    t('All'),
    t('Block'),
    t('Home'),
  );
  $export['slideshow_home'] = $view;

  return $export;
}
