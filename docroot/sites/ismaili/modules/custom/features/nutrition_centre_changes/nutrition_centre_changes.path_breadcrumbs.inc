<?php
/**
 * @file
 * nutrition_centre_changes.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function nutrition_centre_changes_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'nutrition_centre';
  $path_breadcrumb->name = 'Nutrition Centre';
  $path_breadcrumb->path = 'nutrition';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Nutrition Centre',
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
  $export['nutrition_centre'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'nutrition_centre_individual_pages';
  $path_breadcrumb->name = 'Nutrition Centre Individual pages';
  $path_breadcrumb->path = 'node/%nid';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Nutrition Centre',
      1 => 'Culture and Diversity',
      2 => '!page_title',
    ),
    'paths' => array(
      0 => 'nutrition',
      1 => 'culture-and-diversity',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'nid' => array(
        'position' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'nutrition/culture-and-diversity/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['nutrition_centre_individual_pages'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'recipe';
  $path_breadcrumb->name = 'Recipe';
  $path_breadcrumb->path = 'node/%nid';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Nutrition Centre',
      1 => 'Recipe',
      2 => '%nid:title',
    ),
    'paths' => array(
      0 => 'nutrition',
      1 => 'nutrition/recipes',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'nid' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'nutrition/recipe/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['recipe'] = $path_breadcrumb;

  return $export;
}
