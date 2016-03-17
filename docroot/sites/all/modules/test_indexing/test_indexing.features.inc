<?php
/**
 * @file
 * test_indexing.features.inc
 */

/**
 * Implements hook_default_search_api_index().
 */
function test_indexing_default_search_api_index() {
  $items = array();
  $items['ismaili_index'] = entity_import('search_api_index', '{
    "name" : "Ismaili index",
    "machine_name" : "ismaili_index",
    "description" : null,
    "server" : "srijan_solr",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "nid" : { "type" : "integer" },
        "type" : { "type" : "string" },
        "title" : { "type" : "string" },
        "language" : { "type" : "string" },
        "url" : { "type" : "uri" },
        "status" : { "type" : "boolean" },
        "promote" : { "type" : "boolean" },
        "sticky" : { "type" : "boolean" },
        "created" : { "type" : "date" },
        "author" : { "type" : "integer", "entity_type" : "user" },
        "nutrient_machine_name" : { "type" : "text" },
        "string_title" : { "type" : "string" },
        "node_title" : { "type" : "text", "boost" : "21.0" },
        "ctype" : { "type" : "string" },
        "cmicrosite" : { "type" : "string" },
        "salt_light" : { "type" : "string" },
        "sugar_light" : { "type" : "string" },
        "fat_light" : { "type" : "string" },
        "sfat_light" : { "type" : "string" },
        "sfat_nutrient" : { "type" : "string" },
        "fat_nutrient" : { "type" : "string" },
        "sugar_nutrient" : { "type" : "string" },
        "salt_nutrient" : { "type" : "string" },
        "protein_nutrient" : { "type" : "string" },
        "iron_nutrient" : { "type" : "string" },
        "calcium_nutrient" : { "type" : "string" },
        "cholesterol_nutrient" : { "type" : "string" },
        "trans_fat_nutrient" : { "type" : "string" },
        "calories_nutrient" : { "type" : "string" },
        "carbohydrate_nutrient" : { "type" : "string" },
        "fibre_nutrient" : { "type" : "string" },
        "sodium_nutrient" : { "type" : "string" },
        "vitamin_b12_nutrient" : { "type" : "string" },
        "vitamin_d_nutrient" : { "type" : "string" },
        "vitamin_c_nutrient" : { "type" : "string" },
        "vitamin_a_nutrient" : { "type" : "string" },
        "potassium_nutrient" : { "type" : "string" },
        "sfat_nutrients" : { "type" : "string" },
        "fat_nutrients" : { "type" : "string" },
        "sugar_nutrients" : { "type" : "string" },
        "salt_nutrients" : { "type" : "string" },
        "protein_nutrients" : { "type" : "string" },
        "iron_nutrients" : { "type" : "string" },
        "calcium_nutrients" : { "type" : "string" },
        "cholesterol_nutrients" : { "type" : "string" },
        "trans_fat_nutrients" : { "type" : "string" },
        "calories_nutrients" : { "type" : "string" },
        "carbohydrate_nutrients" : { "type" : "string" },
        "fibre_nutrients" : { "type" : "string" },
        "sodium_nutrients" : { "type" : "string" },
        "vitamin_b12_nutrients" : { "type" : "string" },
        "vitamin_d_nutrients" : { "type" : "string" },
        "vitamin_c_nutrients" : { "type" : "string" },
        "vitamin_a_nutrients" : { "type" : "string" },
        "potassium_nutrients" : { "type" : "string" },
        "field_speech_reference" : { "type" : "integer", "entity_type" : "node" },
        "field_speech_themes" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_microsite" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_select_ismaili_centre" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_simplenews_term" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_institutional_space" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_microsite_institutional_sp" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_short_title" : { "type" : "text", "boost" : "13.0" },
        "field_exclude_from_rss" : { "type" : "boolean" },
        "field_geographies" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_speech_location" : { "type" : "text" },
        "field_occasion" : { "type" : "text" },
        "field_speaker" : { "type" : "integer", "entity_type" : "node" },
        "field_brightcove_id" : { "type" : "text" },
        "field_publication_author" : { "type" : "text" },
        "field_publication_date" : { "type" : "date" },
        "field_primary_category" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_publish_date" : { "type" : "date" },
        "field_omit_introduction" : { "type" : "boolean" },
        "field_promote_content" : { "type" : "list\\u003Cboolean\\u003E" },
        "field_event_duration" : { "type" : "decimal" },
        "field_hidden" : { "type" : "boolean" },
        "field_hub_page" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_list_date" : { "type" : "date" },
        "field_location" : { "type" : "text" },
        "field_mark_past" : { "type" : "boolean" },
        "field_author" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_article_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_exclude_from_archive" : { "type" : "boolean" },
        "field_related_recipes" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_admin_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_venue" : { "type" : "text" },
        "field_parent_article" : { "type" : "integer", "entity_type" : "node" },
        "field_internal_page" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_display_blocks" : { "type" : "list\\u003Ctext\\u003E" },
        "field_institution_display_name" : { "type" : "string" },
        "field_select_item_type" : { "type" : "string" },
        "field_author_name" : { "type" : "text" },
        "field_preparation_time" : { "type" : "text" },
        "field_cooking_time" : { "type" : "text" },
        "field_serving_weight" : { "type" : "text" },
        "field_attribution" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_serving_weight_quantity" : { "type" : "integer" },
        "field_nutrient_data" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_type_of_food" : { "type" : "string" },
        "field_cuisine_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_traffic_light" : { "type" : "boolean" },
        "field_weight" : { "type" : "integer" },
        "field_food_ri" : { "type" : "decimal" },
        "field_drink_ri" : { "type" : "decimal" },
        "field_type_of_people" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_email" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "search_api_aggregation_1" : { "type" : "text" },
        "search_api_combined_1" : { "type" : "list\\u003Ctext\\u003E" },
        "search_api_combined_2" : { "type" : "list\\u003Ctext\\u003E" },
        "body:value" : { "type" : "text" },
        "field_microsite:tid" : { "type" : "integer" },
        "field_microsite:name" : { "type" : "text" },
        "field_geographies:tid" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_geographies:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_tags:tid" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_tags:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_primary_category:tid" : { "type" : "integer" },
        "field_primary_category:name" : { "type" : "text" },
        "field_main_image:file" : { "type" : "integer", "entity_type" : "file" },
        "field_event_date:value" : { "type" : "date" },
        "field_event_date:value2" : { "type" : "date" },
        "field_event_date:duration" : { "type" : "duration" },
        "field_mapping_location:lid" : { "type" : "integer" },
        "field_mapping_location:latitude" : { "type" : "decimal" },
        "field_mapping_location:longitude" : { "type" : "decimal" },
        "field_mapping_location:name" : { "type" : "text" },
        "field_mapping_location:street" : { "type" : "text" },
        "field_mapping_location:additional" : { "type" : "text" },
        "field_mapping_location:city" : { "type" : "text" },
        "field_mapping_location:province" : { "type" : "text" },
        "field_mapping_location:postal_code" : { "type" : "text" },
        "field_mapping_location:country" : { "type" : "text" },
        "field_mapping_location:province_name" : { "type" : "text" },
        "field_mapping_location:country_name" : { "type" : "text" },
        "field_body:value" : { "type" : "list\\u003Ctext\\u003E" },
        "field_link:url" : { "type" : "uri" },
        "field_urgent_health_info:value" : { "type" : "text" },
        "field_healthy_hints:value" : { "type" : "text" },
        "field_nutrient_data:field_nutrient_val" : { "type" : "list\\u003Cdecimal\\u003E" },
        "field_nutrient_data:field_nutrient_element" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_nutrient_data:field_nutrient_element:title" : { "type" : "list\\u003Ctext\\u003E" },
        "field_nutrient_data:field_nutrient_element:nutrient_machine_name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_nutrient_data:field_nutrient_element:field_short_title" : { "type" : "list\\u003Ctext\\u003E" },
        "field_nutrient_data:field_nutrient_element:field_serving_weight_quantity" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_nutrient_data:field_nutrient_element:field_imperial_unit" : { "type" : "list\\u003Ctext\\u003E" },
        "field_nutrient_data:field_nutrient_element:field_type_of_food" : { "type" : "list\\u003Cstring\\u003E" },
        "field_nutrient_data:field_nutrient_element:field_unit" : { "type" : "list\\u003Cstring\\u003E" },
        "field_nutrient_data:field_nutrient_element:field_traffic_light" : { "type" : "list\\u003Cboolean\\u003E" },
        "field_nutrient_data:field_nutrient_element:field_weight" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_nutrient_data:field_nutrient_element:field_food_ri" : { "type" : "list\\u003Cdecimal\\u003E" },
        "field_nutrient_data:field_nutrient_element:field_drink_ri" : { "type" : "list\\u003Cdecimal\\u003E" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : {
              "article" : "article",
              "page" : "page",
              "calendar_event" : "calendar_event",
              "child_compound_articles" : "child_compound_articles",
              "events" : "events",
              "photo_gallery" : "photo_gallery",
              "ismaili_centres" : "ismaili_centres",
              "news_headline_items" : "news_headline_items",
              "parent_compound_articles" : "parent_compound_articles",
              "recipe" : "recipe",
              "speech" : "speech",
              "speech_quote" : "speech_quote",
              "video" : "video"
            }
          }
        },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_combined" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "search_api_combined_1" : {
                "name" : "Ismail Tags",
                "imitate" : "field_tags:name",
                "fields" : [
                  "field_microsite:name",
                  "field_geographies:name",
                  "field_tags:name",
                  "field_primary_category:name"
                ],
                "description" : "A @type combined of the following fields: Microsite \\u00bb Name, Geographies \\u00bb Name, Tags \\u00bb Name, Primary Category \\u00bb Name."
              },
              "search_api_combined_2" : {
                "name" : "Common tags",
                "imitate" : "field_tags",
                "fields" : [
                  "field_microsite",
                  "field_geographies",
                  "field_tags",
                  "field_primary_category",
                  "field_article_type"
                ],
                "description" : "A @type combined of the following fields: Microsite, Geographies, Tags, Primary Category, Article Type."
              }
            }
          }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "Search text",
                "type" : "fulltext",
                "fields" : [
                  "title",
                  "author",
                  "string_title",
                  "node_title",
                  "ctype",
                  "field_short_title",
                  "field_publication_author",
                  "field_author",
                  "field_author_name",
                  "field_body:value"
                ],
                "description" : "A Fulltext aggregation of the following fields: Title, Author, String title, Title of the node [used for search], Type of the node [Custom], Short Title, Publication Author, Author, Author Name, Body \\u00bb Text."
              }
            }
          }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_denormalized_entity_grouping" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_speech_location" : true,
              "field_occasion" : true,
              "field_brightcove_id" : true,
              "field_publication_author" : true,
              "field_institution_display_name" : true,
              "field_email" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_speech_location" : true,
              "field_occasion" : true,
              "field_brightcove_id" : true,
              "field_publication_author" : true,
              "field_institution_display_name" : true,
              "field_email" : true,
              "body:value" : true,
              "field_body:value" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 0,
          "weight" : "15",
          "settings" : { "fields" : {
              "nutrient_machine_name" : true,
              "node_title" : true,
              "field_short_title" : true,
              "field_speech_location" : true,
              "field_occasion" : true,
              "field_brightcove_id" : true,
              "field_publication_author" : true,
              "field_display_blocks" : true,
              "field_preparation_time" : true,
              "field_cooking_time" : true,
              "field_serving_weight" : true,
              "field_email" : true,
              "search_api_aggregation_1" : true,
              "search_api_combined_1" : true,
              "search_api_combined_2" : true,
              "field_microsite:name" : true,
              "field_geographies:name" : true,
              "field_tags:name" : true,
              "field_primary_category:name" : true,
              "field_urgent_health_info:value" : true,
              "field_healthy_hints:value" : true,
              "field_nutrient_data:field_nutrient_element:title" : true,
              "field_nutrient_data:field_nutrient_element:nutrient_machine_name" : true,
              "field_nutrient_data:field_nutrient_element:field_imperial_unit" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "field_speech_location" : true,
              "field_occasion" : true,
              "field_brightcove_id" : true,
              "field_publication_author" : true,
              "field_email" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_speech_location" : true,
              "field_occasion" : true,
              "field_brightcove_id" : true,
              "field_publication_author" : true,
              "field_institution_display_name" : true,
              "field_email" : true
            },
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
