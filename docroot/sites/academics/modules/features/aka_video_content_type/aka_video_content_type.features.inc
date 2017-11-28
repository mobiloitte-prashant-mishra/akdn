<?php
/**
 * @file
 * aka_video_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function aka_video_content_type_node_info() {
  $items = array(
    'video' => array(
      'name' => t('Video'),
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
