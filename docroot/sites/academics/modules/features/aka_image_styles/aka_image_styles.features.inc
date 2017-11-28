<?php
/**
 * @file
 * aka_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function aka_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: image-medium.
  $styles['image-medium'] = array(
    'label' => 'image-medium',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 172,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: publication.
  $styles['publication'] = array(
    'label' => 'publication',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 160,
          'height' => 230,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: side_image.
  $styles['side_image'] = array(
    'label' => 'side_image',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 374,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: slide_fullsize.
  $styles['slide_fullsize'] = array(
    'label' => 'slide_fullsize',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 940,
          'height' => 360,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: spotlight_s.
  $styles['spotlight_s'] = array(
    'label' => 'spotlight_s',
    'effects' => array(
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 86,
          'height' => 86,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: spotlight_xs.
  $styles['spotlight_xs'] = array(
    'label' => 'spotlight_xs',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 60,
          'height' => 60,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: square_thumbnail.
  $styles['square_thumbnail'] = array(
    'label' => 'square_thumbnail',
    'effects' => array(
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 172,
          'height' => 172,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: tall.
  $styles['tall'] = array(
    'label' => 'tall',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 172,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
