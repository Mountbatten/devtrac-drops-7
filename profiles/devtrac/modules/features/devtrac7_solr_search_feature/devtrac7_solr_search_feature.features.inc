<?php
/**
 * @file
 * devtrac7_solr_search_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devtrac7_solr_search_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "current_search" && $api == "current_search") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "openlayers_layers") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  if ($module == "pane" && $api == "pane") {
    return array("version" => "2");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function devtrac7_solr_search_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_autocomplete_search().
 */
function devtrac7_solr_search_feature_default_search_api_autocomplete_search() {
  $items = array();
  $items['search_api_views_devtrac_solr_view_sitevisits'] = entity_import('search_api_autocomplete_search', '{
    "machine_name" : "search_api_views_devtrac_solr_view_sitevisits",
    "name" : "devtrac_solr_view_sitevisits",
    "index_id" : "devtrac_solr_site_visits_index",
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
function devtrac7_solr_search_feature_default_search_api_index() {
  $items = array();
  $items['devtrac_solr_site_visits_index'] = entity_import('search_api_index', '{
    "name" : "Devtrac Solr Site Visits Index",
    "machine_name" : "devtrac_solr_site_visits_index",
    "description" : "Devtrac Solr Site Visits Index",
    "server" : "devtrac_search_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "author:field_user_superior" : { "type" : "integer", "entity_type" : "user" },
        "field_fieldtrip_places" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_fieldtrip_places:url" : { "type" : "list\\u003Curi\\u003E" },
        "field_ftritem_date_visited" : { "type" : "date" },
        "field_ftritem_field_trip:uuid" : { "type" : "string" },
        "field_ftritem_lat_long:geom" : { "type" : "text" },
        "field_ftritem_lat_long:lat" : { "type" : "string" },
        "field_ftritem_lat_long:latlon" : { "type" : "string", "real_type" : "location" },
        "field_ftritem_lat_long:lon" : { "type" : "string" },
        "field_ftritem_narrative:value" : { "type" : "text" },
        "field_ftritem_place:uuid" : { "type" : "string" },
        "field_ftritem_public_summary:value" : { "type" : "text" },
        "field_ftritem_status" : { "type" : "string" },
        "nid" : { "type" : "integer" },
        "promote" : { "type" : "boolean" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_aggregation_1" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "integer" },
        "taxonomy_vocabulary_1" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "taxonomy_vocabulary_1:parents_all" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "taxonomy_vocabulary_6" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "taxonomy_vocabulary_6:field_district_category" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "taxonomy_vocabulary_7" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "taxonomy_vocabulary_8" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "taxonomy_vocabulary_8:field_oecd_code" : { "type" : "list\\u003Cstring\\u003E" },
        "taxonomy_vocabulary_8:name" : { "type" : "list\\u003Ctext\\u003E" },
        "taxonomy_vocabulary_8:tid" : { "type" : "list\\u003Cinteger\\u003E" },
        "title" : { "type" : "text" },
        "type" : { "type" : "string" },
        "uuid" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-50",
          "settings" : { "default" : "0", "bundles" : { "ftritem" : "ftritem" } }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "-47", "settings" : [] },
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "-46",
          "settings" : { "fields" : {
              "taxonomy_vocabulary_6:parents_all" : "taxonomy_vocabulary_6:parents_all",
              "taxonomy_vocabulary_6:field_district_category" : "taxonomy_vocabulary_6:field_district_category",
              "taxonomy_vocabulary_8:parent" : "taxonomy_vocabulary_8:parent",
              "taxonomy_vocabulary_8:parents_all" : "taxonomy_vocabulary_8:parents_all"
            }
          }
        },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "-46",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "Full text search",
                "type" : "fulltext",
                "fields" : [ "title", "field_ftritem_public_summary:value" ],
                "description" : "A Fulltext aggregation of the following fields: Title, Public Summary \\u00bb Text."
              }
            }
          }
        },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "-45", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "-42", "settings" : { "mode" : "full" } },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "date_processor" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "default" : "0", "fields" : { "field_ftritem_date_visited" : true } }
        },
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : true } }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "search_api_aggregation_1" : true },
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
              "search_api_aggregation_1" : true,
              "taxonomy_vocabulary_8:name" : true,
              "field_ftritem_lat_long:geom" : true,
              "field_ftritem_narrative:value" : true,
              "field_ftritem_public_summary:value" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : { "search_api_aggregation_1" : true },
            "spaces" : "[^\\\\p{L}\\\\p{N}^\\u0027]",
            "ignorable" : "[-][(][)][,][:][;]:"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "taxonomy_vocabulary_6" : true,
              "taxonomy_vocabulary_1" : true,
              "taxonomy_vocabulary_8" : true,
              "taxonomy_vocabulary_7" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc\\r\\nadd\\r\\nbutton\\r\\nbutton:\\r\\nsubmittion\\r\\nat\\r\\n"
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
