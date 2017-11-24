<?php
/**
 * @file
 * aka_panel_mapauto_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function aka_panel_mapauto_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
