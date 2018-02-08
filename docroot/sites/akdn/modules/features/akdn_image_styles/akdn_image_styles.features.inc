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
    'label' => 'Agency Logo Custom Page',
    'effects' => array(
      209 => array(
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
    'label' => 'agency_listing_logo_full',
    'effects' => array(
      211 => array(
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
    'label' => 'What we do agency logo with tiles',
    'effects' => array(
      210 => array(
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
    'label' => 'AKAA AKMI Press Centre',
    'effects' => array(
      223 => array(
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
    'label' => 'AKAA Map Thumbnail',
    'effects' => array(
      211 => array(
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
    'label' => 'Facts Block Icon',
    'effects' => array(
      212 => array(
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
    'label' => 'Area of Activities Two Activies',
    'effects' => array(
      221 => array(
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
    'label' => 'Akdn Search Listing',
    'effects' => array(
      186 => array(
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
    'label' => 'banner_image',
    'effects' => array(
      161 => array(
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
    'label' => 'Full Page Width Carousel',
    'effects' => array(
      291 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 1140,
          'height' => 500,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'banner_item_standard_home_page',
        ),
        'weight' => 0,
      ),
      296 => array(
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
    'label' => 'Banner Items Fall back',
    'effects' => array(
      198 => array(
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
    'label' => 'Two Third Width Carousel',
    'effects' => array(
      236 => array(
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
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 460,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      246 => array(
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
    'label' => 'Focus Area Listing Page Image',
    'effects' => array(
      121 => array(
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
    'label' => 'gallery_thumbnail',
    'effects' => array(
      261 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 335,
          'height' => 224,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'gallery_thumbnail',
        ),
        'weight' => -11,
      ),
      256 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 335,
          'height' => 224,
        ),
        'weight' => -10,
      ),
    ),
  );

  // Exported image style: half_width.
  $styles['half_width'] = array(
    'label' => 'half_width',
    'effects' => array(
      156 => array(
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
    'label' => 'Inline half width',
    'effects' => array(
      217 => array(
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
    'label' => 'instagram_feed_image',
    'effects' => array(
      217 => array(
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
    'label' => 'Mail Shot image cache',
    'effects' => array(
      237 => array(
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
    'label' => 'mini_feature',
    'effects' => array(
      31 => array(
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
    'label' => 'Photograph Thumbnail Below Carousel',
    'effects' => array(
      219 => array(
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
    'label' => 'Press Centre Detail',
    'effects' => array(
      214 => array(
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
        'name' => 'image_scale',
        'data' => array(
          'width' => 460,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
      216 => array(
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
    'label' => 'Publication Listing Image',
    'effects' => array(
      219 => array(
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
    'label' => 'Publications Detail Page',
    'effects' => array(
      227 => array(
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
    'label' => 'Social Feeds Vertical',
    'effects' => array(
      11 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 360,
          'height' => 240,
          'upscale' => 1,
        ),
        'weight' => -10,
      ),
      17 => array(
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
    'label' => 'Standard Listing',
    'effects' => array(
      205 => array(
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
    'label' => 'Standard Listing Aspect Switcher',
    'effects' => array(
      276 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 360,
          'height' => 240,
          'upscale' => 1,
        ),
        'weight' => -10,
      ),
      281 => array(
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

  // Exported image style: two_third_width_carousel_grid_inner.
  $styles['two_third_width_carousel_grid_inner'] = array(
    'label' => 'Two Third Width Carousel Grid Inner',
    'effects' => array(
      281 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 774,
          'height' => 456,
          'keepproportions' => 1,
          'reuse_crop_style' => 'banner_items_fall_back',
          'style_name' => 'two_third_width_carousel_grid_inner',
        ),
        'weight' => 0,
      ),
      286 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 774,
          'height' => 456,
        ),
        'weight' => 3,
      ),
    ),
  );

  return $styles;
}
