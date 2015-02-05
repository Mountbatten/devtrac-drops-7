<?php
/**
 * @file
 * devtrac7_users2.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function devtrac7_users2_user_default_roles() {
  $roles = array();

  // Exported role: devtrac admin.
  $roles['devtrac admin'] = array(
    'name' => 'devtrac admin',
    'weight' => 0,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 0,
  );

  // Exported role: field worker.
  $roles['field worker'] = array(
    'name' => 'field worker',
    'weight' => 0,
  );

  // Exported role: iati manager.
  $roles['iati manager'] = array(
    'name' => 'iati manager',
    'weight' => 0,
  );

  return $roles;
}
