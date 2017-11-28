<?php
/**
 * @file
 * aka_newsletter_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function aka_newsletter_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'newsletters';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Newsletters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Newsletters';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_taxonomy_newsletter',
      'rendered' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'item';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Field: Upload file (field_upload_file:fid) */
  $handler->display->display_options['relationships']['field_upload_file_fid']['id'] = 'field_upload_file_fid';
  $handler->display->display_options['relationships']['field_upload_file_fid']['table'] = 'field_data_field_upload_file';
  $handler->display->display_options['relationships']['field_upload_file_fid']['field'] = 'field_upload_file_fid';
  /* Field: Field: Upload file */
  $handler->display->display_options['fields']['field_upload_file']['id'] = 'field_upload_file';
  $handler->display->display_options['fields']['field_upload_file']['table'] = 'field_data_field_upload_file';
  $handler->display->display_options['fields']['field_upload_file']['field'] = 'field_upload_file';
  $handler->display->display_options['fields']['field_upload_file']['label'] = '';
  $handler->display->display_options['fields']['field_upload_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_upload_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_upload_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_upload_file']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_upload_file']['delta_offset'] = '0';
  /* Field: Content: Newsletter type */
  $handler->display->display_options['fields']['field_taxonomy_newsletter']['id'] = 'field_taxonomy_newsletter';
  $handler->display->display_options['fields']['field_taxonomy_newsletter']['table'] = 'field_data_field_taxonomy_newsletter';
  $handler->display->display_options['fields']['field_taxonomy_newsletter']['field'] = 'field_taxonomy_newsletter';
  $handler->display->display_options['fields']['field_taxonomy_newsletter']['label'] = '';
  $handler->display->display_options['fields']['field_taxonomy_newsletter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_taxonomy_newsletter']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_taxonomy_newsletter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_taxonomy_newsletter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_taxonomy_newsletter']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Image thumbnail */
  $handler->display->display_options['fields']['field_image_thumbnail']['id'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['table'] = 'field_data_field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['field'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_image_thumbnail']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_image_thumbnail']['element_class'] = 'image-medium';
  $handler->display->display_options['fields']['field_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
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
    'trim_length' => 600,
  );
  /* Field: File: Size */
  $handler->display->display_options['fields']['filesize']['id'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filesize']['field'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['relationship'] = 'field_upload_file_fid';
  $handler->display->display_options['fields']['filesize']['label'] = '';
  $handler->display->display_options['fields']['filesize']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['filesize']['alter']['text'] = '<div><a href="[field_upload_file]" target="_blank" title="Download PDF">Download PDF</a> ([filesize])</div>';
  $handler->display->display_options['fields']['filesize']['element_label_colon'] = FALSE;
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'academy_name' => 'academy_name',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'newsletter' => 'newsletter',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Newsletters block */
  $handler = $view->new_display('block', 'Newsletters block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_taxonomy_newsletter',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['use-grouping-header'] = 1;
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['style_options']['autoheight'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['newsletters'] = array(
    t('Master'),
    t('Newsletters'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('file from field_upload_file'),
    t('<div><a href="[field_upload_file]" target="_blank" title="Download PDF">Download PDF</a> ([filesize])</div>'),
    t('All'),
    t('Newsletters block'),
  );
  $export['newsletters'] = $view;

  return $export;
}
