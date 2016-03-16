<?php
/**
 * @file
 * institutional_space_permissions.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function institutional_space_permissions_default_rules_configuration() {
  $items = array();
  $items['rules_cloen_webform'] = entity_import('rules_config', '{ "rules_cloen_webform" : {
      "LABEL" : "Cloen Webform",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "php" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "institutional_space" : "institutional_space" } }
          }
        }
      ],
      "DO" : [
        { "php_eval" : { "code" : "if (function_exists(\\u0027webform_anonymous_edits_webform_clone\\u0027)) {\\r\\n$parameters = array (\\u0027master_webform_id\\u0027 =\\u003E 8186,\\r\\n  \\u0027title\\u0027 =\\u003E \\u0027Contact us\\u0027,\\r\\n  \\u0027variable_name\\u0027 =\\u003E \\u0027master_webform_id\\u0027,\\r\\n \\u0027space_tid\\u0027 =\\u003E 10316,\\r\\n  \\u0027subscribe_category\\u0027 =\\u003E array());\\r\\n  webform_anonymous_edits_webform_clone($node, $parameters );\\r\\n\\r\\n$old_subscribe_nid = 10736;\\r\\n$newsletter_everytime_tid = webform_anonymous_edits_create_taxonomy_term(21);\\r\\n$newsletter_weekly_tid = webform_anonymous_edits_create_taxonomy_term(9001);\\r\\nwebform_anonymous_edits_simplenews_save_category($newsletter_everytime_tid, 21);\\r\\nwebform_anonymous_edits_simplenews_save_category($newsletter_weekly_tid, 9001);\\r\\n$parameters = array (\\u0027master_webform_id\\u0027 =\\u003E $old_subscribe_nid,\\r\\n  \\u0027title\\u0027 =\\u003E \\u0027Subscribe\\u0027,\\r\\n  \\u0027variable_name\\u0027 =\\u003E \\u0027master_webform_id\\u0027,\\r\\n  \\u0027space_tid\\u0027 =\\u003E 10316,\\r\\n  \\u0027subscribe_category\\u0027 =\\u003E array($newsletter_everytime_tid =\\u003E $newsletter_everytime_tid, $newsletter_weekly_tid =\\u003E $newsletter_weekly_tid));\\r\\n$webform = webform_anonymous_edits_webform_clone($node, $parameters );\\r\\n$webform_nid = $webform-\\u003Enid;\\r\\n\\/\\/ set template for subscribe form\\r\\n$webform_info = variable_get(\\u0027webform_anonymous_edits_webform_info\\u0027, array());\\r\\n$webform_info[$webform_nid] = $webform_nid;\\r\\nvariable_set(\\u0027webform_anonymous_edits_webform_info\\u0027, $webform_info);\\r\\nsystem_rebuild_theme_data();\\r\\ndrupal_theme_rebuild();\\r\\n\\r\\ndb_query(\\u0022REPLACE INTO  webform_dynamic_recipients (nid,cid,recipients) \\r\\n      SELECT :pnid, cid, recipients from webform_dynamic_recipients\\r\\n      where nid=:old_nid\\u0022, array(\\u0027:pnid\\u0027 =\\u003E $webform-\\u003Enid, \\u0027:old_nid\\u0027 =\\u003E $old_subscribe_nid));\\r\\ndb_query(\\u0022REPLACE INTO simplenews_subscription (snid,tid,status,timestamp,source) \\r\\n    VALUES (:pnid, :ptid, 1, :pnow, \\u0027mass subscribe\\u0027)\\u0022, array(\\u0027:pnid\\u0027 =\\u003E $webform-\\u003Enid, \\u0027:ptid\\u0027 =\\u003E $newsletter_everytime_tid, \\u0027:pnow\\u0027 =\\u003E $node-\\u003Ecreated));\\r\\ndb_query(\\u0022REPLACE INTO simplenews_subscription (snid,tid,status,timestamp,source) \\r\\n    VALUES (:pnid, :ptid, 1, :pnow, \\u0027mass subscribe\\u0027)\\u0022, array(\\u0027:pnid\\u0027 =\\u003E $webform-\\u003Enid, \\u0027:ptid\\u0027 =\\u003E $newsletter_weekly_tid, \\u0027:pnow\\u0027 =\\u003E $node-\\u003Ecreated));\\r\\n}" } }
      ]
    }
  }');
  $items['rules_node_create_update_mark_solr'] = entity_import('rules_config', '{ "rules_node_create_update_mark_solr" : {
      "LABEL" : "node create update mark solr",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "php" ],
      "ON" : [ "node_update", "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : {
                "calendar_event" : "calendar_event",
                "events" : "events",
                "recipe" : "recipe"
              }
            }
          }
        }
      ],
      "DO" : [
        { "php_eval" : { "code" : "if (function_exists(\\u0027ismaili_custom_node_update_for_solr\\u0027)) {\\r\\n  ismaili_custom_node_update_for_solr($node);\\r\\n}" } }
      ]
    }
  }');
  return $items;
}
