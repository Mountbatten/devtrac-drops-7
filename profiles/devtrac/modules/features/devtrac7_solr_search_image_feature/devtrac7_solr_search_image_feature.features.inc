<?php
/**
 * @file
 * devtrac7_solr_search_image_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devtrac7_solr_search_image_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "current_search" && $api == "current_search") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
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
function devtrac7_solr_search_image_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function devtrac7_solr_search_image_feature_image_default_styles() {
  $styles = array();

  // Exported image style: grid.
  $styles['grid'] = array(
    'name' => 'grid',
    'label' => 'grid',
    'effects' => array(
      4 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 220,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

    // Exported image style: image_export.
  $styles['image_export'] = array(
    'name' => 'image_export',
    'label' => 'Image export',
    'effects' => array(
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_default_search_api_autocomplete_search().
 */
function devtrac7_solr_search_image_feature_default_search_api_autocomplete_search() {
  $items = array();
  $items['search_api_views_devtrac_solr_view_images'] = entity_import('search_api_autocomplete_search', '{
    "machine_name" : "search_api_views_devtrac_solr_view_images",
    "name" : "Devtrac Solr View Images",
    "index_id" : "devtrac_solr_image_index",
    "type" : "search_api_views",
    "enabled" : "0",
    "options" : { "result count" : true, "fields" : [] }
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function devtrac7_solr_search_image_feature_default_search_api_index() {
  $items = array();
  $items['default_node_index'] = entity_import('search_api_index', '{
    "name" : "Default node index",
    "machine_name" : "default_node_index",
    "description" : "An automatically created search index for indexing node data. Might be configured to specific needs.",
    "server" : null,
    "item_type" : "node",
    "options" : {
      "cron_limit" : "50",
      "data_alter_callbacks" : {
        "search_api_alter_add_fulltext" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0" }
      },
      "processors" : {
        "search_api_case_ignore" : { "status" : 1, "weight" : "0", "settings" : { "strings" : 0 } },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\nh2 = 3\\nh3 = 2\\nstrong = 2\\nb = 2\\nem = 1.5\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : { "spaces" : "[^\\\\p{L}\\\\p{N}]", "ignorable" : "[-]" }
        }
      },
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "comment_count" : { "type" : "integer" },
        "created" : { "type" : "date" },
        "promote" : { "type" : "boolean" },
        "search_api_language" : { "type" : "string" },
        "sticky" : { "type" : "boolean" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "type" : { "type" : "string" }
      }
    },
    "enabled" : "0",
    "read_only" : "0"
  }');
  $items['devtrac_solr_image_index'] = entity_import('search_api_index', '{
    "name" : "Devtrac Solr Image Index",
    "machine_name" : "devtrac_solr_image_index",
    "description" : "Devtrac Solr Image Index",
    "server" : "devtrac_search_server",
    "item_type" : "file",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "fid" : { "type" : "integer" },
        "field_file_image_title_text" : { "type" : "text" },
        "field_ftritem_date_visited" : { "type" : "date" },
        "field_ftritem_lat_long:geom" : { "type" : "text" },
        "field_ftritem_lat_long:lat" : { "type" : "string" },
        "field_ftritem_lat_long:lon" : { "type" : "string" },
        "field_taxonomy_image_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "name" : { "type" : "string" },
        "owner" : { "type" : "integer", "entity_type" : "user" },
        "owner:field_user_superior" : { "type" : "integer", "entity_type" : "user" },
        "search_api_aggregation_1" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "search_api_url" : { "type" : "uri" },
        "taxonomy_vocabulary_1" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "taxonomy_vocabulary_6" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "taxonomy_vocabulary_8" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "url" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-50",
          "settings" : { "default" : "0", "bundles" : { "image" : "image" } }
        },
        "search_api_file_source_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "bundles" : { "ftritem" : "ftritem" } }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "-49", "settings" : { "mode" : "teaser" } },
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "-48",
          "settings" : { "fields" : {
              "taxonomy_vocabulary_6:parent" : "taxonomy_vocabulary_6:parent",
              "taxonomy_vocabulary_6:parents_all" : "taxonomy_vocabulary_6:parents_all",
              "taxonomy_vocabulary_8:parent" : "taxonomy_vocabulary_8:parent",
              "taxonomy_vocabulary_8:parents_all" : "taxonomy_vocabulary_8:parents_all",
              "taxonomy_vocabulary_1:parent" : "taxonomy_vocabulary_1:parent",
              "taxonomy_vocabulary_1:parents_all" : "taxonomy_vocabulary_1:parents_all"
            }
          }
        },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "-47",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "Full Text Search",
                "type" : "fulltext",
                "fields" : [ "name", "field_file_image_title_text" ],
                "description" : "A Fulltext aggregation of the following fields: File name, Title Text."
              }
            }
          }
        },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "-46", "settings" : [] }
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
          "settings" : { "fields" : {
              "field_file_image_title_text" : true,
              "search_api_aggregation_1" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "field_file_image_title_text" : true,
              "search_api_aggregation_1" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "field_file_image_title_text" : true,
              "search_api_aggregation_1" : true
            },
            "spaces" : "[^\\\\p{L}\\\\p{N}^\\u0027]",
            "ignorable" : "[-][(][)][,][:][;]:"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "field_file_image_title_text" : true },
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
function devtrac7_solr_search_image_feature_default_search_api_saved_searches_settings() {
  $items = array();
  $items['devtrac_solr_image_index'] = entity_import('search_api_saved_searches_settings', '{
    "delta" : "devtrac_solr_image_index",
    "index_id" : "devtrac_solr_image_index",
    "enabled" : "1",
    "options" : {
      "date_field" : "",
      "description" : "Click the button to email me new Images every week",
      "registered_choose_mail" : 0,
      "choose_name" : 0,
      "registered_user_delete_key" : 1,
      "show_empty_list" : 0,
      "default_true" : true,
      "ids_list" : [],
      "user_select_interval" : 0,
      "interval_options" : { "86400" : "Daily", "604800" : "Weekly" },
      "set_interval" : "604800",
      "mail" : {
        "activate" : {
          "send" : 1,
          "title" : "Your email notifications for Images at [site:name]",
          "body" : "Dear [site:name] user,\\r\\n\\r\\nEmail notifications for Images on [site:name] with this e-mail address was enabled.\\r\\n\\r\\n--Regards\\r\\n[site:name]\\r\\n\\r\\nThis is an automated message from [site:name]. Please do not reply to this address. If you have a question, please email help@devtrac.ug."
        },
        "notify" : {
          "title" : "Your updated Images at [site:name]",
          "body" : "Dear [site:name] user,\\r\\n\\r\\nThe following Imagess require your attention in your DevTrac Inbox:\\r\\n\\r\\n[search-api-saved-searches:results]\\r\\n\\r\\nYou can configure this message at the following address:\\r\\n[user:search-api-saved-searches-url]\\r\\n\\r\\nRegards,\\r\\n[site:name]\\r\\n\\r\\nThis is an automated message from [site:name]. Please do not reply to this address. If you have a question, please email help@devtrac.ug.",
          "results" : "[search-api-saved-search:name]:\\r\\n[search-api-saved-search:items]",
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
      },
      "mode" : { "filter" : null, "allow" : 0 }
    }
  }');
  return $items;
}
