<?php
/**
 * @file
 * akdn_file_view_modes.features.media_wysiwyg.inc
 */

/**
 * Implements hook_media_wysiwyg_defaults().
 */
function akdn_file_view_modes_media_wysiwyg_defaults() {
  $media_wysiwyg = array();

  // Restricted view modes for image files.
  $media_wysiwyg['image_media_original_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['image_media_half_right_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['image_media_large_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['image_media_left_half_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['image_media_right_third_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['image_media_third_left_restrict_wysiwyg'] = FALSE;

  return $media_wysiwyg;
}
