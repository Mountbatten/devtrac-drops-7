<?php
/**
 * @file
 * devtrac7_solr_search_org_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devtrac7_solr_search_org_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "current_search" && $api == "current_search") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
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
function devtrac7_solr_search_org_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_autocomplete_search().
 */
function devtrac7_solr_search_org_feature_default_search_api_autocomplete_search() {
  $items = array();
  $items['search_api_views_devtrac_solr_organisations_view'] = entity_import('search_api_autocomplete_search', '{
    "machine_name" : "search_api_views_devtrac_solr_organisations_view",
    "name" : "Devtrac Solr Organisations view",
    "index_id" : "devtrac_solr_organisation_index",
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
function devtrac7_solr_search_org_feature_default_search_api_index() {
  $items = array();
  $items['devtrac_solr_organisation_index'] = entity_import('search_api_index', '{
    "name" : "Devtrac Solr Organisation Index",
    "machine_name" : "devtrac_solr_organisation_index",
    "description" : null,
    "server" : "devtrac_search_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "created" : { "type" : "date" },
        "field_activity_name" : { "type" : "string" },
        "field_iati_org_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_organisation_name" : { "type" : "string" },
        "nid" : { "type" : "integer" },
        "relation_iati_organisation_role:field_iati_org_role" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "relation_iati_organisation_role_node" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "relation_iati_organisation_role_node_reverse" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "relation_iati_organisation_role_node_reverse:taxonomy_vocabulary_6" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "relation_iati_organisation_role_node_reverse:taxonomy_vocabulary_6:parents_all" : {
          "type" : "list\\u003Clist\\u003Clist\\u003Cinteger\\u003E\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "relation_iati_organisation_role_node_reverse:taxonomy_vocabulary_8" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "relation_iati_organisation_role_node_reverse:taxonomy_vocabulary_8:parents_all" : {
          "type" : "list\\u003Clist\\u003Clist\\u003Cinteger\\u003E\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "relation_iati_organisation_role:field_iati_org_role" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_aggregation_1" : { "type" : "text" },
  		  "search_api_language" : { "type" : "string" },
        "status" : { "type" : "boolean" },
        "title" : { "type" : "string" },
        "type" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : {
              "iati_activity" : "iati_activity",
              "iati_organisation" : "iati_organisation"
            }
          }
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
              "taxonomy_vocabulary_8:parents_all" : "taxonomy_vocabulary_8:parents_all",
              "taxonomy_vocabulary_1:parent" : "taxonomy_vocabulary_1:parent"
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
        "date_processor" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "default" : "0", "fields" : { "created" : true } }
        },
        "search_api_case_ignore" : { "status" : 1, "weight" : "0", "settings" : { "fields" : [] } },
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
        "search_api_transliteration" : { "status" : 0, "weight" : "15", "settings" : { "fields" : [] } },
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
