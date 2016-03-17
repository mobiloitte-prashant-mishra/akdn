<?php
/**
 * @file
 * f_speech_quotes.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function f_speech_quotes_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|article|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function f_speech_quotes_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|speech_quote|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'speech_quote';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_speech_themes',
        2 => 'field_speech_reference',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_speech_themes' => 'ds_content',
      'field_speech_reference' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|speech_quote|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|speech_quote|scs';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'speech_quote';
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
        1 => 'body',
      ),
    ),
    'fields' => array(
      'field_feature_image' => 'left',
      'title_field' => 'right',
      'body' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|speech_quote|scs'] = $ds_layout;

  return $export;
}
