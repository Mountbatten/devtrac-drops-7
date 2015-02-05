<?php
/**
 * @file
 * devtrac7_solr_search_activity_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function devtrac7_solr_search_activity_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac_solr_activity_graph';
  $context->description = 'Activities non Graph pages';
  $context->tag = 'Solr,Activities';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac_solr_view_activity' => 'devtrac_solr_view_activity',
        'devtrac_solr_view_activity:page' => 'devtrac_solr_view_activity:page',
      ),
    ),
    'views_modes' => array(
      'values' => array(
        'graphs' => 'graphs',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-devtrac_activities_graphs_tabs' => array(
          'module' => 'quicktabs',
          'delta' => 'devtrac_activities_graphs_tabs',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Activities non Graph pages');
  t('Solr,Activities');
  $export['devtrac_solr_activity_graph'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac_solr_activity_list';
  $context->description = 'Activities non map pages';
  $context->tag = 'IATI';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac_solr_view_activity' => 'devtrac_solr_view_activity',
        'devtrac_solr_view_activity:page' => 'devtrac_solr_view_activity:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'current_search-devtrac7_activities_activefacets' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_activities_activefacets',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-MtNLKdMwgWM420vvjvN3NpVTmx2Lua1t' => array(
          'module' => 'facetapi',
          'delta' => 'MtNLKdMwgWM420vvjvN3NpVTmx2Lua1t',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-eiZ0iIzo8pZjMq2jQS7D0sTV6CyzOTmY' => array(
          'module' => 'facetapi',
          'delta' => 'eiZ0iIzo8pZjMq2jQS7D0sTV6CyzOTmY',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-06QlUxLk70jkObKwQSXiTBJgE8xOI0Au' => array(
          'module' => 'facetapi',
          'delta' => '06QlUxLk70jkObKwQSXiTBJgE8xOI0Au',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-zgKe0WVeDezV6Orn7x14YYEN5Eg0NNix' => array(
          'module' => 'facetapi',
          'delta' => 'zgKe0WVeDezV6Orn7x14YYEN5Eg0NNix',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-f1GYV1i6jwFyC0diY1UxKJbOxnpiklJi' => array(
          'module' => 'facetapi',
          'delta' => 'f1GYV1i6jwFyC0diY1UxKJbOxnpiklJi',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-0MniJ83v0uHRY4mNu1WgNEwZzOU8inMb' => array(
          'module' => 'facetapi',
          'delta' => '0MniJ83v0uHRY4mNu1WgNEwZzOU8inMb',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'current_search-devtrac7_activities_standard' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_activities_standard',
          'region' => 'featured',
          'weight' => '-10',
        ),
        'pane-activities_info' => array(
          'module' => 'pane',
          'delta' => 'activities_info',
          'region' => 'featured',
          'weight' => '-72',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'informationalpage_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Activities non map pages');
  t('IATI');
  $export['devtrac_solr_activity_list'] = $context;

  return $export;
}
