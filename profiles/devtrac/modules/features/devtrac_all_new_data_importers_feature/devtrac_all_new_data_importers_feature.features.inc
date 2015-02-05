<?php
/**
 * @file
 * devtrac_all_new_data_importers_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devtrac_all_new_data_importers_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
