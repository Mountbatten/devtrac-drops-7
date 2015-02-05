<?php
/**
 * @file
 * questionnaire_user_update.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function questionnaire_user_update_default_rules_configuration() {
  $items = array();
  $items['rules_update_user_favourite_colour'] = entity_import('rules_config', '{ "rules_update_user_favourite_colour" : {
      "LABEL" : "Update user favourite colour",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "questionnaire_answer" ],
      "ON" : [ "questionnaire_answer_presave" ],
      "IF" : [
        { "data_is" : {
            "data" : [ "questionnaire-answer:question:uuid" ],
            "value" : "feaf634b-0da5-4703-8533-c3996b503ae9"
          }
        },
        { "entity_is_of_type" : { "entity" : [ "questionnaire-answer:recipient" ], "type" : "user" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "questionnaire-answer:recipient:field-favourite-colour" ],
            "value" : [ "questionnaire-answer:answertext" ]
          }
        }
      ]
    }
  }');
  return $items;
}
