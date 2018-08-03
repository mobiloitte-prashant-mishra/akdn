<?php
/**
 * @file
 * akdn_new_views.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function akdn_new_views_default_rules_configuration() {
  $items = array();
  $items['rules_change_url_on_the_basis_of_language_alias'] = entity_import('rules_config', '{ "rules_change_url_on_the_basis_of_language_alias" : {
      "LABEL" : "Change Url on the basis of Language Alias",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "path", "rules", "php" ],
      "ON" : { "node_insert" : [], "node_update" : [] },
      "IF" : [
        { "path_has_alias" : { "source" : "$path=$node-\\u003Epath[\\u0027alias\\u0027];\\r\\n$lang=$node-\\u003Epath[\\u0027language\\u0027];\\r\\nif($lang != \\u0027en\\u0027){\\r\\nreturn TRUE;\\r\\n}else{\\r\\nreturn TRUE;\\r\\n}" } }
      ],
      "DO" : [
        { "php_eval" : { "code" : "$path=$node-\\u003Epath[\\u0027alias\\u0027];\\r\\n$lang=$node-\\u003Epath[\\u0027language\\u0027];\\r\\nif($lang != \\u0027en\\u0027){\\r\\n$alterUrl = $lang.\\u0027\\/\\u0027.$path;\\r\\n}else{\\r\\n$alterUrl =  $path;\\r\\n}\\r\\n$node-\\u003Epath[\\u0027alias\\u0027]=$alterUrl;\\r\\nnode_save($node);\\r\\n" } }
      ]
    }
  }');
  return $items;
}
