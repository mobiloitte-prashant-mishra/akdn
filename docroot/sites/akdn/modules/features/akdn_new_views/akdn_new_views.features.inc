<?php
/**
 * @file
 * akdn_new_views.features.inc
 */

/**
 * Implements hook_views_api().
 */
function akdn_new_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function akdn_new_views_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: akdn_home_page_carousel_french
  $nodequeues['akdn_home_page_carousel_french'] = array(
    'name' => 'akdn_home_page_carousel_french',
    'title' => 'AKDN Home Page Carousel French',
    'subqueue_title' => '',
    'size' => 20,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 1,
    'insert_at_front' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'article',
      1 => 'event',
      2 => 'featured_content',
      3 => 'focus_area',
      4 => 'gallery',
      5 => 'page',
      6 => 'podcast',
      7 => 'project',
      8 => 'publication',
      9 => 'speech',
    ),
    'roles' => array(),
    'count' => 0,
  );
  
  // Exported nodequeues: akdn_home_page_carousel_portuguese
  $nodequeues['akdn_home_page_carousel_portugue'] = array(
    'name' => 'akdn_home_page_carousel_portugue',
    'title' => 'AKDN Home Page Carousel Portuguese',
    'subqueue_title' => '',
    'size' => 20,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 1,
    'insert_at_front' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'article',
      1 => 'event',
      2 => 'featured_content',
      3 => 'focus_area',
      4 => 'gallery',
      5 => 'page',
      6 => 'podcast',
      7 => 'project',
      8 => 'publication',
      9 => 'speech',
    ),
    'roles' => array(),
    'count' => 0,
  );
  
  // Exported nodequeues: akdn_home_page_carousel_arabic
  $nodequeues['akdn_home_page_carousel_arabic'] = array(
    'name' => 'akdn_home_page_carousel_arabic',
    'title' => 'AKDN Home Page Carousel Arabic',
    'subqueue_title' => '',
    'size' => 20,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 1,
    'insert_at_front' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'article',
      1 => 'event',
      2 => 'featured_content',
      3 => 'focus_area',
      4 => 'gallery',
      5 => 'page',
      6 => 'podcast',
      7 => 'project',
      8 => 'publication',
      9 => 'speech',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
