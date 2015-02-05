<?php
/**
 * @file
 * devtrac7_admin_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function devtrac7_admin_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer apps'.
  $permissions['administer apps'] = array(
    'name' => 'administer apps',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
    ),
    'module' => 'apps',
  );

  return $permissions;
}
