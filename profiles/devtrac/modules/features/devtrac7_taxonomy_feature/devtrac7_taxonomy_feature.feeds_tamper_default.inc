<?php
/**
 * @file
 * devtrac7_taxonomy_feature.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function devtrac7_taxonomy_feature_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_district_geo_import-dname_2010-convert_case';
  $feeds_tamper->importer = 'devtrac_district_geo_import';
  $feeds_tamper->source = 'DNAME_2010';
  $feeds_tamper->plugin_id = 'convert_case';
  $feeds_tamper->settings = array(
    'mode' => '2',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert case';
  $export['devtrac_district_geo_import-dname_2010-convert_case'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_district_import-dname_2010-convert_case';
  $feeds_tamper->importer = 'devtrac_district_import';
  $feeds_tamper->source = 'DNAME_2010';
  $feeds_tamper->plugin_id = 'convert_case';
  $feeds_tamper->settings = array(
    'mode' => '2',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert case';
  $export['devtrac_district_import-dname_2010-convert_case'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_district_import-sub_region-convert_case';
  $feeds_tamper->importer = 'devtrac_district_import';
  $feeds_tamper->source = 'SUB_REGION';
  $feeds_tamper->plugin_id = 'convert_case';
  $feeds_tamper->settings = array(
    'mode' => '2',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert case';
  $export['devtrac_district_import-sub_region-convert_case'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_district_import-subregion-convert_case';
  $feeds_tamper->importer = 'devtrac_district_import';
  $feeds_tamper->source = 'SUBREGION';
  $feeds_tamper->plugin_id = 'convert_case';
  $feeds_tamper->settings = array(
    'mode' => '2',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert case';
  $export['devtrac_district_import-subregion-convert_case'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_region_import-sub_region-convert_case';
  $feeds_tamper->importer = 'devtrac_region_import';
  $feeds_tamper->source = 'SUB_REGION';
  $feeds_tamper->plugin_id = 'convert_case';
  $feeds_tamper->settings = array(
    'mode' => '2',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Convert case';
  $export['devtrac_region_import-sub_region-convert_case'] = $feeds_tamper;

  return $export;
}
