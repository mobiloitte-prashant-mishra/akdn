<?php
/**
 * @file
 * aka_cck_fields.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function aka_cck_fields_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-gallery_collections-field_license'.
  $field_instances['taxonomy_term-gallery_collections-field_license'] = array(
    'bundle' => 'gallery_collections',
    'default_value' => array(
      0 => array(
        'value' => 'nothing',
      ),
    ),
    'deleted' => 0,
    'description' => 'Choose a default <a href="http://creativecommons.org">Creative Commons</a> license for all Gallery media. Later you can change the license for each piece of media.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_license',
    'label' => 'Default license settings',
    'required' => TRUE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'weight' => 14,
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 34,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-gallery_collections-media_gallery_columns'.
  $field_instances['taxonomy_term-gallery_collections-media_gallery_columns'] = array(
    'bundle' => 'gallery_collections',
    'default_value' => array(
      0 => array(
        'value' => 4,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'media_gallery_columns',
    'label' => 'Number of columns',
    'required' => TRUE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 31,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-gallery_collections-media_gallery_image_info_where'.
  $field_instances['taxonomy_term-gallery_collections-media_gallery_image_info_where'] = array(
    'bundle' => 'gallery_collections',
    'default_value' => array(
      0 => array(
        'value' => 'hover',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'media_gallery_image_info_where',
    'label' => 'Gallery information',
    'required' => TRUE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 33,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-gallery_collections-media_gallery_rows'.
  $field_instances['taxonomy_term-gallery_collections-media_gallery_rows'] = array(
    'bundle' => 'gallery_collections',
    'default_value' => array(
      0 => array(
        'value' => 3,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'media_gallery_rows',
    'label' => 'Number of rows',
    'required' => TRUE,
    'settings' => array(
      'max' => '',
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Choose a default <a href="http://creativecommons.org">Creative Commons</a> license for all Gallery media. Later you can change the license for each piece of media.');
  t('Default license settings');
  t('Gallery information');
  t('Number of columns');
  t('Number of rows');

  return $field_instances;
}
