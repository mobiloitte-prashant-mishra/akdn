<?php
/**
 * @file
 * f_featured_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_featured_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
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
function f_featured_content_node_info() {
  $items = array(
    'featured_content' => array(
      'name' => t('Banner Item'),
      'base' => 'node_content',
      'description' => t('This content type can be used in order to promote items in a rotating banner.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
