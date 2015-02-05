<?php
/**
 * @file
 * devtrac7_solr_search_org_feature.current_search.inc
 */

/**
 * Implements hook_current_search_default_items().
 */
function devtrac7_solr_search_org_feature_current_search_default_items() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->name = 'devtrac7_organisati_activefacets';
  $item->label = 'Devtrac Organisations Active Facets';
  $item->settings = array(
    'items' => array(
      'devtrac7_organisation_fieldgroup' => array(
        'id' => 'devtracgroup',
        'label' => 'devtrac7_organisation_fieldgroup',
        'field_pattern' => '[facetapi_facet:facet-label]',
        'nofollow' => 1,
        'weight' => '0',
      ),
    ),
    'advanced' => array(
      'empty_searches' => '1',
    ),
  );
  $export['devtrac7_organisati_activefacets'] = $item;

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->name = 'devtrac7_organisations_standard';
  $item->label = 'Devtrac7 Organisations Standard';
  $item->settings = array(
    'items' => array(
      'results' => array(
        'id' => 'text',
        'label' => 'Results',
        'text' => '[facetapi_results:result-count] Organisation',
        'plural' => 1,
        'text_plural' => '[facetapi_results:result-count] Organisations',
        'plural_condition' => 'facetapi_results:result-count',
        'wrapper' => 1,
        'element' => 'h3',
        'css' => 0,
        'classes' => '',
        'weight' => '-50',
      ),
    ),
    'advanced' => array(
      'empty_searches' => '1',
    ),
  );
  $export['devtrac7_organisations_standard'] = $item;

  return $export;
}
