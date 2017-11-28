<?php
/**
 * @file
 * aka_webform_content_type.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function aka_webform_content_type_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|webform|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'webform';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_form';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => FALSE,
  );
  $export['node|webform|form'] = $ds_layout;

  return $export;
}
