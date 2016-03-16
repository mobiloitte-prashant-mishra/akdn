<?php
/**
 * @file
 * photogallery.features.inc
 */

/**
 * Implements hook_views_api().
 */
function photogallery_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function photogallery_node_info() {
  $items = array(
    'media_gallery' => array(
      'name' => t('Media Gallery'),
      'base' => 'node_content',
      'description' => t('Contains all photos of IIS website'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
