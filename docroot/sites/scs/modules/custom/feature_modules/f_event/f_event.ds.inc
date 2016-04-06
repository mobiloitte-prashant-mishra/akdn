<?php
/**
 * @file
 * f_event.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function f_event_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_event_image',
        1 => 'field_short_title',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'field_event_image' => 'ds_content',
      'field_short_title' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|event|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_event_image',
        1 => 'field_caption',
        2 => 'group_body_wrapper',
        3 => 'body',
      ),
      'event_meta' => array(
        0 => 'field_event_date',
        1 => 'field_event_location',
        2 => 'group_meta_info',
        3 => 'field_tags',
      ),
    ),
    'fields' => array(
      'field_event_image' => 'ds_content',
      'field_caption' => 'ds_content',
      'field_event_date' => 'event_meta',
      'group_body_wrapper' => 'ds_content',
      'field_event_location' => 'event_meta',
      'body' => 'ds_content',
      'group_meta_info' => 'event_meta',
      'field_tags' => 'event_meta',
    ),
    'classes' => array(),
  );
  $export['node|event|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|scs';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'scs';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_event_image',
      ),
      'right' => array(
        0 => 'title_field',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'field_event_image' => 'left',
      'title_field' => 'right',
      'body' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|event|scs'] = $ds_layout;

  return $export;
}
