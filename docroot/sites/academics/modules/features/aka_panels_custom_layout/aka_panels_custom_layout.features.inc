<?php
/**
 * @file
 * aka_panels_custom_layout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function aka_panels_custom_layout_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
}
