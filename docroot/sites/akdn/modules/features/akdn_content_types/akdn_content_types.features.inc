<?php
/**
 * @file
 * akdn_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function akdn_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function akdn_content_types_node_info() {
  $items = array(
    'agency' => array(
      'name' => t('Agency'),
      'base' => 'node_content',
      'description' => t('Hub Page for an AKDN Agency. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'focus_area' => array(
      'name' => t('Thematic Area'),
      'base' => 'node_content',
      'description' => t('A hub page for a Thematic Area.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'geography' => array(
      'name' => t('Geography'),
      'base' => 'node_content',
      'description' => t('A hub page for a geographic region or country.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'hub_page' => array(
      'name' => t('Hub Page'),
      'base' => 'node_content',
      'description' => t('A generic hub page; solely used within the hierarchy of "Areas of Activity" pages from an Agency or Geography.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'instagram' => array(
      'name' => t('Instagram post'),
      'base' => 'node_content',
      'description' => t('A post imported from Instagram.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
