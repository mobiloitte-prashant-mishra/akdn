<?php
/**
 * @file
 * ecard_template_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ecard_template_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function ecard_template_content_type_image_default_styles() {
  $styles = array();

  // Exported image style: ecard_template_image.
  $styles['ecard_template_image'] = array(
    'label' => 'ecard_template_image',
    'effects' => array(
      231 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 650,
          'height' => 344,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'ecard_template_image',
        ),
        'weight' => 0,
      ),
      226 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 650,
          'height' => 344,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ecard_template_content_type_node_info() {
  $items = array(
    'ecard_template' => array(
      'name' => t('Ecard Template'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Card Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
