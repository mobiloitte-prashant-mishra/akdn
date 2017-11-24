<?php
/**
 * @file
 * aka_photogallery_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function aka_photogallery_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'photo_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'photo_gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'photo_gallery';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'test';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Academy gallery block */
  $handler = $view->new_display('block', 'Academy gallery block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Academy photo gallery';
  $handler->display->display_options['display_description'] = 'Shows gallery per Academy';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'test';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Thumbnail image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => '',
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
  $translatables['photo_gallery'] = array(
    t('Master'),
    t('photo_gallery'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Post date'),
    t('Block'),
    t('Academy gallery block'),
    t('Academy photo gallery'),
    t('Shows gallery per Academy'),
    t('All'),
  );
  $export['photo_gallery'] = $view;

  return $export;
}
