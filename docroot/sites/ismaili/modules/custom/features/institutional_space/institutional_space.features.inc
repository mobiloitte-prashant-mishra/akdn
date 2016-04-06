<?php
/**
 * @file
 * institutional_space.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function institutional_space_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function institutional_space_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function institutional_space_node_info() {
  $items = array(
    'calendar_event' => array(
      'name' => t('Calendar Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'calendar_pages' => array(
      'name' => t('Calendar Pages'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'footer_menu' => array(
      'name' => t('Footer Menu'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'institutional_space' => array(
      'name' => t('Institutional Space'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Short Title'),
      'help' => '',
    ),
    'ip_hub_page' => array(
      'name' => t('IP Hub page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
