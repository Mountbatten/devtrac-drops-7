<?php
/**
 * @file
 * iati_field_permissions_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function iati_field_permissions_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access relations'.
  $permissions['access relations'] = array(
    'name' => 'access relations',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'administer relations'.
  $permissions['administer relations'] = array(
    'name' => 'administer relations',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'create field_field_iati_activity_doc'.
  $permissions['create field_field_iati_activity_doc'] = array(
    'name' => 'create field_field_iati_activity_doc',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_iati_activity_website'.
  $permissions['create field_iati_activity_website'] = array(
    'name' => 'create field_iati_activity_website',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_iati_org_role'.
  $permissions['create field_iati_org_role'] = array(
    'name' => 'create field_iati_org_role',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create iati_activity content'.
  $permissions['create iati_activity content'] = array(
    'name' => 'create iati_activity content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create iati_organisation content'.
  $permissions['create iati_organisation content'] = array(
    'name' => 'create iati_organisation content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create relations'.
  $permissions['create relations'] = array(
    'name' => 'create relations',
    'roles' => array(
      'administrator' => 'administrator',
      'iati manager' => 'iati manager',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'delete any iati_activity content'.
  $permissions['delete any iati_activity content'] = array(
    'name' => 'delete any iati_activity content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any iati_organisation content'.
  $permissions['delete any iati_organisation content'] = array(
    'name' => 'delete any iati_organisation content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own iati_activity content'.
  $permissions['delete own iati_activity content'] = array(
    'name' => 'delete own iati_activity content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own iati_organisation content'.
  $permissions['delete own iati_organisation content'] = array(
    'name' => 'delete own iati_organisation content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete relations'.
  $permissions['delete relations'] = array(
    'name' => 'delete relations',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'edit any iati_activity content'.
  $permissions['edit any iati_activity content'] = array(
    'name' => 'edit any iati_activity content',
    'roles' => array(
      'administrator' => 'administrator',
      'iati manager' => 'iati manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any iati_organisation content'.
  $permissions['edit any iati_organisation content'] = array(
    'name' => 'edit any iati_organisation content',
    'roles' => array(
      'administrator' => 'administrator',
      'iati manager' => 'iati manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_field_iati_activity_doc'.
  $permissions['edit field_field_iati_activity_doc'] = array(
    'name' => 'edit field_field_iati_activity_doc',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_iati_activity_website'.
  $permissions['edit field_iati_activity_website'] = array(
    'name' => 'edit field_iati_activity_website',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_iati_org_role'.
  $permissions['edit field_iati_org_role'] = array(
    'name' => 'edit field_iati_org_role',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_field_iati_activity_doc'.
  $permissions['edit own field_field_iati_activity_doc'] = array(
    'name' => 'edit own field_field_iati_activity_doc',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_iati_activity_website'.
  $permissions['edit own field_iati_activity_website'] = array(
    'name' => 'edit own field_iati_activity_website',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_iati_org_role'.
  $permissions['edit own field_iati_org_role'] = array(
    'name' => 'edit own field_iati_org_role',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own iati_activity content'.
  $permissions['edit own iati_activity content'] = array(
    'name' => 'edit own iati_activity content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own iati_organisation content'.
  $permissions['edit own iati_organisation content'] = array(
    'name' => 'edit own iati_organisation content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit relations'.
  $permissions['edit relations'] = array(
    'name' => 'edit relations',
    'roles' => array(
      'administrator' => 'administrator',
      'iati manager' => 'iati manager',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'view field_field_iati_activity_doc'.
  $permissions['view field_field_iati_activity_doc'] = array(
    'name' => 'view field_field_iati_activity_doc',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_iati_activity_website'.
  $permissions['view field_iati_activity_website'] = array(
    'name' => 'view field_iati_activity_website',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_iati_org_role'.
  $permissions['view field_iati_org_role'] = array(
    'name' => 'view field_iati_org_role',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_field_iati_activity_doc'.
  $permissions['view own field_field_iati_activity_doc'] = array(
    'name' => 'view own field_field_iati_activity_doc',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_iati_activity_website'.
  $permissions['view own field_iati_activity_website'] = array(
    'name' => 'view own field_iati_activity_website',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_iati_org_role'.
  $permissions['view own field_iati_org_role'] = array(
    'name' => 'view own field_iati_org_role',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
