<?php
/**
 * @file
 * f_speech.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function f_speech_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|speech|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'speech';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '1',
      'label' => 'inline',
      'format' => 'default',
    ),
  );
  $export['node|speech|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function f_speech_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|speech|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'speech';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_speech_image',
        1 => 'field_image',
        2 => 'group_meta_info',
        3 => 'field_publish_date',
        4 => 'body',
        5 => 'field_speech_location',
        6 => 'field_speech_speaker',
      ),
    ),
    'fields' => array(
      'field_speech_image' => 'ds_content',
      'field_image' => 'ds_content',
      'group_meta_info' => 'ds_content',
      'field_publish_date' => 'ds_content',
      'body' => 'ds_content',
      'field_speech_location' => 'ds_content',
      'field_speech_speaker' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|speech|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|speech|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'speech';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_speech_image',
        1 => 'field_caption',
        2 => 'body',
        3 => 'field_speech_audio',
        4 => 'field_youtube_vimeo_video',
        5 => 'field_brightcove_video',
        6 => 'field_introductory_text',
      ),
      'right_sidebar' => array(
        0 => 'links',
        1 => 'field_speech_location',
        2 => 'field_publish_date',
        3 => 'group_meta_info',
        4 => 'field_press_releases',
        5 => 'field_speech_event',
        6 => 'field_speech_speaker',
      ),
    ),
    'fields' => array(
      'field_speech_image' => 'ds_content',
      'field_caption' => 'ds_content',
      'links' => 'right_sidebar',
      'body' => 'ds_content',
      'field_speech_location' => 'right_sidebar',
      'field_speech_audio' => 'ds_content',
      'field_publish_date' => 'right_sidebar',
      'field_youtube_vimeo_video' => 'ds_content',
      'field_brightcove_video' => 'ds_content',
      'field_introductory_text' => 'ds_content',
      'group_meta_info' => 'right_sidebar',
      'field_press_releases' => 'right_sidebar',
      'field_speech_event' => 'right_sidebar',
      'field_speech_speaker' => 'right_sidebar',
    ),
    'classes' => array(),
  );
  $export['node|speech|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|speech|scs';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'speech';
  $ds_layout->view_mode = 'scs';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_speech_image',
        1 => 'field_image',
      ),
      'right' => array(
        0 => 'title_field',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'field_speech_image' => 'left',
      'title_field' => 'right',
      'field_image' => 'left',
      'body' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|speech|scs'] = $ds_layout;

  return $export;
}
