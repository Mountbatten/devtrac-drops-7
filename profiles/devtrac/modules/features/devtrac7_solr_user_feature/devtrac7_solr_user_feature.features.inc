<?php
/**
 * @file
 * devtrac7_solr_user_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devtrac7_solr_user_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "current_search" && $api == "current_search") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "pane" && $api == "pane") {
    return array("version" => "2");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function devtrac7_solr_user_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_autocomplete_search().
 */
function devtrac7_solr_user_feature_default_search_api_autocomplete_search() {
  $items = array();
  $items['search_api_views_devtrac7_solr_user_view'] = entity_import('search_api_autocomplete_search', '{
    "machine_name" : "search_api_views_devtrac7_solr_user_view",
    "name" : "devtrac7_solr_user_view",
    "index_id" : "devtrac7_user_index",
    "type" : "search_api_views",
    "enabled" : "1",
    "options" : { "result count" : true, "fields" : [] }
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function devtrac7_solr_user_feature_default_search_api_index() {
  $items = array();
  $items['devtrac7_user_index'] = entity_import('search_api_index', '{
    "name" : "Devtrac Solr User Index",
    "machine_name" : "devtrac7_user_index",
    "description" : null,
    "server" : "devtrac_search_server",
    "item_type" : "user",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "field_user_firstname" : { "type" : "text" },
        "field_user_superior" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "user" },
        "field_user_surname" : { "type" : "text" },
        "last_access" : { "type" : "date" },
        "mail" : { "type" : "text" },
        "name" : { "type" : "text" },
        "roles" : { "type" : "list\\u003Cinteger\\u003E" },
        "search_api_aggregation_1" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "integer" },
        "taxonomy_vocabulary_4" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "taxonomy_vocabulary_5" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "taxonomy_vocabulary_6" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "taxonomy_vocabulary_6:field_district_category" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "taxonomy_vocabulary_8" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_role_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "roles" : { "3" : "3" } }
        },
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "taxonomy_vocabulary_6:parent" : "taxonomy_vocabulary_6:parent",
              "taxonomy_vocabulary_6:parents_all" : "taxonomy_vocabulary_6:parents_all",
              "taxonomy_vocabulary_8:parent" : "taxonomy_vocabulary_8:parent",
              "taxonomy_vocabulary_8:parents_all" : "taxonomy_vocabulary_8:parents_all",
              "field_user_superior:field_user_superior" : "field_user_superior:field_user_superior"
            }
          }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "Full text search",
                "type" : "fulltext",
                "fields" : [ "name", "field_user_firstname", "field_user_surname" ],
                "description" : "A Fulltext aggregation of the following fields: Name, First Name, Surname."
              }
            }
          }
        },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "date_processor" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "default" : "1", "fields" : [] }
        },
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "name" : true,
              "mail" : true,
              "field_user_firstname" : true,
              "field_user_surname" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "name" : true,
              "mail" : true,
              "field_user_firstname" : true,
              "field_user_surname" : true
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
              "name" : true,
              "mail" : true,
              "field_user_firstname" : true,
              "field_user_surname" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "name" : true,
              "mail" : true,
              "field_user_firstname" : true,
              "field_user_surname" : true
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
              "name" : true,
              "mail" : true,
              "field_user_firstname" : true,
              "field_user_surname" : true
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
    "read_only" : "0"
  }');
  return $items;
}
