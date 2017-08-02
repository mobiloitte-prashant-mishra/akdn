<?php
/**
 * @file
 * akdn_internal_news_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function akdn_internal_news_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function akdn_internal_news_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function akdn_internal_news_page_node_info() {
  $items = array(
    'akdn_internal_news_page' => array(
      'name' => t('AKDN internal News page'),
      'base' => 'node_content',
      'description' => t('AKDN internal News page content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'config_block' => array(
      'name' => t('Config Block'),
      'base' => 'node_content',
      'description' => t('This content type use for creating blocks for using configuration on AKDN internal News page.'),
      'has_title' => '1',
      'title_label' => t('Administrator Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
