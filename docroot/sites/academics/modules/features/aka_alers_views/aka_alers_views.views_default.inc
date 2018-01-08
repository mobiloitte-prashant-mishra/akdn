<?php
/**
 * @file
 * aka_alers_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function aka_alers_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'alerts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Alerts';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Academy name */
  $handler->display->display_options['fields']['field_academy_name_taxonomy']['id'] = 'field_academy_name_taxonomy';
  $handler->display->display_options['fields']['field_academy_name_taxonomy']['table'] = 'field_data_field_academy_name_taxonomy';
  $handler->display->display_options['fields']['field_academy_name_taxonomy']['field'] = 'field_academy_name_taxonomy';
  $handler->display->display_options['fields']['field_academy_name_taxonomy']['label'] = '';
  $handler->display->display_options['fields']['field_academy_name_taxonomy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_academy_name_taxonomy']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_academy_name_taxonomy']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Academy name */
  $handler->display->display_options['fields']['field_academy_name_taxonomy_1']['id'] = 'field_academy_name_taxonomy_1';
  $handler->display->display_options['fields']['field_academy_name_taxonomy_1']['table'] = 'field_data_field_academy_name_taxonomy';
  $handler->display->display_options['fields']['field_academy_name_taxonomy_1']['field'] = 'field_academy_name_taxonomy';
  $handler->display->display_options['fields']['field_academy_name_taxonomy_1']['label'] = '';
  $handler->display->display_options['fields']['field_academy_name_taxonomy_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_academy_name_taxonomy_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_academy_name_taxonomy_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_academy_name_taxonomy_1']['delta_offset'] = '0';
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'alert' => 'alert',
  );
  /* Filter criterion: Content: Academy name (field_academy_name_taxonomy) */
  $handler->display->display_options['filters']['field_academy_name_taxonomy_tid']['id'] = 'field_academy_name_taxonomy_tid';
  $handler->display->display_options['filters']['field_academy_name_taxonomy_tid']['table'] = 'field_data_field_academy_name_taxonomy';
  $handler->display->display_options['filters']['field_academy_name_taxonomy_tid']['field'] = 'field_academy_name_taxonomy_tid';
  $handler->display->display_options['filters']['field_academy_name_taxonomy_tid']['value'] = array(
    0 => '5',
  );
  $handler->display->display_options['filters']['field_academy_name_taxonomy_tid']['vocabulary'] = 'academy_name';

  /* Display: Home alerts by Academy */
  $handler = $view->new_display('block', 'Home alerts by Academy', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Home alerts by Academy';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'alert' => 'alert',
  );

  /* Display: Home alerts General Academies */
  $handler = $view->new_display('block', 'Home alerts General Academies', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Home alerts General Academies';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'alert' => 'alert',
  );
  /* Filter criterion: Content: Academy name (field_academy_name_taxonomy) */
  $handler->display->display_options['filters']['field_academy_name_taxonomy_tid']['id'] = 'field_academy_name_taxonomy_tid';
  $handler->display->display_options['filters']['field_academy_name_taxonomy_tid']['table'] = 'field_data_field_academy_name_taxonomy';
  $handler->display->display_options['filters']['field_academy_name_taxonomy_tid']['field'] = 'field_academy_name_taxonomy_tid';
  $handler->display->display_options['filters']['field_academy_name_taxonomy_tid']['value'] = array(
    0 => '5',
  );
  $handler->display->display_options['filters']['field_academy_name_taxonomy_tid']['vocabulary'] = 'academy_name';
  $translatables['alerts'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Home alerts by Academy'),
    t('All'),
    t('Home alerts General Academies'),
  );
  $export['alerts'] = $view;

  return $export;
}
