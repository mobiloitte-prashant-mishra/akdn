<?php
/**
 * @file
 * ecard_template_view.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function ecard_template_view_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'ecards_creation_pages';
  $path_breadcrumb->name = 'Ecards Creation Pages';
  $path_breadcrumb->path = 'ecards/*';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Ecards',
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
  $export['ecards_creation_pages'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'ecards_listing_page';
  $path_breadcrumb->name = 'Ecards Listing Page';
  $path_breadcrumb->path = 'ecards';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Eacrds',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'ecards
ecards/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['ecards_listing_page'] = $path_breadcrumb;

  return $export;
}
