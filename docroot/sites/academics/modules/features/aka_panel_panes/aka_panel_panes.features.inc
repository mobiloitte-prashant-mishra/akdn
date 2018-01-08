<?php
/**
 * @file
 * aka_panel_panes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function aka_panel_panes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}
