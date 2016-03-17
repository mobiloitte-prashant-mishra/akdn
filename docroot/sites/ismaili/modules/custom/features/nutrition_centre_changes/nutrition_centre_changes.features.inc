<?php
/**
 * @file
 * nutrition_centre_changes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nutrition_centre_changes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nutrition_centre_changes_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function nutrition_centre_changes_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: five_ways_too
  $nodequeues['five_ways_too'] = array(
    'name' => 'five_ways_too',
    'title' => 'Nutrition Centre : Five ways to[Block] ',
    'subqueue_title' => '',
    'size' => 6,
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

  // Exported nodequeues: nutrition_centre_banner
  $nodequeues['nutrition_centre_banner'] = array(
    'name' => 'nutrition_centre_banner',
    'title' => 'Nutrition Centre Banner',
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
      1 => 'image_carousel',
      2 => 'recipe',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: nutrition_centre_today_s_hot_tip
  $nodequeues['nutrition_centre_today_s_hot_tip'] = array(
    'name' => 'nutrition_centre_today_s_hot_tip',
    'title' => 'Nutrition Centre: Today\'s Hot Tip',
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
      0 => 'tips',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: nutrition_centre_video_tour
  $nodequeues['nutrition_centre_video_tour'] = array(
    'name' => 'nutrition_centre_video_tour',
    'title' => 'Nutrition Centre Video Tour',
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
      0 => 'video',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: recipe
  $nodequeues['recipe'] = array(
    'name' => 'recipe',
    'title' => 'Recipe',
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
      0 => 'recipe',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_node_info().
 */
function nutrition_centre_changes_node_info() {
  $items = array(
    'nutrient' => array(
      'name' => t('Nutrient'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'recipe' => array(
      'name' => t('Recipe'),
      'base' => 'node_content',
      'description' => t('Recipe for nutrition centre'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
