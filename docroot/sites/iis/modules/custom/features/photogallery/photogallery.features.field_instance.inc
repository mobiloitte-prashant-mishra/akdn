<?php
/**
 * @file
 * photogallery.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function photogallery_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-media_gallery-field_photo_image'
  $field_instances['node-media_gallery-field_photo_image'] = array(
    'bundle' => 'media_gallery',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'juicebox',
        'settings' => array(
          'apply_markup_filter' => 1,
          'caption_source' => '',
          'custom_parent_classes' => '',
          'image_style' => '',
          'incompatible_file_action' => 'show_icon_and_link',
          'jlib_backgroundColor' => '#222222',
          'jlib_galleryHeight' => '100%',
          'jlib_galleryWidth' => '100%',
          'jlib_showExpandButton' => 1,
          'jlib_showOpenButton' => 1,
          'jlib_showThumbsButton' => 1,
          'jlib_textColor' => 'rgba(255,255,255,1)',
          'jlib_thumbFrameColor' => 'rgba(255,255,255,.5)',
          'jlib_useFullscreenExpand' => 0,
          'jlib_useThumbDots' => 0,
          'linkurl_source' => '',
          'linkurl_target' => '_blank',
          'manual_config' => '',
          'show_debug_links' => 0,
          'thumb_style' => 'juicebox_square_thumbnail',
          'title_source' => '',
        ),
        'type' => 'juicebox_formatter',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_photo_image',
    'label' => 'Photo_Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 0,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Photo_Image');

  return $field_instances;
}
