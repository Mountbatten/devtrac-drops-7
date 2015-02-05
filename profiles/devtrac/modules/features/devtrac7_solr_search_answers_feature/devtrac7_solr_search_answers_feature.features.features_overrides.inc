<?php
/**
 * @file
 * devtrac7_solr_search_answers_feature.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function devtrac7_solr_search_answers_feature_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: quicktabs
  $overrides["quicktabs.devtrac_statistics_graphs_tabs.tabs|4"]["DELETED"] = TRUE;
  $overrides["quicktabs.devtrac_statistics_graphs_tabs.tabs|5"]["DELETED"] = TRUE;

 return $overrides;
}
