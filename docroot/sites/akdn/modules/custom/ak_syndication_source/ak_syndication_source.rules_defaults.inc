<?php
/**
 * @file
 * ak_syndication_source.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ak_syndication_source_default_rules_configuration() {
  $items = array();
  $items['rules_component_notify_mail'] = entity_import('rules_config', '{ "rules_component_notify_mail" : {
      "LABEL" : "Notify by mail (KC nodequeue)",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "php", "rules" ],
      "USES VARIABLES" : {
        "node" : { "label" : "Node", "type" : "node" },
        "nodequeue_name" : { "label" : "Nodequeue name", "type" : "text" }
      },
      "ACTION SET" : [
        { "mail" : {
            "to" : "\\u003C?php echo variable_get(\\u0027nodequeue_notify_recipient_kc\\u0027, \\u0027\\u0027); ?\\u003E",
            "subject" : "Content added to nodequeue",
            "message" : "Hello,\\r\\n\\r\\n[node:title] added to [nodequeue-name]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_deploy_to_ks'] = entity_import('rules_config', '{ "rules_deploy_to_ks" : {
      "LABEL" : "Add to KC nodequeue",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "nodequeue_rules", "php", "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "Node", "type" : "node" } },
      "ACTION SET" : [
        { "nodequeue_rules_action_add_node" : { "node" : [ "node" ], "queue" : "deploy_to_kc", "unique" : 1 } },
        { "php_eval" : { "code" : "drupal_flush_all_caches();" } }
      ]
    }
  }');
  return $items;
}
