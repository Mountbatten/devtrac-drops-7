<?php

/**
 * @file
 * User pages for questionnaire campaign.
 */

/**
 * Menu callback - Questionnaire node campaign tab.
 */
function questionnaire_campaign_node_page($node) {
  return views_embed_view('questionnaire_campaigns', 'default', $node->nid);
}

/**
 * Form callback - Add a campaign to a questionnaire.
 */
function questionnaire_campaign_node_add($form, &$form_state, $node, $campaign = NULL) {
  if ($campaign) {
    if (! isset($form_state['storage']['step'])) {
      $step = $form_state['storage']['step'] = 4;
      $form['campaign'] = array(
        '#type' => 'value',
        '#value' => $campaign,
      );
      $form_state['values']['recipients']['userlist_provider'] = check_plain($campaign->userlist_provider);
      $form_state['values']['recipients']['userlist_id'] = check_plain($campaign->userlist_id);
      $form_state['values']['sending']['sending_handler'] = check_plain($campaign->sender);
      // @todo sending_handler options.
      $form_state['values']['settings']['title'] = check_plain($campaign->title);
      $form_state['values']['settings']['questionnaire_field'] = check_plain($campaign->questionnaire_field);
      $form_state['values']['settings']['enabled'] = $campaign->enabled;
    }
  }
  else {
    $step = $form_state['storage']['step'] = empty($form_state['storage']['step']) ? 1 : $form_state['storage']['step'];
  }

  // Allow plugins to do complicated things.
  $form['#tree'] = TRUE;

  $form['node'] = array(
    '#type' => 'value',
    '#value' => $node,
  );

  $form['description'] = array('#value' => t('Select who to send the campaign to; and what method to use to send the questions.'));

  $form['recipients'] = array(
    '#type' => 'fieldset',
    '#title' => t('Recipients'),
    '#description' => t('Where should the list of recipients come from.'),
  );
  $userlist_providers = questionnaire_campaign_get_userlist_provider();
  $form['recipients']['userlist_provider'] = array(
    '#type' => 'radios',
    '#title' => t('Select users with'),
    '#default_value' => isset($form_state['values']['recipients']['userlist_provider']) ? $form_state['values']['recipients']['userlist_provider'] : NULL,
    '#options' => $userlist_providers,
    '#description' => t('Which type of list of users do you want to use.'),
    '#required' => TRUE,
  );

  $handler = FALSE;
  if ($step > 1) {
    $handler = questionnaire_campaign_get_userlist_provider($form_state['values']['recipients']['userlist_provider']);
    if (empty($handler)) {
      // File, or module, moved since the provider was set. We don't even know
      // the human readable name of the provider.
      drupal_set_message(t('Missing handler for %provider', array('%provider' => $form_state['userlist_provider']), 'error'));
    }
  }
  if ($handler) {
    $form['recipients']['userlist_id'] = $handler->addForm('recipients][userlist_id', $form, $form_state);
  }

  if ($step > 2) {
    $form['sending'] = array(
      '#type' => 'fieldset',
      '#title' => t('Sending'),
      '#description' => t('How should the questionnaire be sent.'),
    );
    $sending_handlers = questionnaire_campaign_get_sending_handler();
    if (empty($sending_handlers)) {
      drupal_set_message(t('Missing sending handlers. You need to enable a module like Questionnaire SMS to send the questionnaire to your recipient.'), 'error');
    }
    else {
      $form['sending']['sending_handler'] = array(
        '#type' => 'radios',
        '#title' => t('Send with'),
        '#description' => t('How you would like the questionnaire sent.'),
        '#options' => $sending_handlers,
        '#default_value' => isset($form_state['values']['sending']['sending_handler']) ? $form_state['values']['sending']['sending_handler'] : NULL,
        '#required' => TRUE,
      );
    }
  }

  if ($step > 3) {
    $form['settings'] = array(
      '#type' => 'fieldset',
      '#title' => t('Settings'),
    );

    // @todo as the userlist_provider could possibly provide entity information
    // even bundle information possibly, this could be filtered by the
    // entity/bundle.
    // Alternatively/additionally it could be preset in an admin interface.
    $fields = questionnaire_field_get_instances();
    if (empty($fields)) {
      drupal_set_message(t('Missing questionnaire field. Attach one to you recipient.'), 'error');
    }
    else {
      $form['settings']['title'] = array(
        '#type' => 'textfield',
        '#title' => t('Name'),
        '#desciption' => t('Descriptive name for the campaign.'),
        '#size' => 60,
        '#maxlength' => 255,
        '#default_value' => isset($form_state['values']['settings']['title']) ? $form_state['values']['settings']['title'] : NULL,
      );
      $fields = array_combine(array_keys($fields), array_keys($fields));
      $form['settings']['questionnaire_field'] = array(
        '#type' => 'select',
        '#title' => t('Questionnaire field'),
        '#description' => t('Questionnaire field to store the record of participation in.'),
        '#options' => $fields,
        '#required' => TRUE,
        '#default_value' => isset($form_state['values']['settings']['questionnaire_field']) ? $form_state['values']['settings']['questionnaire_field'] : NULL,
      );
      $form['settings']['repeat_interval'] = array(
        '#type' => 'select',
        '#title' => t('Repeat'),
        '#description' => t('Time to repeat campaign. Depending on the user list provider, participants who have taken part in the campaign will be excluded from repeats.'),
        '#options' => array(
          '0' => t('Do not repeat'),
          '600' => t('Every 10 minutes'),
          '1200' => t('Every hour'),
        ),
      );
      $form['settings']['enabled'] = array(
        '#type' => 'checkbox',
        '#title' => t('Active'),
        '#description' => t('If this campaign is active'),
        '#default_value' => isset($form_state['values']['settings']['enabled']) ? $form_state['values']['settings']['enabled'] : NULL,
      );
    }
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => $step == 4 ? t('Submit') : t('Next'),
  );
  return $form;
}

function questionnaire_campaign_node_add_validate($form, &$form_state) {
  if ($form_state['storage']['step'] > 1) {
    $handler = questionnaire_campaign_get_userlist_provider($form_state['values']['recipients']['userlist_provider']);
    if (! $handler) {
      $form_state['storage']['step'] = 1;
    }
    else {
      $handler->addFormValidate('recipients][userlist_id', $form, $form_state);
    }
  }
  if ($form_state['storage']['step'] > 2) {
  }
}

function questionnaire_campaign_node_add_submit($form, &$form_state) {
  if ($form_state['values']['submit'] == t('Next')) {
    $form_state['storage']['step']++;
  }

  if ($form_state['values']['submit'] == t('Submit')) {
    $userlist_handler = questionnaire_campaign_get_userlist_provider($form_state['values']['recipients']['userlist_provider']);
    $userlist_handler->addFormSubmit('recipients][userlist_id', $form, $form_state);
    $sending_handler = questionnaire_campaign_get_sending_handler($form_state['values']['sending']['sending_handler']);
    $sending_handler->addFormSubmit('sending][sending_settings', $form, $form_state);

    $values = $form_state['values'];
    if (isset($values['campaign'])) {
      $campaign = $values['campaign'];
    }
    else {
      $campaign = entity_create('questionnaire_campaign', array());
    }
    $campaign->title = empty($values['settings']['title']) ? (string) $userlist_handler . ' : ' . (string) $sending_handler : $values['settings']['title'];
    $campaign->nid = $values['node']->nid;
    $campaign->userlist_provider = $values['recipients']['userlist_provider'];
    $campaign->userlist_id = $values['recipients']['userlist_id'];
    $campaign->sender = $values['sending']['sending_handler'];
    $campaign->enabled = $values['settings']['enabled'];
    $campaign->questionnaire_field = $values['settings']['questionnaire_field'];
    $campaign->repeat_interval = $values['settings']['repeat_interval'];
    $campaign->save();

    if ($values['settings']['enabled'] == TRUE) {
      $campaign->run();
    }
    $form_state['rebuild'] = FALSE;
  }
  else {
    $form_state['rebuild'] = TRUE;
  }
}

/**
 * Enable or disable a campaign.
 *
 * @param QuestionnaireCampign $campaign
 *   The campign entity that shall be enabled/disabled.
 * @param String $action
 *   The action to perform: enable/disable.
 */
function questionnaire_campaign_status_edit(QuestionnaireCampaign $campaign, $action = NULL) {

  if (empty($campaign)) {
    return MENU_NOT_FOUND;
  }
  if (empty($action)) {
    return MENU_NOT_FOUND;
  }

  $url = isset($_SERVER['HTTP_REFERER'])? $_SERVER['HTTP_REFERER'] : 'questionnaire/all-campaigns';
  if ($action == 'enable') {
    $campaign->enabled = TRUE;
    try {
      $campaign->save();
      drupal_set_message(t('The campaign was successfully enabled.'));
    }
    catch (PDOException $e) {
      drupal_set_message(t('The campaign could not be enabled.'), 'error');
    }
    drupal_goto($url);
  }
  elseif ($action == 'disable') {
    $confirm_form = drupal_get_form('questionnaire_campaign_disable_form', $campaign, $url);
    if ($confirm_form) {
      return $confirm_form;
    }
  }
  else {
    // Undefined action.
    return MENU_NOT_FOUND;
  }
}

/**
 * Form builder for confirming the enable/disable of a questionnaire campaign.
 *
 * @param QuestionnaireCampign $campaign
 *   The campign entity that shall be disabled
 *
 * @see questionnaire_campaign_disable_form_submit()
 * @ingroup forms
 */
function questionnaire_campaign_disable_form(array $form, array &$form_state, QuestionnaireCampaign $campaign, $url) {
  $form_state['campaign'] = $campaign;
  return confirm_form($form, t('Do you really want to disable this campaign?'), $url, t('This will disable a campaign.'));
}

/**
 * Submission handler for questionnaire_campaign_disable_form().
 *
 * @see questionnaire_campaign_disable_form()
 */
function questionnaire_campaign_disable_form_submit(array $form, array &$form_state) {
  $campaign = $form_state['campaign'];
  $campaign->enabled = FALSE;
  try {
      $campaign->save();
      drupal_set_message(t('The campaign was successfully disabled.'));
    }
    catch (PDOException $e) {
      drupal_set_message(t('The campaign could not be disabled.'), 'error');
    }
//  drupal_goto('questionnaire/all-campaigns');
}
