<?php
/**
 * @file
 * iati_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function iati_feature_taxonomy_default_vocabularies() {
  return array(
    'activity_aid_type' => array(
      'name' => 'Activity Aid Type',
      'machine_name' => 'activity_aid_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'activity_collaboration_type' => array(
      'name' => 'Activity Collaboration Type',
      'machine_name' => 'activity_collaboration_type',
      'description' => 'Contain the collaboration types on the activity',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'activity_finance_type' => array(
      'name' => 'Activity Finance Type',
      'machine_name' => 'activity_finance_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'activity_flowtype' => array(
      'name' => 'Activity FlowType',
      'machine_name' => 'activity_flowtype',
      'description' => 'Contains the flow types for the activities',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'activity_status' => array(
      'name' => 'Activity Status',
      'machine_name' => 'activity_status',
      'description' => 'Contains the statuses applied to Activities/Projects',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'iati_organisation_type' => array(
      'name' => 'IATI Organisation Type',
      'machine_name' => 'iati_organisation_type',
      'description' => 'Type of the organisation',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'iati_roles' => array(
      'name' => 'IATI Organisation Roles',
      'machine_name' => 'iati_roles',
      'description' => 'Roles that organisations can have',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'languages' => array(
      'name' => 'Languages',
      'machine_name' => 'languages',
      'description' => 'Contains all the languages used siteiwide',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
