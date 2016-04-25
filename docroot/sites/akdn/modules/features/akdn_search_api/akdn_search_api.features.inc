<?php
/**
 * @file
 * akdn_search_api.features.inc
 */

/**
 * Implements hook_default_search_api_index().
 */
function akdn_search_api_default_search_api_index() {
  $items = array();
  $items['akdn'] = entity_import('search_api_index', '{
    "name" : "akdn",
    "machine_name" : "akdn",
    "description" : "Index AKDN nodes",
    "server" : "local_server_shakti_mac",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "nid" : { "type" : "integer" },
        "type" : { "type" : "string" },
        "title" : { "type" : "text", "boost" : "3.0" },
        "language" : { "type" : "string" },
        "url" : { "type" : "uri" },
        "status" : { "type" : "boolean" },
        "promote" : { "type" : "boolean" },
        "sticky" : { "type" : "boolean" },
        "created" : { "type" : "date" },
        "changed" : { "type" : "date" },
        "author" : { "type" : "integer", "entity_type" : "user" },
        "source" : { "type" : "integer", "entity_type" : "node" },
        "publish_date_year" : { "type" : "integer" },
        "event_date_start_year" : { "type" : "integer" },
        "event_date_end_year" : { "type" : "integer" },
        "event_date_start_time" : { "type" : "integer" },
        "start_time" : { "type" : "integer" },
        "publish_time" : { "type" : "date" },
        "image_public_uri" : { "type" : "string" },
        "node_url_alias" : { "type" : "string" },
        "node_summary" : { "type" : "string" },
        "node_short_title" : { "type" : "string" },
        "speech_quotes_count" : { "type" : "integer" },
        "speech_quotes" : { "type" : "string" },
        "speech_quotes_nid" : { "type" : "integer" },
        "quotes_data" : { "type" : "string" },
        "entity_type" : { "type" : "string" },
        "node_title" : { "type" : "string" },
        "field_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_caption" : { "type" : "text", "boost" : "0.1" },
        "field_create_featured_content" : { "type" : "boolean" },
        "title_field" : { "type" : "text", "boost" : "3.0" },
        "field_pages_to_exclude" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_short_title" : { "type" : "text", "boost" : "3.0" },
        "field_article_cat" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_article_author" : { "type" : "text", "boost" : "0.1" },
        "field_country" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_focus_area" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_agency" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_publish_date" : { "type" : "date" },
        "field_related_project" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_enable_project_slider" : { "type" : "boolean" },
        "field_events_reference" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_date_decade" : { "type" : "text", "boost" : "0.1" },
        "field_photos_reference" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_podcasts_reference" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_speeches_reference" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_press_reference" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_related_in_the_media" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_related_news" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_related_publications" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_caption_override" : { "type" : "text", "boost" : "0.1" },
        "field_cycle_year" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_custom_meta_tags" : { "type" : "text", "boost" : "21.0" },
        "field_event_location" : { "type" : "text", "boost" : "0.1" },
        "field_publication_isbn" : { "type" : "list\\u003Ctext\\u003E", "boost" : "0.1" },
        "field_publication_category" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_publication_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_speech_location" : { "type" : "text", "boost" : "0.1" },
        "field_speech_themes" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_speech_type" : { "type" : "string" },
        "field_speech_event" : { "type" : "integer", "entity_type" : "node" },
        "field_speech_author" : { "type" : "text", "boost" : "0.1" },
        "field_publication_date" : { "type" : "date" },
        "field_speech_speaker" : { "type" : "integer", "entity_type" : "node" },
        "field_person_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_project_budget" : { "type" : "text", "boost" : "0.1" },
        "field_project_location" : { "type" : "text", "boost" : "0.1" },
        "field_sub_title" : { "type" : "text", "boost" : "3.0" },
        "field_summary" : { "type" : "text", "boost" : "0.1" },
        "field_project_image_caption" : { "type" : "text", "boost" : "0.1" },
        "field_featured_content_area" : { "type" : "boolean" },
        "field_featured_content_nodes" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_turn_on_secondary_footer" : { "type" : "boolean" },
        "field_hub_page_project" : { "type" : "integer", "entity_type" : "node" },
        "field_use_focus_area_body_text" : { "type" : "boolean" },
        "field_project_listing_area" : { "type" : "boolean" },
        "field_project_listing_content" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_speech_reference" : { "type" : "integer", "entity_type" : "node" },
        "field_associated_theme" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_agency_geography" : { "type" : "integer", "entity_type" : "node" },
        "field_arch_country" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_architect" : { "type" : "text", "boost" : "0.1" },
        "field_building_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_ceremony_location" : { "type" : "text", "boost" : "0.1" },
        "field_city" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_client" : { "type" : "text", "boost" : "0.1" },
        "field_completed_date" : { "type" : "text", "boost" : "0.1" },
        "field_completed_date_timestamp" : { "type" : "date" },
        "field_design_date" : { "type" : "text", "boost" : "0.1" },
        "field_planner" : { "type" : "text", "boost" : "0.1" },
        "field_region" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_size" : { "type" : "text", "boost" : "0.1" },
        "field_winner" : { "type" : "boolean" },
        "field_performance_year" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_related_artists" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_cd_volume_number" : { "type" : "decimal" },
        "field_artist_country_origin" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_artist_related_instruments" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_award_year" : { "type" : "date" },
        "field_master_jury" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_steering_committee" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_eligibility_criteria" : { "type" : "integer", "entity_type" : "node" },
        "field_award_ceremony" : { "type" : "integer", "entity_type" : "node" },
        "field_chairman_s_award" : { "type" : "integer", "entity_type" : "node" },
        "field_news" : { "type" : "integer", "entity_type" : "node" },
        "field_press_materials" : { "type" : "integer", "entity_type" : "node" },
        "field_award_recipients" : { "type" : "boolean" },
        "field_calendar" : { "type" : "integer", "entity_type" : "node" },
        "field_submission_procedure" : { "type" : "integer", "entity_type" : "node" },
        "field_review_selection_procedure" : { "type" : "integer", "entity_type" : "node" },
        "search_api_language" : { "type" : "string" },
        "search_api_aggregation_1" : { "type" : "text", "boost" : "0.1" },
        "body:value" : { "type" : "text", "boost" : "0.1" },
        "field_cycle_year:tid" : { "type" : "integer" },
        "field_cycle_year:field_award_cycle" : { "type" : "integer", "entity_type" : "node" },
        "field_event_date:value" : { "type" : "date" },
        "field_akmi_additional_images:file" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "file" },
        "field_hub_page_image:file:url" : { "type" : "list\\u003Cstring\\u003E" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : {
              "agency" : "agency",
              "architecture_project" : "architecture_project",
              "article" : "article",
              "featured_content" : "featured_content",
              "page" : "page",
              "event" : "event",
              "gallery" : "gallery",
              "geography" : "geography",
              "hub_page" : "hub_page",
              "person" : "person",
              "podcast" : "podcast",
              "project" : "project",
              "publication" : "publication",
              "speech" : "speech",
              "speech_quote" : "speech_quote"
            }
          }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : {
            "lang_field" : "",
            "languages" : {
              "und" : "und",
              "en" : "en",
              "fr" : "fr",
              "ar" : "ar",
              "zh-hans" : "zh-hans",
              "de" : "de",
              "it" : "it",
              "ms" : "ms",
              "fa" : "fa",
              "pt" : "pt",
              "ru" : "ru",
              "es" : "es",
              "tg" : "tg"
            }
          }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "searchtext",
                "type" : "fulltext",
                "fields" : [
                  "type",
                  "title",
                  "author",
                  "node_short_title",
                  "entity_type",
                  "node_title",
                  "field_tags",
                  "title_field",
                  "field_caption",
                  "field_short_title",
                  "field_agency_term",
                  "field_geography_term",
                  "field_focus_area",
                  "field_agency",
                  "field_country",
                  "field_use_focus_area_body_text",
                  "body:value"
                ],
                "description" : "A Fulltext aggregation of the following fields: Content type, Title, Author, Short title of Node, Type of the Node, Node title, Tags, Title, Caption, Short Title, Agency, Geography, Thematic Area, Agency, Geography, Use Thematic Area Body Text, The main body text \\u00bb Text."
              }
            }
          }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_denormalized_entity_grouping" : {
          "status" : 0,
          "weight" : "0",
          "settings" : {
            "fields" : [],
            "group_sort" : "",
            "group_sort_direction" : "asc",
            "truncate" : 1,
            "group_limit" : "1"
          }
        },
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "title_field" : true,
              "field_caption" : true,
              "field_short_title" : true,
              "field_article_author" : true,
              "field_date_decade" : true,
              "field_caption_override" : true,
              "field_event_location" : true,
              "field_publication_isbn" : true,
              "field_speech_location" : true,
              "field_speech_author" : true,
              "field_sub_title" : true,
              "field_summary" : true,
              "field_project_budget" : true,
              "field_project_location" : true,
              "field_project_image_caption" : true,
              "field_architect" : true,
              "field_ceremony_location" : true,
              "field_client" : true,
              "field_completed_date" : true,
              "field_design_date" : true,
              "field_planner" : true,
              "field_size" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "title_field" : true,
              "field_caption" : true,
              "field_short_title" : true,
              "field_article_author" : true,
              "field_date_decade" : true,
              "field_caption_override" : true,
              "field_event_location" : true,
              "field_publication_isbn" : true,
              "field_speech_location" : true,
              "field_speech_author" : true,
              "field_sub_title" : true,
              "field_summary" : true,
              "field_project_budget" : true,
              "field_project_location" : true,
              "field_project_image_caption" : true,
              "field_architect" : true,
              "field_ceremony_location" : true,
              "field_client" : true,
              "field_completed_date" : true,
              "field_design_date" : true,
              "field_planner" : true,
              "field_size" : true
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
              "title" : true,
              "title_field" : true,
              "field_caption" : true,
              "field_short_title" : true,
              "field_article_author" : true,
              "field_date_decade" : true,
              "field_caption_override" : true,
              "field_event_location" : true,
              "field_publication_isbn" : true,
              "field_speech_location" : true,
              "field_speech_author" : true,
              "field_sub_title" : true,
              "field_summary" : true,
              "field_project_budget" : true,
              "field_project_location" : true,
              "field_project_image_caption" : true,
              "field_architect" : true,
              "field_ceremony_location" : true,
              "field_client" : true,
              "field_completed_date" : true,
              "field_design_date" : true,
              "field_planner" : true,
              "field_size" : true,
              "search_api_aggregation_1" : true,
              "body:value" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "title_field" : true,
              "field_caption" : true,
              "field_short_title" : true,
              "field_article_author" : true,
              "field_date_decade" : true,
              "field_caption_override" : true,
              "field_event_location" : true,
              "field_publication_isbn" : true,
              "field_speech_location" : true,
              "field_speech_author" : true,
              "field_sub_title" : true,
              "field_summary" : true,
              "field_project_budget" : true,
              "field_project_location" : true,
              "field_project_image_caption" : true,
              "field_architect" : true,
              "field_ceremony_location" : true,
              "field_client" : true,
              "field_completed_date" : true,
              "field_design_date" : true,
              "field_planner" : true,
              "field_size" : true
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
              "title_field" : true,
              "field_caption" : true,
              "field_short_title" : true,
              "field_article_author" : true,
              "field_date_decade" : true,
              "field_caption_override" : true,
              "field_event_location" : true,
              "field_publication_isbn" : true,
              "field_speech_location" : true,
              "field_speech_author" : true,
              "field_sub_title" : true,
              "field_summary" : true,
              "field_project_budget" : true,
              "field_project_location" : true,
              "field_project_image_caption" : true,
              "field_architect" : true,
              "field_ceremony_location" : true,
              "field_client" : true,
              "field_completed_date" : true,
              "field_design_date" : true,
              "field_planner" : true,
              "field_size" : true
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

/**
 * Implements hook_default_search_api_server().
 */
function akdn_search_api_default_search_api_server() {
  $items = array();
  $items['akdn_acquia'] = entity_import('search_api_server', '{
    "name" : "akdn_acquia",
    "machine_name" : "akdn_acquia",
    "description" : "",
    "class" : "acquia_search_service",
    "options" : {
      "clean_ids" : true,
      "scheme" : "http",
      "host" : "useast1-c5.acquia-search.com",
      "port" : "80",
      "path" : "\\/solr\\/GRTV-25551",
      "edismax" : 0,
      "modify_acquia_connection" : 0,
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 1,
      "highlight_data" : 0,
      "http_method" : "AUTO",
      "acquia_override_subscription" : { "acquia_override_subscription_corename" : "GRTU-108919.dev.akdn" },
      "derived_key" : "3ff82da191e1dabe69ce815d36868ac1385cdc50"
    },
    "enabled" : "0",
    "rdf_mapping" : []
  }');
  $items['akdn_srijan'] = entity_import('search_api_server', '{
    "name" : "akdn_srijan",
    "machine_name" : "akdn_srijan",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "scheme" : "http",
      "host" : "srijanlabs.com",
      "port" : "8080",
      "path" : "\\/solr\\/dev_akdn",
      "http_user" : "admin",
      "http_pass" : "Srijanscs",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "http_method" : "AUTO"
    },
    "enabled" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
