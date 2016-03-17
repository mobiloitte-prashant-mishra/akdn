<?php
/**
 * @file
 * f_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function f_rules_default_rules_configuration() {
  $items = array();
  $items['rules_login_redirect_for_admin'] = entity_import('rules_config', '{ "rules_login_redirect_for_admin" : {
      "LABEL" : "Login Redirect for Admin",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_login" ],
      "IF" : [
        { "NOT text_matches" : {
            "text" : [ "site:current-page:path" ],
            "match" : "user\\/reset",
            "operation" : "starts"
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "workbench" } } ]
    }
  }');
  $items['rules_logout_redirect'] = entity_import('rules_config', '{ "rules_logout_redirect" : {
      "LABEL" : "Logout redirect",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_logout" ],
      "DO" : [ { "redirect" : { "url" : "user" } } ]
    }
  }');
  return $items;
}
