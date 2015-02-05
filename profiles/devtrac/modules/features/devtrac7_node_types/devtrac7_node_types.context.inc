<?php
/**
 * @file
 * devtrac7_node_types.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function devtrac7_node_types_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'node_edit_location';
  $context->description = 'Adds blocks on the add node pages for places and ftritems. We use the path context because that one fires in hook_init.';
  $context->tag = 'Locations';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/add/place/*' => 'node/add/place/*',
        'node/add/ftritem/*' => 'node/add/ftritem/*',
        'node/*/edit' => 'node/*/edit',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'openlayers_plus-blockswitcher' => array(
          'module' => 'openlayers_plus',
          'delta' => 'blockswitcher',
          'region' => 'olmaptext_rightuppercorner',
          'weight' => '-10',
        ),
        'openlayers_geosearch-search-form-results' => array(
          'module' => 'openlayers_geosearch',
          'delta' => 'search-form-results',
          'region' => 'olmaptext_rightuppercorner',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Adds blocks on the add node pages for places and ftritems. We use the path context because that one fires in hook_init.');
  t('Locations');
  $export['node_edit_location'] = $context;

  return $export;
}
