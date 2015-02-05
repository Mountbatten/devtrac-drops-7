<?php
/**
 * @file
 * devtrac7_developer_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function devtrac7_developer_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac_solr_not_map_views_admin';
  $context->description = 'Context that manages things that happen on the Lists and Graphs';
  $context->tag = 'Solr';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'administrator' => 'administrator',
      ),
    ),
    'views' => array(
      'values' => array(
        'devtrac_solr_view_sitevisits' => 'devtrac_solr_view_sitevisits',
      ),
    ),
    'views_modes' => array(
      'values' => array(
        'list' => 'list',
        'tagcloud' => 'tagcloud',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'context_ui-devel' => array(
          'module' => 'context_ui',
          'delta' => 'devel',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context that manages things that happen on the Lists and Graphs');
  t('Solr');
  $export['devtrac_solr_not_map_views_admin'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac7_developers';
  $context->description = 'This is a Context only for Devs';
  $context->tag = 'developers';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'administrator' => 'administrator',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'diff-inline' => array(
          'module' => 'diff',
          'delta' => 'inline',
          'region' => 'footer_first',
          'weight' => '89',
        ),
        'context_ui-devel' => array(
          'module' => 'context_ui',
          'delta' => 'devel',
          'region' => 'footer_first',
          'weight' => '89',
        ),
        'devel_node_access-dna_user' => array(
          'module' => 'devel_node_access',
          'delta' => 'dna_user',
          'region' => 'footer_second',
          'weight' => '89',
        ),
        'devel_node_access-dna_node' => array(
          'module' => 'devel_node_access',
          'delta' => 'dna_node',
          'region' => 'footer_second',
          'weight' => '89',
        ),
      ),
    ),
    'debug' => array(
      'debug' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This is a Context only for Devs');
  t('developers');
  $export['devtrac7_developers'] = $context;

  return $export;
}
