<?php
/**
 * @file
 * hightlight_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hightlight_block_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}

/**
 * Implements hook_views_api().
 */
function hightlight_block_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function hightlight_block_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: home_page_highlight_left_queue
  $nodequeues['home_page_highlight_left_queue'] = array(
    'name' => 'home_page_highlight_left_queue',
    'title' => 'Home Page Highlight Left Queue',
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

  // Exported nodequeues: home_page_highlight_right_queue
  $nodequeues['home_page_highlight_right_queue'] = array(
    'name' => 'home_page_highlight_right_queue',
    'title' => 'Home Page Highlight Right Queue',
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

  return $nodequeues;
}
