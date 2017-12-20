<?php
/**
 * @file
 * akdn_file_view_modes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function akdn_file_view_modes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}
