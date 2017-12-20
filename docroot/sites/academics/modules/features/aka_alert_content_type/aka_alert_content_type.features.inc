<?php
/**
 * @file
 * aka_alert_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function aka_alert_content_type_node_info() {
  $items = array(
    'alert' => array(
      'name' => t('Alert'),
      'base' => 'node_content',
      'description' => t('Alert to appear on home page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
