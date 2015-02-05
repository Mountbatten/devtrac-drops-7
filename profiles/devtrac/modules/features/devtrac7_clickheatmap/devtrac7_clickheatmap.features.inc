<?php
/**
 * @file
 * devtrac7_clickheatmap.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devtrac7_clickheatmap_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
