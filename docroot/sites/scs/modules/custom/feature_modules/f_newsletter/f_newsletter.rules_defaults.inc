<?php
/**
 * @file
 * f_newsletter.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function f_newsletter_default_rules_configuration() {
  $items = array();
  $items['rules_newsletter_auto_subscribe'] = entity_import('rules_config', '{ "rules_newsletter_auto_subscribe" : {
      "LABEL" : "Newsletter auto-subscribe",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "simplenews_rules", "rules" ],
      "ON" : [ "user_insert" ],
      "DO" : [
        { "simplenews_rules_action_subscribe" : { "mail" : [ "account:mail" ], "tid" : "136", "confirmation" : "2" } }
      ]
    }
  }');
  return $items;
}
