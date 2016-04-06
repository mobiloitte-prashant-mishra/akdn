<?php
/**
 * @file
 * f_featured_content.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function f_featured_content_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|featured_content|scs';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'featured_content';
  $ds_layout->view_mode = 'scs';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_feature_image',
      ),
      'right' => array(
        0 => 'title_field',
      ),
    ),
    'fields' => array(
      'field_feature_image' => 'left',
      'title_field' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|featured_content|scs'] = $ds_layout;

  return $export;
}
