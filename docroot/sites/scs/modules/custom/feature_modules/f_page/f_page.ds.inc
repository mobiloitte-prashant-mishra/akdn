<?php
/**
 * @file
 * f_page.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function f_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|scs';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'scs';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_hub_page_image',
      ),
      'right' => array(
        0 => 'title_field',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'field_hub_page_image' => 'left',
      'title_field' => 'right',
      'body' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|page|scs'] = $ds_layout;

  return $export;
}
