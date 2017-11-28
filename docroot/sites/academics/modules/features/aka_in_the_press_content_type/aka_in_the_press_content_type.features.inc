<?php
/**
 * @file
 * aka_in_the_press_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function aka_in_the_press_content_type_node_info() {
  $items = array(
    'in_the_press' => array(
      'name' => t('In the Press'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
