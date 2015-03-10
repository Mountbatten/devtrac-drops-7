<?php
/**
 * @file
 * devtrac7_field_permissions_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function devtrac7_field_permissions_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
      'editor' => 'editor',
      'iati manager' => 'iati manager',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access better messages'.
  $permissions['access better messages'] = array(
    'name' => 'access better messages',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'better_messages',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access draggableviews'.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
      'editor' => 'editor',
    ),
    'module' => 'draggableviews',
  );

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
      'editor' => 'editor',
      'field worker' => 'field worker',
    ),
    'module' => 'media',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
      'editor' => 'editor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer better messages'.
  $permissions['administer better messages'] = array(
    'name' => 'administer better messages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_messages',
  );

  // Exported permission: 'administer devtrac'.
  $permissions['administer devtrac'] = array(
    'name' => 'administer devtrac',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
      'editor' => 'editor',
    ),
    'module' => 'devtrac7',
  );

  // Exported permission: 'administer hidden comments'.
  $permissions['administer hidden comments'] = array(
    'name' => 'administer hidden comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'hidden_comment',
  );

  // Exported permission: 'administer own comments'.
  $permissions['administer own comments'] = array(
    'name' => 'administer own comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'hidden_comment',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer personal comments'.
  $permissions['administer personal comments'] = array(
    'name' => 'administer personal comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'hidden_comment',
  );

  // Exported permission: 'administer search_api_saved_searches'.
  $permissions['administer search_api_saved_searches'] = array(
    'name' => 'administer search_api_saved_searches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_api_saved_searches',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
      'editor' => 'editor',
    ),
    'module' => 'user',
  );

  // Exported permission: 'assign all roles'.
  $permissions['assign all roles'] = array(
    'name' => 'assign all roles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign devtrac admin role'.
  $permissions['assign devtrac admin role'] = array(
    'name' => 'assign devtrac admin role',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign editor role'.
  $permissions['assign editor role'] = array(
    'name' => 'assign editor role',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign field worker role'.
  $permissions['assign field worker role'] = array(
    'name' => 'assign field worker role',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
      'editor' => 'editor',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign iati manager role'.
  $permissions['assign iati manager role'] = array(
    'name' => 'assign iati manager role',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'create actionitem content'.
  $permissions['create actionitem content'] = array(
    'name' => 'create actionitem content',
    'roles' => array(
      'administrator' => 'administrator',
      'field worker' => 'field worker',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_actionitem_due_date'.
  $permissions['create field_actionitem_due_date'] = array(
    'name' => 'create field_actionitem_due_date',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_actionitem_followuptask'.
  $permissions['create field_actionitem_followuptask'] = array(
    'name' => 'create field_actionitem_followuptask',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_actionitem_ftreportitem'.
  $permissions['create field_actionitem_ftreportitem'] = array(
    'name' => 'create field_actionitem_ftreportitem',
    'roles' => array(
      'administrator' => 'administrator',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_actionitem_lat_long'.
  $permissions['create field_actionitem_lat_long'] = array(
    'name' => 'create field_actionitem_lat_long',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_actionitem_resp_place'.
  $permissions['create field_actionitem_resp_place'] = array(
    'name' => 'create field_actionitem_resp_place',
    'roles' => array(
      'administrator' => 'administrator',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_actionitem_responsible'.
  $permissions['create field_actionitem_responsible'] = array(
    'name' => 'create field_actionitem_responsible',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_actionitem_severity'.
  $permissions['create field_actionitem_severity'] = array(
    'name' => 'create field_actionitem_severity',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_actionitem_status'.
  $permissions['create field_actionitem_status'] = array(
    'name' => 'create field_actionitem_status',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_contact_email'.
  $permissions['create field_contact_email'] = array(
    'name' => 'create field_contact_email',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_contact_mailing_address'.
  $permissions['create field_contact_mailing_address'] = array(
    'name' => 'create field_contact_mailing_address',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_contact_organisation'.
  $permissions['create field_contact_organisation'] = array(
    'name' => 'create field_contact_organisation',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_contact_person_name'.
  $permissions['create field_contact_person_name'] = array(
    'name' => 'create field_contact_person_name',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_contact_telephone'.
  $permissions['create field_contact_telephone'] = array(
    'name' => 'create field_contact_telephone',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_fieldtrip_approval_date'.
  $permissions['create field_fieldtrip_approval_date'] = array(
    'name' => 'create field_fieldtrip_approval_date',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_fieldtrip_approved_by'.
  $permissions['create field_fieldtrip_approved_by'] = array(
    'name' => 'create field_fieldtrip_approved_by',
    'roles' => array(
      'administrator' => 'administrator',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_fieldtrip_fc_purpose'.
  $permissions['create field_fieldtrip_fc_purpose'] = array(
    'name' => 'create field_fieldtrip_fc_purpose',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_fieldtrip_internal_id'.
  $permissions['create field_fieldtrip_internal_id'] = array(
    'name' => 'create field_fieldtrip_internal_id',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_fieldtrip_narrative'.
  $permissions['create field_fieldtrip_narrative'] = array(
    'name' => 'create field_fieldtrip_narrative',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_fieldtrip_public_summary'.
  $permissions['create field_fieldtrip_public_summary'] = array(
    'name' => 'create field_fieldtrip_public_summary',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_fieldtrip_start_end_date'.
  $permissions['create field_fieldtrip_start_end_date'] = array(
    'name' => 'create field_fieldtrip_start_end_date',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_fieldtrip_status'.
  $permissions['create field_fieldtrip_status'] = array(
    'name' => 'create field_fieldtrip_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_fieldtrip_user'.
  $permissions['create field_fieldtrip_user'] = array(
    'name' => 'create field_fieldtrip_user',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_fieldtriptags'.
  $permissions['create field_fieldtriptags'] = array(
    'name' => 'create field_fieldtriptags',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ftritem_date_visited'.
  $permissions['create field_ftritem_date_visited'] = array(
    'name' => 'create field_ftritem_date_visited',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ftritem_field_trip'.
  $permissions['create field_ftritem_field_trip'] = array(
    'name' => 'create field_ftritem_field_trip',
    'roles' => array(
      'administrator' => 'administrator',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ftritem_images'.
  $permissions['create field_ftritem_images'] = array(
    'name' => 'create field_ftritem_images',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ftritem_lat_long'.
  $permissions['create field_ftritem_lat_long'] = array(
    'name' => 'create field_ftritem_lat_long',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ftritem_narrative'.
  $permissions['create field_ftritem_narrative'] = array(
    'name' => 'create field_ftritem_narrative',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ftritem_place'.
  $permissions['create field_ftritem_place'] = array(
    'name' => 'create field_ftritem_place',
    'roles' => array(
      'administrator' => 'administrator',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ftritem_public_summary'.
  $permissions['create field_ftritem_public_summary'] = array(
    'name' => 'create field_ftritem_public_summary',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ftritem_status'.
  $permissions['create field_ftritem_status'] = array(
    'name' => 'create field_ftritem_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_organisation'.
  $permissions['create field_organisation'] = array(
    'name' => 'create field_organisation',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_place_contact_info'.
  $permissions['create field_place_contact_info'] = array(
    'name' => 'create field_place_contact_info',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_place_email'.
  $permissions['create field_place_email'] = array(
    'name' => 'create field_place_email',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_place_lat_long'.
  $permissions['create field_place_lat_long'] = array(
    'name' => 'create field_place_lat_long',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_place_phone'.
  $permissions['create field_place_phone'] = array(
    'name' => 'create field_place_phone',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_place_responsible_person'.
  $permissions['create field_place_responsible_person'] = array(
    'name' => 'create field_place_responsible_person',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_place_sourcelayer'.
  $permissions['create field_place_sourcelayer'] = array(
    'name' => 'create field_place_sourcelayer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_place_sourceuri'.
  $permissions['create field_place_sourceuri'] = array(
    'name' => 'create field_place_sourceuri',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_place_unique_id'.
  $permissions['create field_place_unique_id'] = array(
    'name' => 'create field_place_unique_id',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_place_website'.
  $permissions['create field_place_website'] = array(
    'name' => 'create field_place_website',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create fieldtrip content'.
  $permissions['create fieldtrip content'] = array(
    'name' => 'create fieldtrip content',
    'roles' => array(
      'administrator' => 'administrator',
      'field worker' => 'field worker',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'administrator' => 'administrator',
      'field worker' => 'field worker',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create ftritem content'.
  $permissions['create ftritem content'] = array(
    'name' => 'create ftritem content',
    'roles' => array(
      'administrator' => 'administrator',
      'field worker' => 'field worker',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create place content'.
  $permissions['create place content'] = array(
    'name' => 'create place content',
    'roles' => array(
      'administrator' => 'administrator',
      'field worker' => 'field worker',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create questionnaire_question'.
  $permissions['create questionnaire_question'] = array(
    'name' => 'create questionnaire_question',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
      'editor' => 'editor',
    ),
    'module' => 'questionnaire_question',
  );

  // Exported permission: 'create questionnaire_question content'.
  $permissions['create questionnaire_question content'] = array(
    'name' => 'create questionnaire_question content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create taxonomy_vocabulary_1'.
  $permissions['create taxonomy_vocabulary_1'] = array(
    'name' => 'create taxonomy_vocabulary_1',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create taxonomy_vocabulary_6'.
  $permissions['create taxonomy_vocabulary_6'] = array(
    'name' => 'create taxonomy_vocabulary_6',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create taxonomy_vocabulary_7'.
  $permissions['create taxonomy_vocabulary_7'] = array(
    'name' => 'create taxonomy_vocabulary_7',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create taxonomy_vocabulary_8'.
  $permissions['create taxonomy_vocabulary_8'] = array(
    'name' => 'create taxonomy_vocabulary_8',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'delete any actionitem content'.
  $permissions['delete any actionitem content'] = array(
    'name' => 'delete any actionitem content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any fieldtrip content'.
  $permissions['delete any fieldtrip content'] = array(
    'name' => 'delete any fieldtrip content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ftritem content'.
  $permissions['delete any ftritem content'] = array(
    'name' => 'delete any ftritem content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any place content'.
  $permissions['delete any place content'] = array(
    'name' => 'delete any place content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any questionnaire_question'.
  $permissions['delete any questionnaire_question'] = array(
    'name' => 'delete any questionnaire_question',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'questionnaire_question',
  );

  // Exported permission: 'delete any questionnaire_question content'.
  $permissions['delete any questionnaire_question content'] = array(
    'name' => 'delete any questionnaire_question content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own actionitem content'.
  $permissions['delete own actionitem content'] = array(
    'name' => 'delete own actionitem content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own fieldtrip content'.
  $permissions['delete own fieldtrip content'] = array(
    'name' => 'delete own fieldtrip content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ftritem content'.
  $permissions['delete own ftritem content'] = array(
    'name' => 'delete own ftritem content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own place content'.
  $permissions['delete own place content'] = array(
    'name' => 'delete own place content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own questionnaire_question content'.
  $permissions['delete own questionnaire_question content'] = array(
    'name' => 'delete own questionnaire_question content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'deny configuration on node form'.
  $permissions['deny configuration on node form'] = array(
    'name' => 'deny configuration on node form',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'devtrac admin' => 'devtrac admin',
      'editor' => 'editor',
      'field worker' => 'field worker',
      'iati manager' => 'iati manager',
    ),
    'module' => 'nodesinblock',
  );

  // Exported permission: 'edit any actionitem content'.
  $permissions['edit any actionitem content'] = array(
    'name' => 'edit any actionitem content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any fieldtrip content'.
  $permissions['edit any fieldtrip content'] = array(
    'name' => 'edit any fieldtrip content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ftritem content'.
  $permissions['edit any ftritem content'] = array(
    'name' => 'edit any ftritem content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any place content'.
  $permissions['edit any place content'] = array(
    'name' => 'edit any place content',
    'roles' => array(
      'administrator' => 'administrator',
      'field worker' => 'field worker',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any questionnaire_question'.
  $permissions['edit any questionnaire_question'] = array(
    'name' => 'edit any questionnaire_question',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
      'editor' => 'editor',
    ),
    'module' => 'questionnaire_question',
  );

  // Exported permission: 'edit any questionnaire_question content'.
  $permissions['edit any questionnaire_question content'] = array(
    'name' => 'edit any questionnaire_question content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_actionitem_due_date'.
  $permissions['edit field_actionitem_due_date'] = array(
    'name' => 'edit field_actionitem_due_date',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_actionitem_followuptask'.
  $permissions['edit field_actionitem_followuptask'] = array(
    'name' => 'edit field_actionitem_followuptask',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_actionitem_ftreportitem'.
  $permissions['edit field_actionitem_ftreportitem'] = array(
    'name' => 'edit field_actionitem_ftreportitem',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_actionitem_lat_long'.
  $permissions['edit field_actionitem_lat_long'] = array(
    'name' => 'edit field_actionitem_lat_long',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_actionitem_resp_place'.
  $permissions['edit field_actionitem_resp_place'] = array(
    'name' => 'edit field_actionitem_resp_place',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_actionitem_responsible'.
  $permissions['edit field_actionitem_responsible'] = array(
    'name' => 'edit field_actionitem_responsible',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_actionitem_severity'.
  $permissions['edit field_actionitem_severity'] = array(
    'name' => 'edit field_actionitem_severity',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_actionitem_status'.
  $permissions['edit field_actionitem_status'] = array(
    'name' => 'edit field_actionitem_status',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_contact_email'.
  $permissions['edit field_contact_email'] = array(
    'name' => 'edit field_contact_email',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_contact_mailing_address'.
  $permissions['edit field_contact_mailing_address'] = array(
    'name' => 'edit field_contact_mailing_address',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_contact_organisation'.
  $permissions['edit field_contact_organisation'] = array(
    'name' => 'edit field_contact_organisation',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_contact_person_name'.
  $permissions['edit field_contact_person_name'] = array(
    'name' => 'edit field_contact_person_name',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_contact_telephone'.
  $permissions['edit field_contact_telephone'] = array(
    'name' => 'edit field_contact_telephone',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_fieldtrip_approval_date'.
  $permissions['edit field_fieldtrip_approval_date'] = array(
    'name' => 'edit field_fieldtrip_approval_date',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_fieldtrip_approved_by'.
  $permissions['edit field_fieldtrip_approved_by'] = array(
    'name' => 'edit field_fieldtrip_approved_by',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_fieldtrip_fc_purpose'.
  $permissions['edit field_fieldtrip_fc_purpose'] = array(
    'name' => 'edit field_fieldtrip_fc_purpose',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_fieldtrip_internal_id'.
  $permissions['edit field_fieldtrip_internal_id'] = array(
    'name' => 'edit field_fieldtrip_internal_id',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_fieldtrip_narrative'.
  $permissions['edit field_fieldtrip_narrative'] = array(
    'name' => 'edit field_fieldtrip_narrative',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_fieldtrip_public_summary'.
  $permissions['edit field_fieldtrip_public_summary'] = array(
    'name' => 'edit field_fieldtrip_public_summary',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_fieldtrip_start_end_date'.
  $permissions['edit field_fieldtrip_start_end_date'] = array(
    'name' => 'edit field_fieldtrip_start_end_date',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_fieldtrip_status'.
  $permissions['edit field_fieldtrip_status'] = array(
    'name' => 'edit field_fieldtrip_status',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_fieldtrip_user'.
  $permissions['edit field_fieldtrip_user'] = array(
    'name' => 'edit field_fieldtrip_user',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_fieldtriptags'.
  $permissions['edit field_fieldtriptags'] = array(
    'name' => 'edit field_fieldtriptags',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ftritem_date_visited'.
  $permissions['edit field_ftritem_date_visited'] = array(
    'name' => 'edit field_ftritem_date_visited',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ftritem_field_trip'.
  $permissions['edit field_ftritem_field_trip'] = array(
    'name' => 'edit field_ftritem_field_trip',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ftritem_images'.
  $permissions['edit field_ftritem_images'] = array(
    'name' => 'edit field_ftritem_images',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ftritem_lat_long'.
  $permissions['edit field_ftritem_lat_long'] = array(
    'name' => 'edit field_ftritem_lat_long',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ftritem_narrative'.
  $permissions['edit field_ftritem_narrative'] = array(
    'name' => 'edit field_ftritem_narrative',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ftritem_place'.
  $permissions['edit field_ftritem_place'] = array(
    'name' => 'edit field_ftritem_place',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ftritem_public_summary'.
  $permissions['edit field_ftritem_public_summary'] = array(
    'name' => 'edit field_ftritem_public_summary',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ftritem_status'.
  $permissions['edit field_ftritem_status'] = array(
    'name' => 'edit field_ftritem_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_organisation'.
  $permissions['edit field_organisation'] = array(
    'name' => 'edit field_organisation',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_place_contact_info'.
  $permissions['edit field_place_contact_info'] = array(
    'name' => 'edit field_place_contact_info',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_place_email'.
  $permissions['edit field_place_email'] = array(
    'name' => 'edit field_place_email',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_place_lat_long'.
  $permissions['edit field_place_lat_long'] = array(
    'name' => 'edit field_place_lat_long',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_place_phone'.
  $permissions['edit field_place_phone'] = array(
    'name' => 'edit field_place_phone',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_place_responsible_person'.
  $permissions['edit field_place_responsible_person'] = array(
    'name' => 'edit field_place_responsible_person',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_place_sourcelayer'.
  $permissions['edit field_place_sourcelayer'] = array(
    'name' => 'edit field_place_sourcelayer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_place_sourceuri'.
  $permissions['edit field_place_sourceuri'] = array(
    'name' => 'edit field_place_sourceuri',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_place_unique_id'.
  $permissions['edit field_place_unique_id'] = array(
    'name' => 'edit field_place_unique_id',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_place_website'.
  $permissions['edit field_place_website'] = array(
    'name' => 'edit field_place_website',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own actionitem content'.
  $permissions['edit own actionitem content'] = array(
    'name' => 'edit own actionitem content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_actionitem_due_date'.
  $permissions['edit own field_actionitem_due_date'] = array(
    'name' => 'edit own field_actionitem_due_date',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_actionitem_followuptask'.
  $permissions['edit own field_actionitem_followuptask'] = array(
    'name' => 'edit own field_actionitem_followuptask',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_actionitem_ftreportitem'.
  $permissions['edit own field_actionitem_ftreportitem'] = array(
    'name' => 'edit own field_actionitem_ftreportitem',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_actionitem_lat_long'.
  $permissions['edit own field_actionitem_lat_long'] = array(
    'name' => 'edit own field_actionitem_lat_long',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_actionitem_resp_place'.
  $permissions['edit own field_actionitem_resp_place'] = array(
    'name' => 'edit own field_actionitem_resp_place',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_actionitem_responsible'.
  $permissions['edit own field_actionitem_responsible'] = array(
    'name' => 'edit own field_actionitem_responsible',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_actionitem_severity'.
  $permissions['edit own field_actionitem_severity'] = array(
    'name' => 'edit own field_actionitem_severity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_actionitem_status'.
  $permissions['edit own field_actionitem_status'] = array(
    'name' => 'edit own field_actionitem_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_contact_email'.
  $permissions['edit own field_contact_email'] = array(
    'name' => 'edit own field_contact_email',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_contact_mailing_address'.
  $permissions['edit own field_contact_mailing_address'] = array(
    'name' => 'edit own field_contact_mailing_address',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_contact_organisation'.
  $permissions['edit own field_contact_organisation'] = array(
    'name' => 'edit own field_contact_organisation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_contact_person_name'.
  $permissions['edit own field_contact_person_name'] = array(
    'name' => 'edit own field_contact_person_name',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_contact_telephone'.
  $permissions['edit own field_contact_telephone'] = array(
    'name' => 'edit own field_contact_telephone',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_fieldtrip_approval_date'.
  $permissions['edit own field_fieldtrip_approval_date'] = array(
    'name' => 'edit own field_fieldtrip_approval_date',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_fieldtrip_approved_by'.
  $permissions['edit own field_fieldtrip_approved_by'] = array(
    'name' => 'edit own field_fieldtrip_approved_by',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_fieldtrip_fc_purpose'.
  $permissions['edit own field_fieldtrip_fc_purpose'] = array(
    'name' => 'edit own field_fieldtrip_fc_purpose',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_fieldtrip_internal_id'.
  $permissions['edit own field_fieldtrip_internal_id'] = array(
    'name' => 'edit own field_fieldtrip_internal_id',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_fieldtrip_narrative'.
  $permissions['edit own field_fieldtrip_narrative'] = array(
    'name' => 'edit own field_fieldtrip_narrative',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_fieldtrip_public_summary'.
  $permissions['edit own field_fieldtrip_public_summary'] = array(
    'name' => 'edit own field_fieldtrip_public_summary',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_fieldtrip_start_end_date'.
  $permissions['edit own field_fieldtrip_start_end_date'] = array(
    'name' => 'edit own field_fieldtrip_start_end_date',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_fieldtrip_status'.
  $permissions['edit own field_fieldtrip_status'] = array(
    'name' => 'edit own field_fieldtrip_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_fieldtrip_user'.
  $permissions['edit own field_fieldtrip_user'] = array(
    'name' => 'edit own field_fieldtrip_user',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_fieldtriptags'.
  $permissions['edit own field_fieldtriptags'] = array(
    'name' => 'edit own field_fieldtriptags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ftritem_date_visited'.
  $permissions['edit own field_ftritem_date_visited'] = array(
    'name' => 'edit own field_ftritem_date_visited',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ftritem_field_trip'.
  $permissions['edit own field_ftritem_field_trip'] = array(
    'name' => 'edit own field_ftritem_field_trip',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ftritem_images'.
  $permissions['edit own field_ftritem_images'] = array(
    'name' => 'edit own field_ftritem_images',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ftritem_lat_long'.
  $permissions['edit own field_ftritem_lat_long'] = array(
    'name' => 'edit own field_ftritem_lat_long',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ftritem_narrative'.
  $permissions['edit own field_ftritem_narrative'] = array(
    'name' => 'edit own field_ftritem_narrative',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ftritem_place'.
  $permissions['edit own field_ftritem_place'] = array(
    'name' => 'edit own field_ftritem_place',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ftritem_public_summary'.
  $permissions['edit own field_ftritem_public_summary'] = array(
    'name' => 'edit own field_ftritem_public_summary',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ftritem_status'.
  $permissions['edit own field_ftritem_status'] = array(
    'name' => 'edit own field_ftritem_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_organisation'.
  $permissions['edit own field_organisation'] = array(
    'name' => 'edit own field_organisation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_place_contact_info'.
  $permissions['edit own field_place_contact_info'] = array(
    'name' => 'edit own field_place_contact_info',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_place_email'.
  $permissions['edit own field_place_email'] = array(
    'name' => 'edit own field_place_email',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_place_lat_long'.
  $permissions['edit own field_place_lat_long'] = array(
    'name' => 'edit own field_place_lat_long',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_place_phone'.
  $permissions['edit own field_place_phone'] = array(
    'name' => 'edit own field_place_phone',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_place_responsible_person'.
  $permissions['edit own field_place_responsible_person'] = array(
    'name' => 'edit own field_place_responsible_person',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_place_sourcelayer'.
  $permissions['edit own field_place_sourcelayer'] = array(
    'name' => 'edit own field_place_sourcelayer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_place_sourceuri'.
  $permissions['edit own field_place_sourceuri'] = array(
    'name' => 'edit own field_place_sourceuri',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_place_unique_id'.
  $permissions['edit own field_place_unique_id'] = array(
    'name' => 'edit own field_place_unique_id',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_place_website'.
  $permissions['edit own field_place_website'] = array(
    'name' => 'edit own field_place_website',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own fieldtrip content'.
  $permissions['edit own fieldtrip content'] = array(
    'name' => 'edit own fieldtrip content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ftritem content'.
  $permissions['edit own ftritem content'] = array(
    'name' => 'edit own ftritem content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own place content'.
  $permissions['edit own place content'] = array(
    'name' => 'edit own place content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own questionnaire_question content'.
  $permissions['edit own questionnaire_question content'] = array(
    'name' => 'edit own questionnaire_question content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own taxonomy_vocabulary_1'.
  $permissions['edit own taxonomy_vocabulary_1'] = array(
    'name' => 'edit own taxonomy_vocabulary_1',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own taxonomy_vocabulary_6'.
  $permissions['edit own taxonomy_vocabulary_6'] = array(
    'name' => 'edit own taxonomy_vocabulary_6',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own taxonomy_vocabulary_7'.
  $permissions['edit own taxonomy_vocabulary_7'] = array(
    'name' => 'edit own taxonomy_vocabulary_7',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own taxonomy_vocabulary_8'.
  $permissions['edit own taxonomy_vocabulary_8'] = array(
    'name' => 'edit own taxonomy_vocabulary_8',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit taxonomy_vocabulary_1'.
  $permissions['edit taxonomy_vocabulary_1'] = array(
    'name' => 'edit taxonomy_vocabulary_1',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit taxonomy_vocabulary_6'.
  $permissions['edit taxonomy_vocabulary_6'] = array(
    'name' => 'edit taxonomy_vocabulary_6',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit taxonomy_vocabulary_7'.
  $permissions['edit taxonomy_vocabulary_7'] = array(
    'name' => 'edit taxonomy_vocabulary_7',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit taxonomy_vocabulary_8'.
  $permissions['edit taxonomy_vocabulary_8'] = array(
    'name' => 'edit taxonomy_vocabulary_8',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'get any binary files'.
  $permissions['get any binary files'] = array(
    'name' => 'get any binary files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'services',
  );

  // Exported permission: 'get own binary files'.
  $permissions['get own binary files'] = array(
    'name' => 'get own binary files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'services',
  );

  // Exported permission: 'hide comments'.
  $permissions['hide comments'] = array(
    'name' => 'hide comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'hidden_comment',
  );

  // Exported permission: 'hide own comments'.
  $permissions['hide own comments'] = array(
    'name' => 'hide own comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'hidden_comment',
  );

  // Exported permission: 'hide personal comments'.
  $permissions['hide personal comments'] = array(
    'name' => 'hide personal comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'hidden_comment',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'save file information'.
  $permissions['save file information'] = array(
    'name' => 'save file information',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'services',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'submit questions'.
  $permissions['submit questions'] = array(
    'name' => 'submit questions',
    'roles' => array(
      'administrator' => 'administrator',
      'field worker' => 'field worker',
    ),
    'module' => 'questionnaire_question',
  );

  // Exported permission: 'use search_api_saved_searches'.
  $permissions['use search_api_saved_searches'] = array(
    'name' => 'use search_api_saved_searches',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_api_saved_searches',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
      'editor' => 'editor',
      'field worker' => 'field worker',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view field_actionitem_due_date'.
  $permissions['view field_actionitem_due_date'] = array(
    'name' => 'view field_actionitem_due_date',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_actionitem_followuptask'.
  $permissions['view field_actionitem_followuptask'] = array(
    'name' => 'view field_actionitem_followuptask',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_actionitem_ftreportitem'.
  $permissions['view field_actionitem_ftreportitem'] = array(
    'name' => 'view field_actionitem_ftreportitem',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_actionitem_lat_long'.
  $permissions['view field_actionitem_lat_long'] = array(
    'name' => 'view field_actionitem_lat_long',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_actionitem_resp_place'.
  $permissions['view field_actionitem_resp_place'] = array(
    'name' => 'view field_actionitem_resp_place',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_actionitem_responsible'.
  $permissions['view field_actionitem_responsible'] = array(
    'name' => 'view field_actionitem_responsible',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_actionitem_severity'.
  $permissions['view field_actionitem_severity'] = array(
    'name' => 'view field_actionitem_severity',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_actionitem_status'.
  $permissions['view field_actionitem_status'] = array(
    'name' => 'view field_actionitem_status',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_contact_email'.
  $permissions['view field_contact_email'] = array(
    'name' => 'view field_contact_email',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_contact_mailing_address'.
  $permissions['view field_contact_mailing_address'] = array(
    'name' => 'view field_contact_mailing_address',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_contact_organisation'.
  $permissions['view field_contact_organisation'] = array(
    'name' => 'view field_contact_organisation',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_contact_person_name'.
  $permissions['view field_contact_person_name'] = array(
    'name' => 'view field_contact_person_name',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_contact_telephone'.
  $permissions['view field_contact_telephone'] = array(
    'name' => 'view field_contact_telephone',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_fieldtrip_approval_date'.
  $permissions['view field_fieldtrip_approval_date'] = array(
    'name' => 'view field_fieldtrip_approval_date',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_fieldtrip_approved_by'.
  $permissions['view field_fieldtrip_approved_by'] = array(
    'name' => 'view field_fieldtrip_approved_by',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_fieldtrip_fc_purpose'.
  $permissions['view field_fieldtrip_fc_purpose'] = array(
    'name' => 'view field_fieldtrip_fc_purpose',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_fieldtrip_internal_id'.
  $permissions['view field_fieldtrip_internal_id'] = array(
    'name' => 'view field_fieldtrip_internal_id',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_fieldtrip_narrative'.
  $permissions['view field_fieldtrip_narrative'] = array(
    'name' => 'view field_fieldtrip_narrative',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_fieldtrip_public_summary'.
  $permissions['view field_fieldtrip_public_summary'] = array(
    'name' => 'view field_fieldtrip_public_summary',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_fieldtrip_start_end_date'.
  $permissions['view field_fieldtrip_start_end_date'] = array(
    'name' => 'view field_fieldtrip_start_end_date',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_fieldtrip_status'.
  $permissions['view field_fieldtrip_status'] = array(
    'name' => 'view field_fieldtrip_status',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_fieldtrip_user'.
  $permissions['view field_fieldtrip_user'] = array(
    'name' => 'view field_fieldtrip_user',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_fieldtriptags'.
  $permissions['view field_fieldtriptags'] = array(
    'name' => 'view field_fieldtriptags',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ftritem_date_visited'.
  $permissions['view field_ftritem_date_visited'] = array(
    'name' => 'view field_ftritem_date_visited',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ftritem_field_trip'.
  $permissions['view field_ftritem_field_trip'] = array(
    'name' => 'view field_ftritem_field_trip',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ftritem_images'.
  $permissions['view field_ftritem_images'] = array(
    'name' => 'view field_ftritem_images',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ftritem_lat_long'.
  $permissions['view field_ftritem_lat_long'] = array(
    'name' => 'view field_ftritem_lat_long',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ftritem_narrative'.
  $permissions['view field_ftritem_narrative'] = array(
    'name' => 'view field_ftritem_narrative',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ftritem_place'.
  $permissions['view field_ftritem_place'] = array(
    'name' => 'view field_ftritem_place',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ftritem_public_summary'.
  $permissions['view field_ftritem_public_summary'] = array(
    'name' => 'view field_ftritem_public_summary',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ftritem_status'.
  $permissions['view field_ftritem_status'] = array(
    'name' => 'view field_ftritem_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_organisation'.
  $permissions['view field_organisation'] = array(
    'name' => 'view field_organisation',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_place_contact_info'.
  $permissions['view field_place_contact_info'] = array(
    'name' => 'view field_place_contact_info',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_place_email'.
  $permissions['view field_place_email'] = array(
    'name' => 'view field_place_email',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_place_lat_long'.
  $permissions['view field_place_lat_long'] = array(
    'name' => 'view field_place_lat_long',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_place_phone'.
  $permissions['view field_place_phone'] = array(
    'name' => 'view field_place_phone',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_place_responsible_person'.
  $permissions['view field_place_responsible_person'] = array(
    'name' => 'view field_place_responsible_person',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_place_sourcelayer'.
  $permissions['view field_place_sourcelayer'] = array(
    'name' => 'view field_place_sourcelayer',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_place_sourceuri'.
  $permissions['view field_place_sourceuri'] = array(
    'name' => 'view field_place_sourceuri',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_place_unique_id'.
  $permissions['view field_place_unique_id'] = array(
    'name' => 'view field_place_unique_id',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_place_website'.
  $permissions['view field_place_website'] = array(
    'name' => 'view field_place_website',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_actionitem_due_date'.
  $permissions['view own field_actionitem_due_date'] = array(
    'name' => 'view own field_actionitem_due_date',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_actionitem_followuptask'.
  $permissions['view own field_actionitem_followuptask'] = array(
    'name' => 'view own field_actionitem_followuptask',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_actionitem_ftreportitem'.
  $permissions['view own field_actionitem_ftreportitem'] = array(
    'name' => 'view own field_actionitem_ftreportitem',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_actionitem_lat_long'.
  $permissions['view own field_actionitem_lat_long'] = array(
    'name' => 'view own field_actionitem_lat_long',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_actionitem_resp_place'.
  $permissions['view own field_actionitem_resp_place'] = array(
    'name' => 'view own field_actionitem_resp_place',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_actionitem_responsible'.
  $permissions['view own field_actionitem_responsible'] = array(
    'name' => 'view own field_actionitem_responsible',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_actionitem_severity'.
  $permissions['view own field_actionitem_severity'] = array(
    'name' => 'view own field_actionitem_severity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_actionitem_status'.
  $permissions['view own field_actionitem_status'] = array(
    'name' => 'view own field_actionitem_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_contact_email'.
  $permissions['view own field_contact_email'] = array(
    'name' => 'view own field_contact_email',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_contact_mailing_address'.
  $permissions['view own field_contact_mailing_address'] = array(
    'name' => 'view own field_contact_mailing_address',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_contact_organisation'.
  $permissions['view own field_contact_organisation'] = array(
    'name' => 'view own field_contact_organisation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_contact_person_name'.
  $permissions['view own field_contact_person_name'] = array(
    'name' => 'view own field_contact_person_name',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_contact_telephone'.
  $permissions['view own field_contact_telephone'] = array(
    'name' => 'view own field_contact_telephone',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_fieldtrip_approval_date'.
  $permissions['view own field_fieldtrip_approval_date'] = array(
    'name' => 'view own field_fieldtrip_approval_date',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_fieldtrip_approved_by'.
  $permissions['view own field_fieldtrip_approved_by'] = array(
    'name' => 'view own field_fieldtrip_approved_by',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_fieldtrip_fc_purpose'.
  $permissions['view own field_fieldtrip_fc_purpose'] = array(
    'name' => 'view own field_fieldtrip_fc_purpose',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_fieldtrip_internal_id'.
  $permissions['view own field_fieldtrip_internal_id'] = array(
    'name' => 'view own field_fieldtrip_internal_id',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_fieldtrip_narrative'.
  $permissions['view own field_fieldtrip_narrative'] = array(
    'name' => 'view own field_fieldtrip_narrative',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_fieldtrip_public_summary'.
  $permissions['view own field_fieldtrip_public_summary'] = array(
    'name' => 'view own field_fieldtrip_public_summary',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_fieldtrip_start_end_date'.
  $permissions['view own field_fieldtrip_start_end_date'] = array(
    'name' => 'view own field_fieldtrip_start_end_date',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_fieldtrip_status'.
  $permissions['view own field_fieldtrip_status'] = array(
    'name' => 'view own field_fieldtrip_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_fieldtrip_user'.
  $permissions['view own field_fieldtrip_user'] = array(
    'name' => 'view own field_fieldtrip_user',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_fieldtriptags'.
  $permissions['view own field_fieldtriptags'] = array(
    'name' => 'view own field_fieldtriptags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ftritem_date_visited'.
  $permissions['view own field_ftritem_date_visited'] = array(
    'name' => 'view own field_ftritem_date_visited',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ftritem_field_trip'.
  $permissions['view own field_ftritem_field_trip'] = array(
    'name' => 'view own field_ftritem_field_trip',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ftritem_images'.
  $permissions['view own field_ftritem_images'] = array(
    'name' => 'view own field_ftritem_images',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ftritem_lat_long'.
  $permissions['view own field_ftritem_lat_long'] = array(
    'name' => 'view own field_ftritem_lat_long',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ftritem_narrative'.
  $permissions['view own field_ftritem_narrative'] = array(
    'name' => 'view own field_ftritem_narrative',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ftritem_place'.
  $permissions['view own field_ftritem_place'] = array(
    'name' => 'view own field_ftritem_place',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ftritem_public_summary'.
  $permissions['view own field_ftritem_public_summary'] = array(
    'name' => 'view own field_ftritem_public_summary',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ftritem_status'.
  $permissions['view own field_ftritem_status'] = array(
    'name' => 'view own field_ftritem_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_organisation'.
  $permissions['view own field_organisation'] = array(
    'name' => 'view own field_organisation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_place_contact_info'.
  $permissions['view own field_place_contact_info'] = array(
    'name' => 'view own field_place_contact_info',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_place_email'.
  $permissions['view own field_place_email'] = array(
    'name' => 'view own field_place_email',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_place_lat_long'.
  $permissions['view own field_place_lat_long'] = array(
    'name' => 'view own field_place_lat_long',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_place_phone'.
  $permissions['view own field_place_phone'] = array(
    'name' => 'view own field_place_phone',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_place_responsible_person'.
  $permissions['view own field_place_responsible_person'] = array(
    'name' => 'view own field_place_responsible_person',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_place_sourcelayer'.
  $permissions['view own field_place_sourcelayer'] = array(
    'name' => 'view own field_place_sourcelayer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_place_sourceuri'.
  $permissions['view own field_place_sourceuri'] = array(
    'name' => 'view own field_place_sourceuri',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_place_unique_id'.
  $permissions['view own field_place_unique_id'] = array(
    'name' => 'view own field_place_unique_id',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_place_website'.
  $permissions['view own field_place_website'] = array(
    'name' => 'view own field_place_website',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own taxonomy_vocabulary_1'.
  $permissions['view own taxonomy_vocabulary_1'] = array(
    'name' => 'view own taxonomy_vocabulary_1',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own taxonomy_vocabulary_6'.
  $permissions['view own taxonomy_vocabulary_6'] = array(
    'name' => 'view own taxonomy_vocabulary_6',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own taxonomy_vocabulary_7'.
  $permissions['view own taxonomy_vocabulary_7'] = array(
    'name' => 'view own taxonomy_vocabulary_7',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own taxonomy_vocabulary_8'.
  $permissions['view own taxonomy_vocabulary_8'] = array(
    'name' => 'view own taxonomy_vocabulary_8',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view questionnaire answers'.
  $permissions['view questionnaire answers'] = array(
    'name' => 'view questionnaire answers',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'questionnaire_answer',
  );

  // Exported permission: 'view questions'.
  $permissions['view questions'] = array(
    'name' => 'view questions',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'questionnaire_question',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view taxonomy_vocabulary_1'.
  $permissions['view taxonomy_vocabulary_1'] = array(
    'name' => 'view taxonomy_vocabulary_1',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view taxonomy_vocabulary_6'.
  $permissions['view taxonomy_vocabulary_6'] = array(
    'name' => 'view taxonomy_vocabulary_6',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view taxonomy_vocabulary_7'.
  $permissions['view taxonomy_vocabulary_7'] = array(
    'name' => 'view taxonomy_vocabulary_7',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view taxonomy_vocabulary_8'.
  $permissions['view taxonomy_vocabulary_8'] = array(
    'name' => 'view taxonomy_vocabulary_8',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
      'editor' => 'editor',
      'iati manager' => 'iati manager',
    ),
    'module' => 'system',
  );

  return $permissions;
}
