<?php
/**
 * @file
 * aka_page_managers_handlers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function aka_page_managers_handlers_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
