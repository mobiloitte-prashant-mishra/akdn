<?php
/**
 * @file
 * views_of_ismaili.features.inc
 */

/**
 * Implements hook_views_api().
 */
function views_of_ismaili_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function views_of_ismaili_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: golden_jubilee_
  $nodequeues['golden_jubilee_'] = array(
    'name' => 'golden_jubilee_',
    'title' => 'Golden Jubilee ',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: home_page_banner
  $nodequeues['home_page_banner'] = array(
    'name' => 'home_page_banner',
    'title' => 'Homepage : Featured Banner',
    'subqueue_title' => '',
    'size' => 10,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'article',
      1 => 'child_compound_articles',
      2 => 'events',
      3 => 'hub_page',
      4 => 'image_carousel',
      5 => 'ismaili_centres',
      6 => 'news_headline_items',
      7 => 'nutrient',
      8 => 'page',
      9 => 'parent_compound_articles',
      10 => 'photo_gallery',
      11 => 'recipe',
      12 => 'speech',
      13 => 'video',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: home_page_highlight_box_left
  $nodequeues['home_page_highlight_box_left'] = array(
    'name' => 'home_page_highlight_box_left',
    'title' => 'Home Page Highlight Box:Left',
    'subqueue_title' => '',
    'size' => 1,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'article',
      1 => 'calendar_event',
      2 => 'calendar_pages',
      3 => 'child_compound_articles',
      4 => 'events',
      5 => 'footer_menu',
      6 => 'hub_page',
      7 => 'image_carousel',
      8 => 'institutional_space',
      9 => 'ip_hub_page',
      10 => 'ismaili_centres',
      11 => 'news_headline_items',
      12 => 'nutrient',
      13 => 'page',
      14 => 'parent_compound_articles',
      15 => 'people',
      16 => 'photo_gallery',
      17 => 'recipe',
      18 => 'speech',
      19 => 'speech_quote',
      20 => 'tips',
      21 => 'video',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: home_page_highlight_box_right
  $nodequeues['home_page_highlight_box_right'] = array(
    'name' => 'home_page_highlight_box_right',
    'title' => 'Home Page Highlight Box:Right',
    'subqueue_title' => '',
    'size' => 1,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'article',
      1 => 'calendar_event',
      2 => 'calendar_pages',
      3 => 'child_compound_articles',
      4 => 'events',
      5 => 'footer_menu',
      6 => 'hub_page',
      7 => 'image_carousel',
      8 => 'institutional_space',
      9 => 'ip_hub_page',
      10 => 'ismaili_centres',
      11 => 'news_headline_items',
      12 => 'nutrient',
      13 => 'page',
      14 => 'parent_compound_articles',
      15 => 'people',
      16 => 'photo_gallery',
      17 => 'recipe',
      18 => 'speech',
      19 => 'speech_quote',
      20 => 'tips',
      21 => 'video',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: home_page_quote_of_the_day
  $nodequeues['home_page_quote_of_the_day'] = array(
    'name' => 'home_page_quote_of_the_day',
    'title' => 'Home page quote of the day',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'speech_quote',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: home_page_tiles
  $nodequeues['home_page_tiles'] = array(
    'name' => 'home_page_tiles',
    'title' => 'Homepage : Featured Tiles',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'article',
      1 => 'child_compound_articles',
      2 => 'events',
      3 => 'hub_page',
      4 => 'image_carousel',
      5 => 'ismaili_centres',
      6 => 'news_headline_items',
      7 => 'nutrient',
      8 => 'page',
      9 => 'parent_compound_articles',
      10 => 'photo_gallery',
      11 => 'recipe',
      12 => 'speech',
      13 => 'video',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: ismaili_centre_banner_items
  $nodequeues['ismaili_centre_banner_items'] = array(
    'name' => 'ismaili_centre_banner_items',
    'title' => 'Ismaili Centre banner Items',
    'subqueue_title' => '',
    'size' => 24,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'article',
      1 => 'child_compound_articles',
      2 => 'events',
      3 => 'hub_page',
      4 => 'image_carousel',
      5 => 'ismaili_centres',
      6 => 'news_headline_items',
      7 => 'nutrient',
      8 => 'page',
      9 => 'parent_compound_articles',
      10 => 'photo_gallery',
      11 => 'recipe',
      12 => 'video',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: ismaili_centre_feature_tiles
  $nodequeues['ismaili_centre_feature_tiles'] = array(
    'name' => 'ismaili_centre_feature_tiles',
    'title' => 'Ismaili Centre Feature Tiles',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'article',
      1 => 'child_compound_articles',
      2 => 'events',
      3 => 'hub_page',
      4 => 'image_carousel',
      5 => 'ismaili_centres',
      6 => 'news_headline_items',
      7 => 'nutrient',
      8 => 'page',
      9 => 'parent_compound_articles',
      10 => 'photo_gallery',
      11 => 'recipe',
      12 => 'speech',
      13 => 'video',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: ismaili_centre_left
  $nodequeues['ismaili_centre_left'] = array(
    'name' => 'ismaili_centre_left',
    'title' => 'Ismaili Centre Highlight Box: Left',
    'subqueue_title' => '',
    'size' => 1,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'article',
      1 => 'calendar_event',
      2 => 'child_compound_articles',
      3 => 'events',
      4 => 'page',
      5 => 'parent_compound_articles',
      6 => 'speech',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: ismaili_centre_quote_of_the_day
  $nodequeues['ismaili_centre_quote_of_the_day'] = array(
    'name' => 'ismaili_centre_quote_of_the_day',
    'title' => 'Ismaili Centre Quote of the day',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'speech_quote',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: ismaili_centre_right
  $nodequeues['ismaili_centre_right'] = array(
    'name' => 'ismaili_centre_right',
    'title' => 'Ismaili Centre Highlight Box: Right',
    'subqueue_title' => '',
    'size' => 1,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'article',
      1 => 'calendar_event',
      2 => 'child_compound_articles',
      3 => 'events',
      4 => 'image_carousel',
      5 => 'page',
      6 => 'parent_compound_articles',
      7 => 'speech',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: nutrition_centre_five_ways_to_bl
  $nodequeues['nutrition_centre_five_ways_to_bl'] = array(
    'name' => 'nutrition_centre_five_ways_to_bl',
    'title' => 'Nutrition Centre : Five ways to[Block]',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'article',
      1 => 'page',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: nutrition_centre_recipe_block_
  $nodequeues['nutrition_centre_recipe_block_'] = array(
    'name' => 'nutrition_centre_recipe_block_',
    'title' => 'Nutrition Centre: recipe [block]',
    'subqueue_title' => '',
    'size' => 8,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'recipe',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
