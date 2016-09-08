<?php
/**
 * @file
 * akdn_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function akdn_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: agency_listing_logo_flex.
  $styles['agency_listing_logo_flex'] = array(
    'name' => 'agency_listing_logo_flex',
    'label' => 'Agency Logo Custom Page',
    'effects' => array(
      209 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 100,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: agency_listing_logo_full.
  $styles['agency_listing_logo_full'] = array(
    'name' => 'agency_listing_logo_full',
    'label' => 'agency_listing_logo_full',
    'effects' => array(
      211 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 100,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: agency_listing_logos.
  $styles['agency_listing_logos'] = array(
    'name' => 'agency_listing_logos',
    'label' => 'What we do agency logo with tiles',
    'effects' => array(
      210 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 100,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: akaa_akmi_press_centre.
  $styles['akaa_akmi_press_centre'] = array(
    'name' => 'akaa_akmi_press_centre',
    'label' => 'AKAA AKMI Press Centre',
    'effects' => array(
      223 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 230,
          'height' => 160,
          'keepproportions' => 0,
          'reuse_crop_style' => '',
          'style_name' => 'akaa_akmi_press_centre',
        ),
        'weight' => 0,
      ),
      224 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 230,
          'height' => 160,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: akaa_map_thumbnail.
  $styles['akaa_map_thumbnail'] = array(
    'name' => 'akaa_map_thumbnail',
    'label' => 'AKAA Map Thumbnail',
    'effects' => array(
      211 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 60,
          'height' => 60,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: akdn_facts_icon.
  $styles['akdn_facts_icon'] = array(
    'name' => 'akdn_facts_icon',
    'label' => 'Facts Block Icon',
    'effects' => array(
      212 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 100,
          'height' => 75,
          'keepproportions' => 0,
          'reuse_crop_style' => '',
          'style_name' => 'akdn_facts_icon',
        ),
        'weight' => 1,
      ),
      213 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 75,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: area_of_activities_two_activies.
  $styles['area_of_activities_two_activies'] = array(
    'name' => 'area_of_activities_two_activies',
    'label' => 'Area of Activities Two Activies',
    'effects' => array(
      221 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 555,
          'height' => 400,
          'keepproportions' => 0,
          'reuse_crop_style' => '',
          'style_name' => 'area_of_activities_two_activies',
        ),
        'weight' => 0,
      ),
      222 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 555,
          'height' => 400,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: article_listing_thumbnail.
  $styles['article_listing_thumbnail'] = array(
    'name' => 'article_listing_thumbnail',
    'label' => 'Akdn Search Listing',
    'effects' => array(
      186 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 270,
          'height' => 240,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'article_listing_thumbnail',
        ),
        'weight' => 0,
      ),
      191 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 270,
          'height' => 240,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: banner_image.
  $styles['banner_image'] = array(
    'name' => 'banner_image',
    'label' => 'banner_image',
    'effects' => array(
      161 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 774,
          'height' => 456,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'banner_image',
        ),
        'weight' => 0,
      ),
      166 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 774,
          'height' => 456,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: banner_item_standard_home_page.
  $styles['banner_item_standard_home_page'] = array(
    'name' => 'banner_item_standard_home_page',
    'label' => 'Full Page Width Carousel',
    'effects' => array(
      196 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 1140,
          'height' => 500,
          'keepproportions' => 0,
          'reuse_crop_style' => '',
          'style_name' => 'banner_item_standard_home_page',
        ),
        'weight' => 0,
      ),
      197 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1140,
          'height' => 500,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: banner_items_fall_back.
  $styles['banner_items_fall_back'] = array(
    'name' => 'banner_items_fall_back',
    'label' => 'Banner Items Fall back',
    'effects' => array(
      198 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 780,
          'height' => 460,
          'keepproportions' => 0,
          'reuse_crop_style' => '',
          'style_name' => 'banner_items_fall_back',
        ),
        'weight' => 0,
      ),
      199 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 780,
          'height' => 460,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: featured_content.
  $styles['featured_content'] = array(
    'name' => 'featured_content',
    'label' => 'Two Third Width Carousel',
    'effects' => array(
      236 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 780,
          'height' => 460,
          'keepproportions' => 1,
          'reuse_crop_style' => 'banner_items_fall_back',
          'style_name' => 'featured_content',
        ),
        'weight' => -10,
      ),
      251 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 460,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      246 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 780,
          'height' => 460,
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: focus_area_listing.
  $styles['focus_area_listing'] = array(
    'name' => 'focus_area_listing',
    'label' => 'Focus Area Listing Page Image',
    'effects' => array(
      121 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 299,
          'height' => 169,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'focus_area_listing',
        ),
        'weight' => 0,
      ),
      126 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 299,
          'height' => 169,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: gallery_thumbnail.
  $styles['gallery_thumbnail'] = array(
    'name' => 'gallery_thumbnail',
    'label' => 'gallery_thumbnail',
    'effects' => array(
      86 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 335,
          'height' => 224,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: half_width.
  $styles['half_width'] = array(
    'name' => 'half_width',
    'label' => 'half_width',
    'effects' => array(
      156 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 375,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: inline_half_with.
  $styles['inline_half_with'] = array(
    'name' => 'inline_half_with',
    'label' => 'Inline half width',
    'effects' => array(
      217 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 384,
          'height' => 230,
          'keepproportions' => 0,
          'reuse_crop_style' => '',
          'style_name' => 'inline_half_with',
        ),
        'weight' => 0,
      ),
      218 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 384,
          'height' => 230,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: instagram_feed_image.
  $styles['instagram_feed_image'] = array(
    'name' => 'instagram_feed_image',
    'label' => 'instagram_feed_image',
    'effects' => array(
      217 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 360,
          'height' => 240,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: mail_shot_image_cache.
  $styles['mail_shot_image_cache'] = array(
    'name' => 'mail_shot_image_cache',
    'label' => 'Mail Shot image cache',
    'effects' => array(
      237 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => 150,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: mini_feature.
  $styles['mini_feature'] = array(
    'name' => 'mini_feature',
    'label' => 'mini_feature',
    'effects' => array(
      31 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 335,
          'height' => 224,
          'keepproportions' => 0,
          'reuse_crop_style' => '',
          'style_name' => 'mini_feature',
        ),
        'weight' => -10,
      ),
      46 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 335,
          'height' => 224,
        ),
        'weight' => -10,
      ),
    ),
  );

  // Exported image style: photo_thumb.
  $styles['photo_thumb'] = array(
    'name' => 'photo_thumb',
    'label' => 'Photograph Thumbnail Below Carousel',
    'effects' => array(
      219 => array(
        'label' => 'Manual Crop: Crop and scale',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 230,
          'height' => 150,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 1,
          'style_name' => 'photo_thumb',
        ),
        'weight' => 0,
      ),
      220 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 230,
          'height' => 150,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: press_centre_detail.
  $styles['press_centre_detail'] = array(
    'name' => 'press_centre_detail',
    'label' => 'Press Centre Detail',
    'effects' => array(
      214 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 774,
          'height' => 460,
          'keepproportions' => 0,
          'reuse_crop_style' => '',
          'style_name' => 'press_centre_detail',
        ),
        'weight' => 0,
      ),
      215 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 460,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
      216 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 774,
          'height' => 460,
          'upscale' => 0,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: publication_listing_image.
  $styles['publication_listing_image'] = array(
    'name' => 'publication_listing_image',
    'label' => 'Publication Listing Image',
    'effects' => array(
      219 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 202,
          'height' => 260,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'publication_listing_image',
        ),
        'weight' => 0,
      ),
      220 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 202,
          'height' => 260,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: publications_list_image_style.
  $styles['publications_list_image_style'] = array(
    'name' => 'publications_list_image_style',
    'label' => 'Publications Detail Page',
    'effects' => array(
      227 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 370,
          'height' => '',
          'keepproportions' => 0,
          'reuse_crop_style' => '',
          'style_name' => 'publications_list_image_style',
        ),
        'weight' => 2,
      ),
      223 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 370,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: social_feeds.
  $styles['social_feeds'] = array(
    'name' => 'social_feeds',
    'label' => 'Social Feeds Vertical',
    'effects' => array(
      11 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 360,
          'height' => 240,
          'upscale' => 1,
        ),
        'weight' => -10,
      ),
      17 => array(
        'label' => 'Define canvas',
        'help' => 'Define the size of the working canvas and background color, this controls the dimensions of the output image.',
        'effect callback' => 'canvasactions_definecanvas_effect',
        'dimensions callback' => 'canvasactions_definecanvas_dimensions',
        'form callback' => 'canvasactions_definecanvas_form',
        'summary theme' => 'canvasactions_definecanvas_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#cccccc',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 360,
            'height' => 240,
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: social_sharing_image.
  $styles['social_sharing_image'] = array(
    'name' => 'social_sharing_image',
    'label' => 'Standard Listing',
    'effects' => array(
      205 => array(
        'label' => 'Manual Crop: Crop and scale',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 360,
          'height' => 240,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'social_sharing_image',
        ),
        'weight' => -10,
      ),
      206 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 360,
          'height' => 240,
        ),
        'weight' => -10,
      ),
    ),
  );

  // Exported image style: standard_listing_aspect_switcher.
  $styles['standard_listing_aspect_switcher'] = array(
    'name' => 'standard_listing_aspect_switcher',
    'label' => 'Standard Listing Aspect Switcher',
    'effects' => array(
      21 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 360,
          'height' => 240,
          'upscale' => 1,
        ),
        'weight' => -10,
      ),
      20 => array(
        'label' => 'Aspect switcher',
        'help' => 'Use different effects depending on whether the image is landscape of portrait shaped. This re-uses other preset definitions, and just chooses between them based on the rule.',
        'effect callback' => 'canvasactions_aspect_effect',
        'dimensions callback' => 'canvasactions_aspect_dimensions',
        'form callback' => 'canvasactions_aspect_form',
        'summary theme' => 'canvasactions_aspect_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_aspect',
        'data' => array(
          'portrait' => 'social_feeds',
          'landscape' => 'social_sharing_image',
          'ratio_adjustment' => 1,
        ),
        'weight' => -9,
      ),
    ),
  );

  return $styles;
}
