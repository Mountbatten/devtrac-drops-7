<?php
/**
 * @file
 * devtrac7_solr_search_image_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function devtrac7_solr_search_image_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'add_date_format_title';
  $strongarm->value = '';
  $export['add_date_format_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi:block_cache:search_api@devtrac_solr_image_index';
  $strongarm->value = -1;
  $export['facetapi:block_cache:search_api@devtrac_solr_image_index'] = $strongarm;

  return $export;
}
