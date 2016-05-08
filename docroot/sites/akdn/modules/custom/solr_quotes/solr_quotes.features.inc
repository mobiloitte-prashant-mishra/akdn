<?php
/**
 * @file
 * solr_quotes.features.inc
 */

/**
 * Implements hook_views_api().
 */
function solr_quotes_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function solr_quotes_default_search_api_index() {
  $items = array();
  $items['quote_index'] = entity_import('search_api_index', '{
    "name" : "quote_index",
    "machine_name" : "quote_index",
    "description" : null,
    "server" : "akdn_acquia",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "nid" : { "type" : "integer" },
        "type" : { "type" : "string" },
        "title" : { "type" : "text" },
        "language" : { "type" : "string" },
        "status" : { "type" : "integer" },
        "image_public_uri" : { "type" : "text" },
        "speech_quote_speech_nid" : { "type" : "string" },
        "quotes_location" : { "type" : "string" },
        "quotes_speaker" : { "type" : "string" },
        "quotes_agency" : { "type" : "string" },
        "quotes_country" : { "type" : "string" },
        "quote_publish_date" : { "type" : "date" },
        "field_quotes_publish_date" : { "type" : "date" },
        "field_publish_date" : { "type" : "date" },
        "field_speech_themes" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_speech_reference" : { "type" : "integer", "entity_type" : "node" },
        "search_api_language" : { "type" : "string" },
        "body:value" : { "type" : "text" },
        "search_api_url" : { "type" : "uri" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "speech_quote" : "speech_quote" } }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : {
            "lang_field" : "language",
            "languages" : {
              "und" : "und",
              "en" : "en",
              "fr" : "fr",
              "ar" : "ar",
              "fa" : "fa",
              "ru" : "ru"
            }
          }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_denormalized_entity_grouping" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "fields" : { "speech_quote_speech_nid" : true },
            "group_sort" : "speech_quote_speech_nid",
            "group_sort_direction" : "asc",
            "truncate" : 0,
            "group_limit" : "100"
          }
        },
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 0,
          "weight" : "15",
          "settings" : { "fields" : { "title" : true } }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
