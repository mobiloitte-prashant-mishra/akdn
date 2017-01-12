<?php
/**
 * @file
 * ak_panel_variants.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ak_panel_variants_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
