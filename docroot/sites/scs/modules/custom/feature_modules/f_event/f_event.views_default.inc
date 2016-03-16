<?php
/**
 * @file
 * f_event.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function f_event_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'related_item_in_event';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Related item in event';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related item in event';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Related Press Releases */
  $handler->display->display_options['fields']['field_press_reference']['id'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['table'] = 'field_data_field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['field'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['label'] = 'Press Releases';
  $handler->display->display_options['fields']['field_press_reference']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_press_reference']['delta_offset'] = '0';
  /* Field: Content: Related News */
  $handler->display->display_options['fields']['field_related_news']['id'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['table'] = 'field_data_field_related_news';
  $handler->display->display_options['fields']['field_related_news']['field'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['label'] = 'News';
  $handler->display->display_options['fields']['field_related_news']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_related_news']['delta_offset'] = '0';
  /* Field: Content: Related Speeches */
  $handler->display->display_options['fields']['field_speeches_reference']['id'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['table'] = 'field_data_field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['field'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['label'] = 'Speeches';
  $handler->display->display_options['fields']['field_speeches_reference']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_speeches_reference']['delta_offset'] = '0';
  /* Field: Content: Related Publications */
  $handler->display->display_options['fields']['field_related_publications']['id'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['table'] = 'field_data_field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['field'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['label'] = 'Publications';
  $handler->display->display_options['fields']['field_related_publications']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_related_publications']['delta_offset'] = '0';
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
    'event' => 'event',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'related-item-in-event';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'speech-sidebar related-event-item';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['related_item_in_event'] = array(
    t('Master'),
    t('Related item in event'),
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
    t('Press Releases'),
    t('News'),
    t('Speeches'),
    t('Publications'),
    t('Page'),
    t('Block'),
  );
  $export['related_item_in_event'] = $view;

  return $export;
}
