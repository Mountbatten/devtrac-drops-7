<?php
/**
 * @file
 * iati_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function iati_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'iati_activity_page';
  $context->description = 'Manages context on IATI Activity Pages';
  $context->tag = 'IATI';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'iati_activity' => 'iati_activity',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'quicktabs-activities' => array(
          'module' => 'quicktabs',
          'delta' => 'activities',
          'region' => 'preface_first',
          'weight' => '-7',
        ),
        'quicktabs-activities_map_list' => array(
          'module' => 'quicktabs',
          'delta' => 'activities_map_list',
          'region' => 'preface_second',
          'weight' => '-10',
        ),
        'views-a993338df02bfd7c43ff8f081bcf73e8' => array(
          'module' => 'views',
          'delta' => 'a993338df02bfd7c43ff8f081bcf73e8',
          'region' => 'preface_third',
          'weight' => '-10',
        ),
        'pane-activities_info' => array(
          'module' => 'pane',
          'delta' => 'activities_info',
          'region' => 'featured',
          'weight' => '-80',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'breadcrumb',
          'weight' => '-10',
        ),
        'delta_blocks-breadcrumb' => array(
          'module' => 'delta_blocks',
          'delta' => 'breadcrumb',
          'region' => 'breadcrumb',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'dashboardpage_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('IATI');
  t('Manages context on IATI Activity Pages');
  $export['iati_activity_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'iati_activity_page_edit';
  $context->description = 'Manages context on IATI Activity Edit Pages';
  $context->tag = 'IATI';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'iati_activity' => 'iati_activity',
      ),
      'options' => array(
        'node_form' => '2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'relation_add-block' => array(
          'module' => 'relation_add',
          'delta' => 'block',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('IATI');
  t('Manages context on IATI Activity Edit Pages');
  $export['iati_activity_page_edit'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'iati_organisation_page';
  $context->description = 'Manages context on IATI Organisation Pages';
  $context->tag = 'IATI';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'iati_organisation' => 'iati_organisation',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'quicktabs-organisation' => array(
          'module' => 'quicktabs',
          'delta' => 'organisation',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'quicktabs-organisation_map_list' => array(
          'module' => 'quicktabs',
          'delta' => 'organisation_map_list',
          'region' => 'preface_second',
          'weight' => '-10',
        ),
        'views-devtrac_organisation-block_2' => array(
          'module' => 'views',
          'delta' => 'devtrac_organisation-block_2',
          'region' => 'preface_third',
          'weight' => '-10',
        ),
        'views-devtrac_organisation-block_5' => array(
          'module' => 'views',
          'delta' => 'devtrac_organisation-block_5',
          'region' => 'preface_third',
          'weight' => '-9',
        ),
        'views-2fb6713c710e353fd776b3f305657de9' => array(
          'module' => 'views',
          'delta' => '2fb6713c710e353fd776b3f305657de9',
          'region' => 'preface_third',
          'weight' => '-8',
        ),
        'views-29c81570a2512b3fdd3074e3ca2d0ba8' => array(
          'module' => 'views',
          'delta' => '29c81570a2512b3fdd3074e3ca2d0ba8',
          'region' => 'preface_third',
          'weight' => '-7',
        ),
        'pane-organisations_info' => array(
          'module' => 'pane',
          'delta' => 'organisations_info',
          'region' => 'featured',
          'weight' => '-80',
        ),
        'delta_blocks-breadcrumb' => array(
          'module' => 'delta_blocks',
          'delta' => 'breadcrumb',
          'region' => 'breadcrumb',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'breadcrumb',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'dashboardpage_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('IATI');
  t('Manages context on IATI Organisation Pages');
  $export['iati_organisation_page'] = $context;

  return $export;
}
