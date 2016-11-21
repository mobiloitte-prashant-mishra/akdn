<?php
/**
 * @file
 * ecard_template_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ecard_template_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ecard_template_content_type_node_info() {
  $items = array(
    'ecard_template' => array(
      'name' => t('Ecard Template'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Card Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
