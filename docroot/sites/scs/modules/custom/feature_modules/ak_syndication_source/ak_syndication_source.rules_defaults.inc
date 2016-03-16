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
      "LABEL" : "Notify by mail (AKDN nodequeue)",
      "PLUGIN" : "action set",
      "REQUIRES" : [ "php", "rules" ],
      "USES VARIABLES" : {
        "node" : { "label" : "Node", "type" : "node" },
        "nodequeue_name" : { "label" : "Nodequeue name", "type" : "text" }
      },
      "ACTION SET" : [
        { "mail" : {
            "to" : "\\u003C?php echo variable_get(\\u0027nodequeue_notify_recipient_akdn\\u0027, \\u0027\\u0027); ?\\u003E",
            "subject" : "Content added to nodequeue",
            "message" : "Hello,\\r\\n\\r\\n[node:title] added to [nodequeue-name]"
          }
        }
      ]
    }
  }');
  $items['rules_component_notify_mail_iis'] = entity_import('rules_config', '{ "rules_component_notify_mail_iis" : {
      "LABEL" : "Notify by mail (IIS nodequeue)",
      "PLUGIN" : "action set",
      "REQUIRES" : [ "php", "rules" ],
      "USES VARIABLES" : {
        "node" : { "label" : "Node", "type" : "node" },
        "nodequeue_name" : { "label" : "Nodequeue name", "type" : "text" }
      },
      "ACTION SET" : [
        { "mail" : {
            "to" : "\\u003C?php echo variable_get(\\u0027nodequeue_notify_recipient_iis\\u0027, \\u0027\\u0027); ?\\u003E",
            "subject" : "Content added to nodequeue",
            "message" : "Hello,\\r\\n\\r\\n[node:title] added to [nodequeue-name]"
          }
        }
      ]
    }
  }');
  $items['rules_component_notify_mail_ismaili'] = entity_import('rules_config', '{ "rules_component_notify_mail_ismaili" : {
      "LABEL" : "Notify by mail (Ismaili nodequeue)",
      "PLUGIN" : "action set",
      "REQUIRES" : [ "php", "rules" ],
      "USES VARIABLES" : {
        "node" : { "label" : "Node", "type" : "node" },
        "nodequeue_name" : { "label" : "Nodequeue name", "type" : "text" }
      },
      "ACTION SET" : [
        { "mail" : {
            "to" : "\\u003C?php echo variable_get(\\u0027nodequeue_notify_recipient_ismaili\\u0027, \\u0027\\u0027); ?\\u003E",
            "subject" : "Content added to nodequeue",
            "message" : "Hello,\\r\\n\\r\\n[node:title] added to [nodequeue-name]"
          }
        }
      ]
    }
  }');
  return $items;
}
