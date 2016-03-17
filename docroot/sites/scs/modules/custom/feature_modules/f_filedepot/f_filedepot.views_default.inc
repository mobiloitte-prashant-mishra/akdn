<?php
/**
 * @file
 * f_filedepot.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function f_filedepot_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'filedepot_dashboard';
  $view->description = 'filedepot folder view with attached files';
  $view->tag = '';
  $view->base_table = 'filedepot_categories';
  $view->human_name = 'filedepot_dashboard';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Folder Listing */
  $handler = $view->new_display('default', 'Folder Listing', 'default');
  $handler->display->display_options['title'] = 'Filedepot';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'pid';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'pid' => 'pid',
    'cid' => 'cid',
    'name' => 'name',
    'view_node' => 'view_node',
  );
  /* Field: Filedepot Folders: Parent Folder */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'filedepot_categories';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  /* Field: Filedepot Folders: Folder ID */
  $handler->display->display_options['fields']['cid']['id'] = 'cid';
  $handler->display->display_options['fields']['cid']['table'] = 'filedepot_categories';
  $handler->display->display_options['fields']['cid']['field'] = 'cid';
  $handler->display->display_options['fields']['cid']['exclude'] = TRUE;
  /* Field: Filedepot Folders: Folder Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'filedepot_categories';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Folder';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'filedepot/folder/[cid]';
  /* Field: Filedepot Folders: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'filedepot_categories';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Contextual filter: Filedepot Folders: Folder ID */
  $handler->display->display_options['arguments']['cid']['id'] = 'cid';
  $handler->display->display_options['arguments']['cid']['table'] = 'filedepot_categories';
  $handler->display->display_options['arguments']['cid']['field'] = 'cid';
  $handler->display->display_options['arguments']['cid']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['cid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['cid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['cid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['cid']['limit'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'd_filedepot';

  /* Display: Filedepot */
  $handler = $view->new_display('block', 'Filedepot', 'block_1');
  $handler->display->display_options['block_description'] = 'Filedepot Listing of the viewable folders for user';
  $translatables['filedepot_dashboard'] = array(
    t('Folder Listing'),
    t('Filedepot'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('.'),
    t(','),
    t('Folder ID'),
    t('Folder'),
    t('[name]'),
    t('Node ID'),
    t('All'),
    t('Page'),
    t('Filedepot Listing of the viewable folders for user'),
  );
  $export['filedepot_dashboard'] = $view;

  return $export;
}
