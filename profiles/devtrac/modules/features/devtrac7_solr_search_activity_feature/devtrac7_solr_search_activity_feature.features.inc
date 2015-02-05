<?php
/**
 * @file
 * devtrac7_solr_search_activity_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devtrac7_solr_search_activity_feature_ctools_plugin_api($module = NULL, $api = NULL) {
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
function devtrac7_solr_search_activity_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_autocomplete_search().
 */
function devtrac7_solr_search_activity_feature_default_search_api_autocomplete_search() {
  $items = array();
  $items['search_api_views_devtrac_solr_view_activity'] = entity_import('search_api_autocomplete_search', '{
    "machine_name" : "search_api_views_devtrac_solr_view_activity",
    "name" : "Devtrac Solr View Activity",
    "index_id" : "devtrac_solr_activity_index",
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
function devtrac7_solr_search_activity_feature_default_search_api_index() {
  $items = array();
  $items['devtrac_solr_activity_index'] = entity_import('search_api_index', '{
    "name" : "Devtrac Solr Activity Index",
    "machine_name" : "devtrac_solr_activity_index",
    "description" : null,
    "server" : "devtrac_search_server",
    "item_type" : "relation",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "endpoints_source_node" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "endpoints_source_node:field_activity_status" : { "type" : "list\\u003Cstring\\u003E" },
        "endpoints_source_node:field_iati_activity_aid_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "endpoints_source_node:field_iati_activity_collabo_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "endpoints_source_node:field_iati_activity_description:value" : { "type" : "list\\u003Ctext\\u003E" },
        "endpoints_source_node:field_iati_activity_finance_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "endpoints_source_node:field_iati_activity_flow_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "endpoints_source_node:field_iati_activity_planned_date:value" : { "type" : "list\\u003Cdate\\u003E" },
        "endpoints_source_node:field_iati_activity_planned_date:value2" : { "type" : "list\\u003Cdate\\u003E" },
        "endpoints_source_node:field_iati_activity_status" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "endpoints_source_node:field_iati_activity_website:url" : { "type" : "list\\u003Curi\\u003E" },
        "endpoints_source_node:field_iati_default_currency" : { "type" : "list\\u003Cstring\\u003E" },
        "endpoints_source_node:field_iati_identifier" : { "type" : "list\\u003Cstring\\u003E" },
        "endpoints_source_node:field_iati_owner_name" : { "type" : "list\\u003Ctext\\u003E" },
        "endpoints_source_node:field_iati_owner_ref" : { "type" : "list\\u003Ctext\\u003E" },
        "endpoints_source_node:taxonomy_vocabulary_6" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "endpoints_source_node:taxonomy_vocabulary_6:parents_all" : {
          "type" : "list\\u003Clist\\u003Clist\\u003Cinteger\\u003E\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "endpoints_source_node:taxonomy_vocabulary_8" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "endpoints_source_node:taxonomy_vocabulary_8:field_iati_code" : { "type" : "list\\u003Clist\\u003Cstring\\u003E\\u003E" },
        "endpoints_source_node:taxonomy_vocabulary_8:name" : { "type" : "list\\u003Clist\\u003Cstring\\u003E\\u003E" },
        "endpoints_source_node:taxonomy_vocabulary_8:parents_all" : {
          "type" : "list\\u003Clist\\u003Clist\\u003Cinteger\\u003E\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "endpoints_source_node:title" : { "type" : "list\\u003Ctext\\u003E" },
        "endpoints_source_node:uuid" : { "type" : "list\\u003Cstring\\u003E" },
        "endpoints_target_node" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "endpoints_target_node:uuid" : { "type" : "list\\u003Cstring\\u003E" },
        "field_iati_org_role" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "relation_type" : { "type" : "string" },
        "search_api_aggregation_1" : { "type" : "text" },
        "search_api_language" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : { "iati_organisation_role" : "iati_organisation_role" }
          }
        },
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "field_iati_org_role:parent" : "field_iati_org_role:parent" } }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : false } },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "Full text search",
                "type" : "fulltext",
                "fields" : [ "endpoints_source_node", "endpoints_source_node:field_activity_name" ],
                "description" : "A Fulltext aggregation of the following fields: node (source endpoint), node (source endpoint) \\u00bb Activity Name."
              }
            }
          }
        },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
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
        "search_api_transliteration" : {
          "status" : 0,
          "weight" : "15",
          "settings" : { "fields" : {
              "endpoints_source_node:title" : true,
              "endpoints_source_node:field_iati_owner_name" : true,
              "endpoints_source_node:field_iati_owner_ref" : true,
              "endpoints_source_node:field_iati_activity_description:value" : true
            }
          }
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

/**
 * Implements hook_default_search_api_saved_searches_settings().
 */
function devtrac7_solr_search_activity_feature_default_search_api_saved_searches_settings() {
  $items = array();
  $items['devtrac_solr_activity_index'] = entity_import('search_api_saved_searches_settings', '{
    "delta" : "devtrac_solr_activity_index",
    "index_id" : "devtrac_solr_activity_index",
    "enabled" : "1",
    "options" : {
      "description" : "Save this search",
      "registered_choose_mail" : 0,
      "choose_name" : 0,
      "registered_user_delete_key" : 0,
      "default_true" : true,
      "ids_list" : [],
      "user_select_interval" : 1,
      "interval_options" : { "6" : "Six seconds", "86400" : "Daily", "604800" : "Weekly" },
      "set_interval" : "86400",
      "mail" : {
        "activate" : {
          "send" : 1,
          "title" : "Activate your saved search at [site:name]",
          "body" : "A saved search on [site:name] with this e-mail address was created.\\r\\nTo activate this saved search, click the following link:\\r\\n\\r\\n[search-api-saved-search:activate-url]\\r\\n\\r\\nIf you didn\\u0027t create this saved search, just ignore this mail and it will be deleted.\\r\\n\\r\\n--  [site:name] team"
        },
        "notify" : {
          "title" : "New results for your saved search at [site:name]",
          "body" : "[user:name],\\r\\n\\r\\nThere are new results for your saved search on [site:name]:\\r\\n\\r\\n[search-api-saved-searches:results]\\r\\n\\r\\nYou can configure your saved searches at the following address:\\r\\n[user:search-api-saved-searches-url]\\r\\n\\r\\n--  [site:name] team",
          "results" : "New results for search \\u0022[search-api-saved-search:name]\\u0022:\\r\\n[search-api-saved-search:items]\\r\\n[search-api-saved-search:results-capped]",
          "result" : "[search-api-saved-search-result:label] ([search-api-saved-search-result:url])",
          "max_results" : "0",
          "results_capped" : "\\u2026\\r\\nView all results: [search-api-saved-search:view-url]"
        }
      },
      "manual" : {
        "allow" : 0,
        "fulltext" : 0,
        "fields" : [],
        "page" : { "path" : "", "fulltext" : "", "direct_filter_params" : "0" }
      }
    }
  }');
  return $items;
}
