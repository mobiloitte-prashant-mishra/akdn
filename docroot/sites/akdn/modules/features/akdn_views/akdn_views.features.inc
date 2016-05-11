<?php
/**
 * @file
 * akdn_views.features.inc
 */

/**
 * Implements hook_views_api().
 */
function akdn_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function akdn_views_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: about_us_carousel
  $nodequeues['about_us_carousel'] = array(
    'name' => 'about_us_carousel',
    'title' => 'About Us Carousel',
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
      0 => 'project',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: about_us_his_highness_carousel
  $nodequeues['about_us_his_highness_carousel'] = array(
    'name' => 'about_us_his_highness_carousel',
    'title' => 'About Us His Highness Carousel',
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
      1 => 'event',
      2 => 'featured_content',
      3 => 'gallery',
      4 => 'geography',
      5 => 'project',
      6 => 'publication',
      7 => 'speech',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: about_us_slides
  $nodequeues['about_us_slides'] = array(
    'name' => 'about_us_slides',
    'title' => 'About Us Slides',
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
      1 => 'event',
      2 => 'featured_content',
      3 => 'gallery',
      4 => 'podcast',
      5 => 'project',
      6 => 'publication',
      7 => 'speech',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: agency_listing_page_publications
  $nodequeues['agency_listing_page_publications'] = array(
    'name' => 'agency_listing_page_publications',
    'title' => 'Agency Listing Page Publications',
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
    'subqueues' => 1,
    'types' => array(
      0 => 'publication',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: akaa_home_page_slideshow
  $nodequeues['akaa_home_page_slideshow'] = array(
    'name' => 'akaa_home_page_slideshow',
    'title' => 'AKAA Home Page Slideshow',
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
    'subqueues' => 1,
    'types' => array(
      0 => 'architecture_project',
      1 => 'article',
      2 => 'event',
      3 => 'featured_content',
      4 => 'gallery',
      5 => 'podcast',
      6 => 'project',
      7 => 'publication',
      8 => 'speech',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: akmi_cd_dvd_page_nodequeue
  $nodequeues['akmi_cd_dvd_page_nodequeue'] = array(
    'name' => 'akmi_cd_dvd_page_nodequeue',
    'title' => 'AKMI CD-DVD PAGE Nodequeue',
    'subqueue_title' => '',
    'size' => 4,
    'link' => 'add',
    'link_remove' => 'remove',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'podcast',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: akmi_event_landing_page
  $nodequeues['akmi_event_landing_page'] = array(
    'name' => 'akmi_event_landing_page',
    'title' => 'AKMI Event landing page',
    'subqueue_title' => '',
    'size' => 4,
    'link' => 'add',
    'link_remove' => 'remove',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'event',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: akmi_homepage_slideshow
  $nodequeues['akmi_homepage_slideshow'] = array(
    'name' => 'akmi_homepage_slideshow',
    'title' => 'AKMI homepage slideshow',
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
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'akmi_cd_dvd',
      1 => 'akmi_instrument',
      2 => 'akmi_performance',
      3 => 'article',
      4 => 'event',
      5 => 'featured_content',
      6 => 'podcast',
      7 => 'project',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: akmi_performance_page
  $nodequeues['akmi_performance_page'] = array(
    'name' => 'akmi_performance_page',
    'title' => 'AKMI Performance page',
    'subqueue_title' => '',
    'size' => 4,
    'link' => 'add',
    'link_remove' => 'remove',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'featured_content',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: akmi_performance_programmes_page
  $nodequeues['akmi_performance_programmes_page'] = array(
    'name' => 'akmi_performance_programmes_page',
    'title' => 'AKMI Performance Programmes page',
    'subqueue_title' => '',
    'size' => 4,
    'link' => 'add',
    'link_remove' => 'remove',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'featured_content',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: akmi_press_center_page
  $nodequeues['akmi_press_center_page'] = array(
    'name' => 'akmi_press_center_page',
    'title' => 'AKMI Press Center page',
    'subqueue_title' => '',
    'size' => 4,
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
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: featured_content
  $nodequeues['featured_content'] = array(
    'name' => 'featured_content',
    'title' => 'AKDN Home Page Carousel',
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
    'subqueues' => 1,
    'types' => array(
      0 => 'article',
      1 => 'event',
      2 => 'featured_content',
      3 => 'gallery',
      4 => 'page',
      5 => 'podcast',
      6 => 'project',
      7 => 'publication',
      8 => 'speech',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: home_page_carousel
  $nodequeues['home_page_carousel'] = array(
    'name' => 'home_page_carousel',
    'title' => 'Home page carousel',
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
      0 => 'project',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: nodeque_for_current_year
  $nodequeues['nodeque_for_current_year'] = array(
    'name' => 'nodeque_for_current_year',
    'title' => 'Nodeque For Current Year Home Page Tile',
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
      0 => 'architecture_project',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: press_center_carousel
  $nodequeues['press_center_carousel'] = array(
    'name' => 'press_center_carousel',
    'title' => 'Press Center Carousel',
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
      0 => 'project',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: press_centre
  $nodequeues['press_centre'] = array(
    'name' => 'press_centre',
    'title' => 'Press Centre Slideshow',
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
    'subqueues' => 1,
    'types' => array(
      0 => 'article',
      1 => 'event',
      2 => 'featured_content',
      3 => 'podcast',
      4 => 'project',
      5 => 'publication',
      6 => 'speech',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: speech_slideshow
  $nodequeues['speech_slideshow'] = array(
    'name' => 'speech_slideshow',
    'title' => 'Speech slideshow',
    'subqueue_title' => '',
    'size' => 5,
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

  // Exported nodequeues: speech_themes
  $nodequeues['speech_themes'] = array(
    'name' => 'speech_themes',
    'title' => 'Speech Themes',
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
      0 => 'speech_theme',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: thematic_area
  $nodequeues['thematic_area'] = array(
    'name' => 'thematic_area',
    'title' => 'Thematic Area',
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
      0 => 'agency',
      1 => 'focus_area',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
