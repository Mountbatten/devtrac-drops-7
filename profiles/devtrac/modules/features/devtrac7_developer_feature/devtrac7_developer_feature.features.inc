<?php
/**
 * @file
 * devtrac7_developer_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devtrac7_developer_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
