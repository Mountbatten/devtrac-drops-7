<?php
/**
 * @file
 * devtrac7_solr_search_fieldtrip_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function devtrac7_solr_search_fieldtrip_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_saved_searches_search_ids';
  $strongarm->value = array(
    'devtrac_solr_field_trip_index' => array(
      'search_api_views:devtrac_solr_view_fieldtrips:list' => 'search_api_views:devtrac_solr_view_fieldtrips:list',
      'facetapicombo:hash' => 'facetapicombo:hash',
      'facetapicombo:hash-1' => 'facetapicombo:hash-1',
      'facetapicombo:hash-2' => 'facetapicombo:hash-2',
      'facetapicombo:hash-3' => 'facetapicombo:hash-3',
      'facetapicombo:hash-4' => 'facetapicombo:hash-4',
      'facetapicombo:hash-5' => 'facetapicombo:hash-5',
      'facetapicombo:hash-6' => 'facetapicombo:hash-6',
      'facetapicombo:hash-7' => 'facetapicombo:hash-7',
      'facetapicombo:hash-8' => 'facetapicombo:hash-8',
      'facetapicombo:hash-9' => 'facetapicombo:hash-9',
      'facetapicombo:hash-10' => 'facetapicombo:hash-10',
      'facetapicombo:hash-11' => 'facetapicombo:hash-11',
      'facetapicombo:hash-12' => 'facetapicombo:hash-12',
      'facetapicombo:hash-13' => 'facetapicombo:hash-13',
      'facetapicombo:hash-14' => 'facetapicombo:hash-14',
      'facetapicombo:hash-15' => 'facetapicombo:hash-15',
      'facetapicombo:hash-16' => 'facetapicombo:hash-16',
      'facetapicombo:hash-17' => 'facetapicombo:hash-17',
      'facetapicombo:hash-18' => 'facetapicombo:hash-18',
      'facetapicombo:hash-19' => 'facetapicombo:hash-19',
      'facetapicombo:hash-20' => 'facetapicombo:hash-20',
      'facetapicombo:hash-21' => 'facetapicombo:hash-21',
      'facetapicombo:hash-22' => 'facetapicombo:hash-22',
      'facetapicombo:hash-23' => 'facetapicombo:hash-23',
      'facetapicombo:hash-24' => 'facetapicombo:hash-24',
      'facetapicombo:hash-25' => 'facetapicombo:hash-25',
      'facetapicombo:hash-26' => 'facetapicombo:hash-26',
      'facetapicombo:hash-27' => 'facetapicombo:hash-27',
      'facetapicombo:hash-28' => 'facetapicombo:hash-28',
      'facetapicombo:hash-29' => 'facetapicombo:hash-29',
      'facetapicombo:hash-30' => 'facetapicombo:hash-30',
      'facetapicombo:hash-31' => 'facetapicombo:hash-31',
      'facetapicombo:hash-32' => 'facetapicombo:hash-32',
      'facetapicombo:hash-33' => 'facetapicombo:hash-33',
      'facetapicombo:hash-34' => 'facetapicombo:hash-34',
      'facetapicombo:hash-35' => 'facetapicombo:hash-35',
      'facetapicombo:hash-36' => 'facetapicombo:hash-36',
      'facetapicombo:hash-37' => 'facetapicombo:hash-37',
      'facetapicombo:hash-38' => 'facetapicombo:hash-38',
      'facetapicombo:hash-39' => 'facetapicombo:hash-39',
      'facetapicombo:hash-40' => 'facetapicombo:hash-40',
      'facetapicombo:hash-41' => 'facetapicombo:hash-41',
      'facetapicombo:hash-42' => 'facetapicombo:hash-42',
      'facetapicombo:hash-43' => 'facetapicombo:hash-43',
      'facetapicombo:hash-44' => 'facetapicombo:hash-44',
      'facetapicombo:hash-45' => 'facetapicombo:hash-45',
      'facetapicombo:hash-46' => 'facetapicombo:hash-46',
      'facetapicombo:hash-47' => 'facetapicombo:hash-47',
      'facetapicombo:hash-48' => 'facetapicombo:hash-48',
      'facetapicombo:hash-49' => 'facetapicombo:hash-49',
      'facetapicombo:hash-50' => 'facetapicombo:hash-50',
      'facetapicombo:hash-51' => 'facetapicombo:hash-51',
      'facetapicombo:hash-52' => 'facetapicombo:hash-52',
      'facetapicombo:hash-53' => 'facetapicombo:hash-53',
      'facetapicombo:hash-54' => 'facetapicombo:hash-54',
    ),
    'devtrac_solr_action_items_index' => array(
      'search_api_views:devtrac_solr_view_actionitems:list' => 'search_api_views:devtrac_solr_view_actionitems:list',
      'facetapicombo:hash' => 'facetapicombo:hash',
      'facetapicombo:hash-1' => 'facetapicombo:hash-1',
      'facetapicombo:hash-2' => 'facetapicombo:hash-2',
      'facetapicombo:hash-3' => 'facetapicombo:hash-3',
      'facetapicombo:hash-4' => 'facetapicombo:hash-4',
      'facetapicombo:hash-5' => 'facetapicombo:hash-5',
      'facetapicombo:hash-6' => 'facetapicombo:hash-6',
      'facetapicombo:hash-7' => 'facetapicombo:hash-7',
      'facetapicombo:hash-8' => 'facetapicombo:hash-8',
      'facetapicombo:hash-9' => 'facetapicombo:hash-9',
      'facetapicombo:hash-10' => 'facetapicombo:hash-10',
      'facetapicombo:hash-11' => 'facetapicombo:hash-11',
      'facetapicombo:hash-12' => 'facetapicombo:hash-12',
      'facetapicombo:hash-13' => 'facetapicombo:hash-13',
      'facetapicombo:hash-14' => 'facetapicombo:hash-14',
      'facetapicombo:hash-15' => 'facetapicombo:hash-15',
      'facetapicombo:hash-16' => 'facetapicombo:hash-16',
      'facetapicombo:hash-17' => 'facetapicombo:hash-17',
      'facetapicombo:hash-18' => 'facetapicombo:hash-18',
      'facetapicombo:hash-19' => 'facetapicombo:hash-19',
      'facetapicombo:hash-20' => 'facetapicombo:hash-20',
      'facetapicombo:hash-21' => 'facetapicombo:hash-21',
      'facetapicombo:hash-22' => 'facetapicombo:hash-22',
      'facetapicombo:hash-23' => 'facetapicombo:hash-23',
      'facetapicombo:hash-24' => 'facetapicombo:hash-24',
      'facetapicombo:hash-25' => 'facetapicombo:hash-25',
      'facetapicombo:hash-26' => 'facetapicombo:hash-26',
      'facetapicombo:hash-27' => 'facetapicombo:hash-27',
      'facetapicombo:hash-28' => 'facetapicombo:hash-28',
      'facetapicombo:hash-29' => 'facetapicombo:hash-29',
      'facetapicombo:hash-30' => 'facetapicombo:hash-30',
      'facetapicombo:hash-31' => 'facetapicombo:hash-31',
    ),
  );
  $export['search_api_saved_searches_search_ids'] = $strongarm;

  return $export;
}
