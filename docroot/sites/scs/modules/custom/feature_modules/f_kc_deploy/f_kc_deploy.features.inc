<?php
/**
 * @file
 * f_kc_deploy.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_kc_deploy_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}
