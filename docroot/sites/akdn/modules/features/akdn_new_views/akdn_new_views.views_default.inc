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

  return $export;
}
