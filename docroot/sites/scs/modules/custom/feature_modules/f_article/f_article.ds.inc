<?php
/**
 * @file
 * f_article.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function f_article_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_article_img',
        1 => 'field_caption',
        2 => 'field_article_link',
        3 => 'field_publish_date',
        4 => 'body',
        5 => 'field_events_reference',
        6 => 'group_body_wrapper',
      ),
    ),
    'fields' => array(
      'field_article_img' => 'ds_content',
      'field_caption' => 'ds_content',
      'field_article_link' => 'ds_content',
      'field_publish_date' => 'ds_content',
      'body' => 'ds_content',
      'field_events_reference' => 'ds_content',
      'group_body_wrapper' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|article|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|scs';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'scs';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'right' => array(
        0 => 'field_short_title',
        1 => 'body',
        2 => 'field_media_type',
        3 => 'field_projects',
        4 => 'field_country',
      ),
    ),
    'fields' => array(
      'field_short_title' => 'right',
      'body' => 'right',
      'field_media_type' => 'right',
      'field_projects' => 'right',
      'field_country' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|article|scs'] = $ds_layout;

  return $export;
}
