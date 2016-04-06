<?php
/**
 * @file
 * f_search.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function f_search_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'events_clone';
  $path_breadcrumb->name = 'Contacts';
  $path_breadcrumb->path = 'contact/search';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Contacts',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['events_clone'] = $path_breadcrumb;

  return $export;
}
