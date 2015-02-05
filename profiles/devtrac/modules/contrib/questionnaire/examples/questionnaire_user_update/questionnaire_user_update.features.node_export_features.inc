<?php
/**
 * @file
 * questionnaire_user_update.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function questionnaire_user_update_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'26\',
      \'uid\' => \'1\',
      \'title\' => \'Thank you. Your profile has been updated.\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'857ce9f4-1a07-4f7f-9015-e416f47e2129\',
      \'nid\' => \'26\',
      \'type\' => \'questionnaire_question\',
      \'language\' => \'und\',
      \'created\' => \'1416921259\',
      \'changed\' => \'1416921259\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'00b9e759-5852-4903-b144-16fa26daed46\',
      \'revision_timestamp\' => \'1416921259\',
      \'revision_uid\' => \'1\',
      \'questionnaire_question_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'message\',
          ),
        ),
      ),
      \'questionnaire_question_options\' => array(),
      \'qq_options_vocabulary\' => array(),
      \'qq_responsecount\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'name\' => \'Administrator\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'27\',
      \'uid\' => \'1\',
      \'title\' => \'Favourite colour questionnaire\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'996c0688-7176-47f3-80f4-48dad982eafb\',
      \'nid\' => \'27\',
      \'type\' => \'questionnaire\',
      \'language\' => \'und\',
      \'created\' => \'1416921259\',
      \'changed\' => \'1416921259\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f1c32475-a221-453e-9582-192fcbc00012\',
      \'revision_timestamp\' => \'1416921259\',
      \'revision_uid\' => \'1\',
      \'qstatus\' => \'In Preparation\',
      \'field_questionnaire_questions\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
            \'revision_id\' => \'1\',
          ),
          array(
            \'value\' => \'2\',
            \'revision_id\' => \'2\',
          ),
        ),
      ),
      \'name\' => \'Administrator\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'field_collection_item\',
          \'id\' => \'1\',
          \'delta\' => 0,
          \'property\' => \'value\',
          \'module\' => \'field_collection\',
          \'field_name\' => \'field_questionnaire_questions\',
          \'langcode\' => \'und\',
          \'uuid\' => \'7c7a432a-2a41-4f51-9c04-94157db0ca5d\',
        ),
        array(
          \'type\' => \'field_collection_item\',
          \'id\' => \'2\',
          \'delta\' => 1,
          \'property\' => \'value\',
          \'module\' => \'field_collection\',
          \'field_name\' => \'field_questionnaire_questions\',
          \'langcode\' => \'und\',
          \'uuid\' => \'0e8d16cf-a879-4ebd-b257-2ef78a87461f\',
        ),
      ),
    ),
  (object) array(
      \'vid\' => \'28\',
      \'uid\' => \'1\',
      \'title\' => \'What is your favourite colour?\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f9f72e42-ef55-454f-bf42-2953193d0dd2\',
      \'nid\' => \'28\',
      \'type\' => \'questionnaire_question\',
      \'language\' => \'und\',
      \'created\' => \'1416921259\',
      \'changed\' => \'1416921259\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'feaf634b-0da5-4703-8533-c3996b503ae9\',
      \'revision_timestamp\' => \'1416921259\',
      \'revision_uid\' => \'1\',
      \'questionnaire_question_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'select\',
          ),
        ),
      ),
      \'questionnaire_question_options\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Red\',
            \'format\' => NULL,
            \'safe_value\' => \'Red\',
          ),
          array(
            \'value\' => \'Orange\',
            \'format\' => NULL,
            \'safe_value\' => \'Orange\',
          ),
          array(
            \'value\' => \'Yellow\',
            \'format\' => NULL,
            \'safe_value\' => \'Yellow\',
          ),
          array(
            \'value\' => \'Green\',
            \'format\' => NULL,
            \'safe_value\' => \'Green\',
          ),
          array(
            \'value\' => \'Blue\',
            \'format\' => NULL,
            \'safe_value\' => \'Blue\',
          ),
          array(
            \'value\' => \'Violet\',
            \'format\' => NULL,
            \'safe_value\' => \'Violet\',
          ),
        ),
      ),
      \'qq_options_vocabulary\' => array(),
      \'qq_responsecount\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'name\' => \'Administrator\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
