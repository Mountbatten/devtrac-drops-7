<?php
/**
 * @file
 * devtrac7_solr_search_location_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devtrac7_solr_search_location_feature_ctools_plugin_api($module = NULL, $api = NULL) {
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
function devtrac7_solr_search_location_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_autocomplete_search().
 */
function devtrac7_solr_search_location_feature_default_search_api_autocomplete_search() {
  $items = array();
  $items['search_api_views_devtrac_solr_view_locations'] = entity_import('search_api_autocomplete_search', '{
    "machine_name" : "search_api_views_devtrac_solr_view_locations",
    "name" : "devtrac_solr_view_locations",
    "index_id" : "devtrac_solr_locations_index",
    "type" : "search_api_views",
    "enabled" : "1",
    "options" : {
      "result count" : true,
      "fields" : [ "search_api_aggregation_1" ],
      "results" : 0,
      "custom" : { "display" : "default" }
    }
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function devtrac7_solr_search_location_feature_default_search_api_index() {
  $items = array();
  $items['devtrac_solr_locations_index'] = entity_import('search_api_index', '{
    "name" : "Devtrac Solr Locations Index",
    "machine_name" : "devtrac_solr_locations_index",
    "description" : null,
    "server" : "devtrac_search_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "field_place_lat_long:geom" : { "type" : "text" },
        "field_place_lat_long:lat" : { "type" : "string" },
        "field_place_lat_long:latlon" : { "type" : "string", "real_type" : "location" },
        "field_place_lat_long:lon" : { "type" : "string" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_aggregation_1" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "boolean" },
        "taxonomy_vocabulary_1" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "taxonomy_vocabulary_1:parents_all" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "taxonomy_vocabulary_6" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "taxonomy_vocabulary_6:field_district_category" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "title" : { "type" : "text" },
        "type" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "place" : "place" } }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "taxonomy_vocabulary_6:parents_all" : "taxonomy_vocabulary_6:parents_all",
              "taxonomy_vocabulary_6:field_district_category" : "taxonomy_vocabulary_6:field_district_category",
              "taxonomy_vocabulary_8:parent" : "taxonomy_vocabulary_8:parent",
              "taxonomy_vocabulary_8:parents_all" : "taxonomy_vocabulary_8:parents_all"
            }
          }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "Full text search",
                "type" : "fulltext",
                "fields" : [ "title" ],
                "description" : "A Fulltext aggregation of the following fields: Title."
              }
            }
          }
        }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : true } }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 0,
          "weight" : "15",
          "settings" : { "fields" : { "title" : true, "search_api_aggregation_1" : true } }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : [],
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
