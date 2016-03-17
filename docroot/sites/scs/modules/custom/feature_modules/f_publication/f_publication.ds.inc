<?php
/**
 * @file
 * f_publication.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function f_publication_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|publication|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'publication';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_publication_image',
        1 => 'field_publication_isbn',
        2 => 'field_publish_date',
        3 => 'field_publication_file',
        4 => 'field_tags',
        5 => 'field_country',
        6 => 'field_agency',
        7 => 'field_focus_area',
        8 => 'body',
      ),
    ),
    'fields' => array(
      'field_publication_image' => 'ds_content',
      'field_publication_isbn' => 'ds_content',
      'field_publish_date' => 'ds_content',
      'field_publication_file' => 'ds_content',
      'field_tags' => 'ds_content',
      'field_country' => 'ds_content',
      'field_agency' => 'ds_content',
      'field_focus_area' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
  );
  $export['node|publication|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|publication|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'publication';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_publication_image',
        1 => 'field_publication_file',
        2 => 'body',
        3 => 'field_publication_isbn',
        4 => 'field_publication_purchase_link',
      ),
      'right_sidebars' => array(
        0 => 'field_related_news',
      ),
    ),
    'fields' => array(
      'field_publication_image' => 'ds_content',
      'field_publication_file' => 'ds_content',
      'body' => 'ds_content',
      'field_publication_isbn' => 'ds_content',
      'field_publication_purchase_link' => 'ds_content',
      'field_related_news' => 'right_sidebars',
    ),
    'classes' => array(),
  );
  $export['node|publication|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|publication|scs';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'publication';
  $ds_layout->view_mode = 'scs';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_publication_image',
      ),
      'right' => array(
        0 => 'title_field',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'field_publication_image' => 'left',
      'title_field' => 'right',
      'body' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|publication|scs'] = $ds_layout;

  return $export;
}
