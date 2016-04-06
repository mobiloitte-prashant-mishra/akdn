<?php
/**
 * @file
 * solr_quote_finder.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function solr_quote_finder_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function solr_quote_finder_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
