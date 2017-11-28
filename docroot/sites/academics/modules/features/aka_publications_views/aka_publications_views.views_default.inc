<?php
/**
 * @file
 * aka_publications_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function aka_publications_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'publications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'publications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'publications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_image',
      'rendered' => 1,
    ),
    1 => array(
      'field' => 'title',
      'rendered' => 1,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: File (field_group_files) */
  $handler->display->display_options['relationships']['field_group_files_value']['id'] = 'field_group_files_value';
  $handler->display->display_options['relationships']['field_group_files_value']['table'] = 'field_data_field_group_files';
  $handler->display->display_options['relationships']['field_group_files_value']['field'] = 'field_group_files_value';
  /* Field: Content: Thumbnail image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_upload_file]';
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_class'] = 'publication';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'publication',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Upload file */
  $handler->display->display_options['fields']['field_upload_file']['id'] = 'field_upload_file';
  $handler->display->display_options['fields']['field_upload_file']['table'] = 'field_data_field_upload_file';
  $handler->display->display_options['fields']['field_upload_file']['field'] = 'field_upload_file';
  $handler->display->display_options['fields']['field_upload_file']['relationship'] = 'field_group_files_value';
  $handler->display->display_options['fields']['field_upload_file']['label'] = '';
  $handler->display->display_options['fields']['field_upload_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_upload_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_upload_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_upload_file']['type'] = 'file_url_plain';
  /* Field: Field collection item: language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['relationship'] = 'field_group_files_value';
  $handler->display->display_options['fields']['field_language']['label'] = '';
  $handler->display->display_options['fields']['field_language']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_language']['alter']['text'] = '> Brochure in [field_language]';
  $handler->display->display_options['fields']['field_language']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_language']['alter']['path'] = '[field_upload_file]';
  $handler->display->display_options['fields']['field_language']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_language']['alter']['alt'] = 'Download brochure';
  $handler->display->display_options['fields']['field_language']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_language']['element_label_colon'] = FALSE;
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
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
  $handler->display->display_options['arguments']['field_academy_name_taxonomy_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_academy_name_taxonomy_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_academy_name_taxonomy_tid']['validate_options']['vocabularies'] = array(
    'academy_name' => 'academy_name',
  );
  $handler->display->display_options['arguments']['field_academy_name_taxonomy_tid']['validate']['fail'] = 'ignore';
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
    'publication' => 'publication',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Block_all */
  $handler = $view->new_display('block', 'Block_all', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Block home */
  $handler = $view->new_display('block', 'Block home', 'block_2');
  $handler->display->display_options['display_description'] = 'Block showing latest publication, to appear on home page.';

  /* Display: AllPublicationsByAcademy */
  $handler = $view->new_display('block', 'AllPublicationsByAcademy', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'AllPublicationsByAcademy';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $translatables['publications'] = array(
    t('Master'),
    t('publications'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field collection item from field_group_files'),
    t('[title]'),
    t('> Brochure in [field_language]'),
    t('Download brochure'),
    t('All'),
    t('Block'),
    t('Block_all'),
    t('Block home'),
    t('Block showing latest publication, to appear on home page.'),
    t('AllPublicationsByAcademy'),
  );
  $export['publications'] = $view;

  return $export;
}
