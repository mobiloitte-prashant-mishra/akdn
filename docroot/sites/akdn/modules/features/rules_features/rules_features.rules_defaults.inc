<?php
/**
 * @file
 * rules_features.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rules_features_default_rules_configuration() {
  $items = array();
  $items['rules_rule1'] = entity_import('rules_config', '{ "rules_rule1" : {
      "LABEL" : "Add Node to Indexing Rule",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "search_api", "rules" ],
      "ON" : { "node_insert" : [] },
      "DO" : [ { "search_api_index" : { "entity" : [ "node:source" ] } } ]
    }
  }');
  return $items;
}
