<?php
/**
 * @file
 * aka_basic_page_content_type.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function aka_basic_page_content_type_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
  );
  $export['node|page|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function aka_basic_page_content_type_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image_panoramic',
        1 => 'title',
        2 => 'body',
        3 => 'field_view_reference',
        4 => 'field_news',
      ),
    ),
    'fields' => array(
      'field_image_panoramic' => 'ds_content',
      'title' => 'ds_content',
      'body' => 'ds_content',
      'field_view_reference' => 'ds_content',
      'field_news' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|page|default'] = $ds_layout;

  return $export;
}
