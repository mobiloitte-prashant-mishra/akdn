<?php
/**
 * @file
 * f_speech_quotes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_speech_quotes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function f_speech_quotes_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function f_speech_quotes_node_info() {
  $items = array(
    'speech_quote' => array(
      'name' => t('Speech Quote'),
      'base' => 'node_content',
      'description' => t('Quotes related to speeches.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
