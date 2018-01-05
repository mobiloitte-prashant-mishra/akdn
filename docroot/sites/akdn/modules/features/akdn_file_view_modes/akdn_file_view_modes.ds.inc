<?php
/**
 * @file
 * akdn_file_view_modes.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function akdn_file_view_modes_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'media_half_right';
  $ds_view_mode->label = 'Media Half Right';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['media_half_right'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'media_large';
  $ds_view_mode->label = 'Media Large';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['media_large'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'media_left_half';
  $ds_view_mode->label = 'Media Left Half';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['media_left_half'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'media_right_third';
  $ds_view_mode->label = 'Media Right Third';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['media_right_third'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'media_third_left';
  $ds_view_mode->label = 'Media Third Left';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['media_third_left'] = $ds_view_mode;

  return $export;
}
