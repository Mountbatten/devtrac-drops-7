<?php
/**
 * @file
 * devtrac_all_new_data_importers_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function devtrac_all_new_data_importers_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'clear devtrac_action_items_importer feeds'.
  $permissions['clear devtrac_action_items_importer feeds'] = array(
    'name' => 'clear devtrac_action_items_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear devtrac_districts_importer feeds'.
  $permissions['clear devtrac_districts_importer feeds'] = array(
    'name' => 'clear devtrac_districts_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear devtrac_fieldtrips_importer feeds'.
  $permissions['clear devtrac_fieldtrips_importer feeds'] = array(
    'name' => 'clear devtrac_fieldtrips_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear devtrac_locations_importer feeds'.
  $permissions['clear devtrac_locations_importer feeds'] = array(
    'name' => 'clear devtrac_locations_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear devtrac_sitereports_importer feeds'.
  $permissions['clear devtrac_sitereports_importer feeds'] = array(
    'name' => 'clear devtrac_sitereports_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear devtrac_users_importer feeds'.
  $permissions['clear devtrac_users_importer feeds'] = array(
    'name' => 'clear devtrac_users_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import devtrac_action_items_importer feeds'.
  $permissions['import devtrac_action_items_importer feeds'] = array(
    'name' => 'import devtrac_action_items_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import devtrac_districts_importer feeds'.
  $permissions['import devtrac_districts_importer feeds'] = array(
    'name' => 'import devtrac_districts_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import devtrac_fieldtrips_importer feeds'.
  $permissions['import devtrac_fieldtrips_importer feeds'] = array(
    'name' => 'import devtrac_fieldtrips_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import devtrac_locations_importer feeds'.
  $permissions['import devtrac_locations_importer feeds'] = array(
    'name' => 'import devtrac_locations_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import devtrac_sitereports_importer feeds'.
  $permissions['import devtrac_sitereports_importer feeds'] = array(
    'name' => 'import devtrac_sitereports_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import devtrac_users_importer feeds'.
  $permissions['import devtrac_users_importer feeds'] = array(
    'name' => 'import devtrac_users_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'tamper devtrac_action_items_importer'.
  $permissions['tamper devtrac_action_items_importer'] = array(
    'name' => 'tamper devtrac_action_items_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper devtrac_districts_importer'.
  $permissions['tamper devtrac_districts_importer'] = array(
    'name' => 'tamper devtrac_districts_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper devtrac_fieldtrips_importer'.
  $permissions['tamper devtrac_fieldtrips_importer'] = array(
    'name' => 'tamper devtrac_fieldtrips_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper devtrac_locations_importer'.
  $permissions['tamper devtrac_locations_importer'] = array(
    'name' => 'tamper devtrac_locations_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper devtrac_sitereports_importer'.
  $permissions['tamper devtrac_sitereports_importer'] = array(
    'name' => 'tamper devtrac_sitereports_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper devtrac_users_importer'.
  $permissions['tamper devtrac_users_importer'] = array(
    'name' => 'tamper devtrac_users_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock devtrac_action_items_importer feeds'.
  $permissions['unlock devtrac_action_items_importer feeds'] = array(
    'name' => 'unlock devtrac_action_items_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock devtrac_districts_importer feeds'.
  $permissions['unlock devtrac_districts_importer feeds'] = array(
    'name' => 'unlock devtrac_districts_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock devtrac_fieldtrips_importer feeds'.
  $permissions['unlock devtrac_fieldtrips_importer feeds'] = array(
    'name' => 'unlock devtrac_fieldtrips_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock devtrac_locations_importer feeds'.
  $permissions['unlock devtrac_locations_importer feeds'] = array(
    'name' => 'unlock devtrac_locations_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock devtrac_sitereports_importer feeds'.
  $permissions['unlock devtrac_sitereports_importer feeds'] = array(
    'name' => 'unlock devtrac_sitereports_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock devtrac_users_importer feeds'.
  $permissions['unlock devtrac_users_importer feeds'] = array(
    'name' => 'unlock devtrac_users_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
