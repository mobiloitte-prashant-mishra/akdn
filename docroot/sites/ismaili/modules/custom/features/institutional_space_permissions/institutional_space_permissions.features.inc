<?php
/**
 * @file
 * institutional_space_permissions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function institutional_space_permissions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_registration_type().
 */
function institutional_space_permissions_default_registration_type() {
  $items = array();
  $items['event_registration'] = entity_import('registration_type', '{
    "name" : "event_registration",
    "label" : "Event Registration",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  return $items;
}
