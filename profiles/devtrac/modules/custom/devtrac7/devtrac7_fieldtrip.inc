<?php

/**
 * This function checks if at least one Place is set on the Field Trip.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_fieldtrip_promstaidset($node) {
  if (!empty($node->field_fieldtrip_internal_id) && isset($node->field_fieldtrip_internal_id[$node->language])) {
    return (count($node->field_fieldtrip_internal_id[$node->language]) > 0);
  }
  return FALSE;
}

/**
 * This function checks if the Districts on the Fieldtrip are set.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_fieldtrip_districtsset($node) {
  if (!empty($node->taxonomy_vocabulary_6) && isset($node->taxonomy_vocabulary_6[$node->language])) {
    return (count($node->taxonomy_vocabulary_6[$node->language]) > 0);
  }
  return FALSE;
}

/**
 * This function checks if the Public Summary on the Fieldtrip is set.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 * 
 * Is actually obsolete because the field is not going to be used anymore.
 */
function devtrac7_fieldtrip_summaryset($node) {
  // Field was discarded on devtrac7.
/*
  if (!empty($node->field_fieldtrip_public_summary)) {
    return (isset($node->field_fieldtrip_public_summary[$node->language]) &&
           (count($node->field_fieldtrip_public_summary[$node->language]) > 0) &&
           (!empty($node->field_fieldtrip_public_summary[$node->language][0]['value'])));
  }
  return FALSE;
 */
  return TRUE;
}

/**
 * This function checks if the Narrative on the Fieldtrip is set.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 * 
 * Is actually obsolete because the field is not going to be used anymore.
 */
function devtrac7_fieldtrip_narrativeset($node) {
  // Field was discarded on devtrac7.
/*
  if (!empty($node->field_fieldtrip_narrative)) {
    return (isset($node->field_fieldtrip_narrative[$node->language]) &&
           (count($node->field_fieldtrip_narrative[$node->language]) > 0) &&
           (!empty($node->field_fieldtrip_narrative[$node->language][0]['value'])));
  }
  return FALSE;
 */
  return TRUE;
}

/**
 * This function checks if at least one Place is set on the Field Trip.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_fieldtrip_placesset($node) {
  if (!empty($node->field_fieldtrip_places) && isset($node->field_fieldtrip_places[$node->language])) {
    return (count($node->field_fieldtrip_places[$node->language]) > 0);
  }
  return FALSE;
}

function devtrac7_fieldtrip_places_required($node) {
  if (!empty($node->field_fieldtrip_places) && isset($node->field_fieldtrip_places[$node->language])) {
    return (count($node->field_fieldtrip_places[$node->language]) == 0);
  }
  return TRUE;
}

/**
 *
 * Function that determines access to the 'Add Site Visit' quick menu item.
 * Inherits from the one used by the modal form.
 *
 * @param $node
 * @return bool
 */
function devtrac7_fieldtrip_places_override($node) {
  return devtrac7_update_fieldtrip_access($node->nid);
}

/**
 * This function checks if User is set on the Field Trip.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 * 
 * Is actually obsolete because the field is not going to be used anymore.
 */
function devtrac7_fieldtrip_userset($node) {
  if (!empty($node->field_fieldtrip_user) && isset($node->field_fieldtrip_user[$node->language])) {
    return (count($node->field_fieldtrip_user[$node->language]) > 0);
  }
  return FALSE;
}

/**
 * This function checks if the Status is set on the Field Trip.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_fieldtrip_statusset($node) {
  if (!empty($node->field_fieldtrip_status) && isset($node->field_fieldtrip_status[$node->language])) {
    return (count($node->field_fieldtrip_status[$node->language]) > 0);
  }
  return FALSE;
}

/**
 * Checks on the percentages on the Purpose(s) of the Field Trip
 * and makes sure it adds up to 100%.
 */
function devtrac7_fieldtrip_percentagesset($node) {
  if (!empty($node->field_fieldtrip_fc_purpose) && isset($node->field_fieldtrip_fc_purpose[$node->language])) {
    // If the sum of the percentages <> 100 fail
    if (devtrac7_fieldtrip_percentagessum($node) <> 100) {
//      watchdog('admin_feature', 'The sum of the percentages does NOT equal 100.');
//      drupal_set_message('The sum of the percentages does NOT equal 100.', 'error');
      return FALSE;
//    watchdog('admin_feature', 'Cool beans, the sum of the percentages equals 100.');
    }
    // If the sum of the percentages == 100 success
    return TRUE;
  }
  // There are no percentages set
  return FALSE;
}

function devtrac7_fieldtrip_percentagessum($node) {
  $sum = 0;
  $purposes = $node->field_fieldtrip_fc_purpose[$node->language];
  // Now go over them and calculate the sum of the percentages
  foreach ($purposes as $delta => $value) {
    $purpose = entity_load('field_collection_item', array($value['value']));
    $percentages = $purpose[$value['value']]->field_fieldtrip_purpose_percent[LANGUAGE_NONE];
    foreach ($percentages as $delta => $percentage) {
      $sum += $percentage['value'];
    }
  }
  return $sum;
}

/**
 * This function checks if both the Start and End Date on the Fieldtrip are set,
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_fieldtrip_datesset($node) {
  if (!empty($node->field_fieldtrip_start_end_date) && isset($node->field_fieldtrip_start_end_date[$node->language])) {
    if (count($node->field_fieldtrip_start_end_date[$node->language]) > 0) {
      if ((!empty($node->field_fieldtrip_start_end_date[$node->language][0]['value']))
          && (!empty($node->field_fieldtrip_start_end_date[$node->language][0]['value2']))) {
        // Both the Start and End Dates are set.
        return TRUE;
      }
      // Either the Start or End Date is NOT set.
    }
    // Both Start and End Date are NOT set.
    return FALSE;
  }
  return FALSE;
}

/**
 * This function checks if the Approved By field is set on the Field Trip.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_fieldtrip_approvedbyset($node) {
  if (!empty($node->field_fieldtrip_approved_by) && isset($node->field_fieldtrip_approved_by[$node->language])) {
    return (count($node->field_fieldtrip_approved_by[$node->language]) > 0);
  }
  return FALSE;
}

/**
 * This function checks if the Approval Date is set on the Field Trip.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_fieldtrip_approvaldateset($node) {
  if (!empty($node->field_fieldtrip_approval_date) && isset($node->field_fieldtrip_approval_date[$node->language])) {
    return (count($node->field_fieldtrip_approval_date[$node->language]) > 0);
  }
  return FALSE;
}

/**
 * This function checks if the Contextual links on the Fieldtrip are set,
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_fieldtrip_buttonset($node) {
  if (!empty($node->field_fieldtrip_button) && isset($node->field_fieldtrip_button[$node->language])) {
    return (count($node->field_fieldtrip_button[$node->language]) > 0);
  }
  return FALSE;
}

/**
 * This function checks if the Progress Bar on the Fieldtrip is set,
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_fieldtrip_progressbarset($node) {
  if (!empty($node->field_progress_bar) && isset($node->field_progress_bar[$node->language])) {
    return (count($node->field_progress_bar[$node->language]) > 0);
  }
  return FALSE;
}

/**
 * This function checks if the Progress Links on the Fieldtrip are set.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_fieldtrip_progresslinksset($node) {
  if (!empty($node->field_progress_links) && isset($node->field_progress_links[$node->language])) {
    return (!empty($node->field_progress_links[$node->language]));
  }
  return FALSE;
}

/**
 * This function checks if the Fieldtrip is ready to be submitted,
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_fieldtrip_submittable($node) {
  if (!empty($node->field_fieldtrip_status) && isset($node->field_fieldtrip_status[$node->language]) && !empty($node->field_fieldtrip_user) && isset($node->field_fieldtrip_user[$node->language])) {
    global $user;
    return (($node->uid == $user->uid) && ($user->uid == $node->field_fieldtrip_user[$node->language][0]['target_id']) && ($node->field_fieldtrip_status[$node->language][0]['value'] == 'In Progress') && node_access('update', $node));
  }
  return TRUE;
}

/**
 * This function checks if the Fieldtrip is ready to be rejected,
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_fieldtrip_rejectable($node) {
  if (!empty($node->field_fieldtrip_status) && isset($node->field_fieldtrip_status[$node->language]) && !empty($node->field_fieldtrip_user) && isset($node->field_fieldtrip_user[$node->language])) {
    global $user;
    $localuser = user_load($node->field_fieldtrip_user[$node->language][0]['target_id']);
    if (isset($localuser->field_user_superior[$localuser->language]) && (count($localuser->field_user_superior[$localuser->language]) > 0)) {
      return (($node->uid == $localuser->uid) && ($user->uid == $localuser->field_user_superior[$localuser->language][0]['target_id']) && ($node->field_fieldtrip_status[$node->language][0]['value'] == 'Submitted') && node_access('update', $node));
    }
    else { // User does not have a manager. So allow your own managing.
      return (($node->uid == $localuser->uid) && ($node->field_fieldtrip_status[$node->language][0]['value'] == 'Submitted') && node_access('update', $node));
    }
  }
  return TRUE;
}

/**
 * This function checks if the Fieldtrip is ready to be approved,
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_fieldtrip_approvable($node) {
  if (!empty($node->field_fieldtrip_status) && isset($node->field_fieldtrip_status[$node->language]) && !empty($node->field_fieldtrip_user) && isset($node->field_fieldtrip_user[$node->language])) {
    global $user;
    $localuser = user_load($node->field_fieldtrip_user[$node->language][0]['target_id']);
    if (isset($localuser->field_user_superior[$localuser->language]) && (count($localuser->field_user_superior[$localuser->language]) > 0)) {
      return (($node->uid == $localuser->uid) && ($user->uid == $localuser->field_user_superior[$localuser->language][0]['target_id']) && ($node->field_fieldtrip_status[$node->language][0]['value'] == 'Submitted') && node_access('update', $node));
    }
    else { // User does not have a manager. So allow user to do all managing.
      return (($node->uid == $localuser->uid) && ($node->field_fieldtrip_status[$node->language][0]['value'] == 'Submitted') && node_access('update', $node));
    }
  }
  return TRUE;
}

/*
function devtrac7_fieldtrip_finished($node) {
  $result = devtrac7_fieldtrip_narrativeset($node);
  $result = $result && devtrac7_fieldtrip_placesset($node);
  $result = $result && devtrac7_fieldtrip_percentagesset($node);
  if (!$result) {
    return $result;
  }
  $query = db_select('node', 'n');
  $query->join('field_data_field_ftritem_field_trip', 'fff', 'n.nid = fff.field_ftritem_field_trip_target_id');
  $query->fields('fff', array('entity_id'))
    ->condition('n.status', 1, '=')
    ->condition('fff.field_ftritem_field_trip_target_id', $node->nid, '=');
  $sitereportids = $query->execute();
  foreach ($sitereportids as $sitereportid) {
    $sitereport = node_load($sitereportid->entity_id);
    module_load_include('inc', 'devtrac7', 'devtrac7_ftritem');
    $result = $result && devtrac7_ftritem_finished($sitereport);
    if (!$result) {
      break;
    }
  }
  return $result;
}
 */

/**
 * Define all progress checks provided by the module.
 *
 * @return array
 *   An associative array keyed by unique name of the field. Each check is an
 *   associative array containing:
 *   - name: The internal name of the progress check.
 *   - label: The human readable name of the progress check.
 *   - description: The description of the progress check.
 *   - url: An associative array that describes when and how a link should
 *     be rendered to allow the user to correct the check.
 *   - success_text: The text to display when the check succeeds.
 *   - fail_text: The text to display when the check fails.
 *   - function: The function that actually performs the progress check.
 *   - file_name: The file where that function is implemented.
 *   - required: Boolean determining whether the progress check is required
 *     or not. Is overridden by required_function.
 *   - required_function: Function determining whether the progress check is
 *     required or not. Overrides required.
 */
function devtrac7_fieldtrip_devtrac7_progress_field_checks_info() {
  $destination = current_path();
  $query = drupal_http_build_query(drupal_get_query_parameters());
  if ($query != '') {
    $destination .= '?' . $query;
  }
//  $approve_dest = $destination . '&method=approve';
//  $reject_dest = $destination . '&method=reject';
  $progress_checks['devtrac7_fieldtrip_approvable'] = array(
    'name' => t('devtrac7_fieldtrip_approvable'),
    'label' => t('devtrac7_fieldtrip_approvable'),
    'description' => 'Approve the Field Trip for publishing',
    'finished_condition' => 'required',
    'url' => array(
      'text' => t('Approve'),
//      'path' => 'node/%/setstatus/approve',
      'path' => 'node/%/approve/fieldtripcommentform/ajax/%ctools_js/go',
//      'path' => 'comment/reply/%',
      'attributes' => array(),
      'query' => array(
//        'destination' => $approve_dest,
        'destination' => $destination,
      ),
      'fragment' => '',
      'contextual' => TRUE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'Approved and published.',
    'fail_text' => 'Failed to approve.',
    'function' => 'devtrac7_fieldtrip_approvable',
    'filename' => 'devtrac7_fieldtrip.inc',
    'required' => TRUE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_fieldtrip_rejectable'] = array(
    'name' => t('devtrac7_fieldtrip_rejectable'),
    'label' => t('devtrac7_fieldtrip_rejectable'),
    'description' => 'Reject the Field Trip',
    'finished_condition' => 'required',
    'url' => array(
      'text' => t('Reject'),
//      'path' => 'node/%/setstatus/reject',
      'path' => 'node/%/reject/fieldtripcommentform/ajax/%ctools_js/go',
//      'path' => 'comment/reply/%',
      'attributes' => array(),
      'query' => array(
//        'destination' => $reject_dest,
        'destination' => $destination,
      ),
      'fragment' => '',
      'contextual' => TRUE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'Rejected and send back to the author.',
    'fail_text' => 'Failed to reject.',
    'function' => 'devtrac7_fieldtrip_rejectable',
    'filename' => 'devtrac7_fieldtrip.inc',
    'required' => TRUE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_fieldtrip_submittable'] = array(
    'name' => t('devtrac7_fieldtrip_submittable'),
    'label' => t('devtrac7_fieldtrip_submittable'),
    'description' => 'Submit the Field Trip to the manager',
    'finished_condition' => 'required',
    'url' => array(
      'text' => t('Submit'),
      'path' => 'node/%/setstatus/submit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => '',
      'contextual' => TRUE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'Submitted to manager.',
    'fail_text' => 'Failed to submit.',
    'function' => 'devtrac7_fieldtrip_submittable',
    'filename' => 'devtrac7_fieldtrip.inc',
    'required' => TRUE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_fieldtrip_approvaldateset'] = array(
    'name' => t('devtrac7_fieldtrip_approvaldateset'),
    'label' => t('devtrac7_fieldtrip_approvaldateset'),
    'description' => 'Change the Approval Date of the Field Trip.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Approval date'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'edit-field-fieldtrip-approval-date',
      'contextual' => FALSE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'Approval date is given.',
    'fail_text' => 'You have to provide the Approval Date.',
    'function' => 'devtrac7_fieldtrip_approvaldateset',
    'filename' => 'devtrac7_fieldtrip.inc',
    'required' => FALSE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_fieldtrip_approvedbyset'] = array(
    'name' => t('devtrac7_fieldtrip_approvedbyset'),
    'label' => t('devtrac7_fieldtrip_approvedbyset'),
    'description' => 'Change the person who approved the Field Trip.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Approved By'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'edit-field-fieldtrip-approved-by',
      'contextual' => FALSE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'Approved by is given.',
    'fail_text' => 'You have to provide the person who approved the fieldtrip.',
    'function' => 'devtrac7_fieldtrip_approvedbyset',
    'filename' => 'devtrac7_fieldtrip.inc',
    'required' => FALSE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_fieldtrip_datesset'] = array(
    'name' => t('devtrac7_fieldtrip_datesset'),
    'label' => t('devtrac7_fieldtrip_datesset'),
    'description' => 'Change the start and end dates for the Field Trip.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Dates'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'edit-field-fieldtrip-start-end-date',
      'contextual' => TRUE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'Start and end dates are given.',
    'fail_text' => 'You have to provide both the start and end date of the fieldtrip.',
    'function' => 'devtrac7_fieldtrip_datesset',
    'filename' => 'devtrac7_fieldtrip.inc',
    'required' => TRUE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_fieldtrip_percentagesset'] = array(
    'name' => t('devtrac7_fieldtrip_percentagesset'),
    'label' => t('devtrac7_fieldtrip_percentagesset'),
    'description' => 'Change the purposes of the Field Trip and make sure the sum of the percentages equals 100%.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Purposes'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'edit-field-fieldtrip-fc-purpose',
      'contextual' => TRUE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'The percentages add up to 100%.',
    'fail_text' => 'You have to make sure the percentages add up to 100%.',
    'function' => 'devtrac7_fieldtrip_percentagesset',
    'filename' => 'devtrac7_fieldtrip.inc',
    'required' => TRUE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_fieldtrip_statusset'] = array(
    'name' => t('devtrac7_fieldtrip_statusset'),
    'label' => t('devtrac7_fieldtrip_statusset'),
    'description' => 'Change the status for the Field Trip.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Status'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'field-fieldtrip-status',
      'contextual' => FALSE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'The status is given.',
    'fail_text' => 'You have to provide the status.',
    'function' => 'devtrac7_fieldtrip_statusset',
    'filename' => 'devtrac7_fieldtrip.inc',
    'required' => TRUE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_fieldtrip_userset'] = array(
    'name' => t('devtrac7_fieldtrip_userset'),
    'label' => t('devtrac7_fieldtrip_userset'),
    'description' => 'Change the user for the Field Trip.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit User'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'field-fieldtrip-user',
      'contextual' => TRUE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'The user is given.',
    'fail_text' => 'You have to provide the user.',
    'function' => 'devtrac7_fieldtrip_userset',
    'filename' => 'devtrac7_fieldtrip.inc',
    'required' => TRUE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_fieldtrip_placesset'] = array(
    'name' => t('devtrac7_fieldtrip_placesset'),
    'label' => t('devtrac7_fieldtrip_placesset'),
    'description' => 'Add a Site Report to the Field Trip.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Add Site Report'),
      'path' => 'node/%/addplaceform/ajax/%ctools_js/go',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => '',
      'contextual' => TRUE,
      'override' => TRUE,
      'override_function' => 'devtrac7_fieldtrip_places_override',
    ),
    'success_text' => 'At least one site report is available.',
    'fail_text' => 'You have to add at least one site report.',
    'function' => 'devtrac7_fieldtrip_placesset',
    'filename' => 'devtrac7_fieldtrip.inc',
    'required' => TRUE,
//    'required_function' => '',
    'required_function' => 'devtrac7_fieldtrip_places_required',
  );
/*
  $progress_checks['devtrac7_fieldtrip_narrativeset'] = array(
    'name' => t('devtrac7_fieldtrip_narrativeset'),
    'label' => t('devtrac7_fieldtrip_narrativeset'),
    'description' => 'Change the narrative for the Field Trip.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Narrative'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'field-fieldtrip-narrative',
      'contextual' => TRUE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'The narrative is given.',
    'fail_text' => 'You have to provide a meaningful narrative.',
    'function' => 'devtrac7_fieldtrip_narrativeset',
    'filename' => 'devtrac7_fieldtrip.inc',
    'required' => TRUE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_fieldtrip_summaryset'] = array(
    'name' => t('devtrac7_fieldtrip_summaryset'),
    'label' => t('devtrac7_fieldtrip_summaryset'),
    'description' => 'Change the public summary for the Field Trip.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Summary'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'field-fieldtrip-public-summary',
      'contextual' => TRUE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'The public summary is given.',
    'fail_text' => 'You have to provide a meaningful public summary.',
    'function' => 'devtrac7_fieldtrip_summaryset',
    'filename' => 'devtrac7_fieldtrip.inc',
    'required' => TRUE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_fieldtrip_districtsset'] = array(
    'name' => t('devtrac7_fieldtrip_districtsset'),
    'label' => t('devtrac7_fieldtrip_districtsset'),
    'description' => 'Change at least one district for the Field Trip.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Districts'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'taxonomy-vocabulary-6',
      'contextual' => TRUE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'The Districts are given.',
    'fail_text' => 'You have to provide at least one District.',
    'function' => 'devtrac7_fieldtrip_districtsset',
    'filename' => 'devtrac7_fieldtrip.inc',
    'required' => TRUE,
    'required_function' => '',
  );
 */
  $progress_checks['devtrac7_fieldtrip_promstaidset'] = array(
    'name' => t('devtrac7_fieldtrip_promstaidset'),
    'label' => t('devtrac7_fieldtrip_promstaidset'),
    'description' => 'Change the Proms TA ID for the Field Trip.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Proms TA ID'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'field-fieldtrip-proms-ta-id',
      'contextual' => FALSE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'The Proms TA ID is given.',
    'fail_text' => 'You have to provide the Proms TA ID.',
    'function' => 'devtrac7_fieldtrip_promstaidset',
    'filename' => 'devtrac7_fieldtrip.inc',
    'required' => FALSE,
    'required_function' => '',
  );
/*
  $progress_checks['devtrac7_fieldtrip_buttonset'] = array(
    'name' => t('devtrac7_fieldtrip_buttonset'),
    'label' => t('devtrac7_fieldtrip_buttonset'),
    'description' => 'Change the contextual links.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Links'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'edit-field-fieldtrip-button',
      'contextual' => FALSE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => '',
    'fail_text' => '',
    'function' => 'devtrac7_fieldtrip_buttonset',
    'filename' => 'devtrac7_fieldtrip.inc',
    'required' => FALSE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_fieldtrip_progressbarset'] = array(
    'name' => t('devtrac7_fieldtrip_progressbarset'),
    'label' => t('devtrac7_fieldtrip_progressbarset'),
    'description' => 'Change the progress bar.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Bar'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'edit-field-progress-bar',
      'contextual' => FALSE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => '',
    'fail_text' => '',
    'function' => 'devtrac7_fieldtrip_progressbarset',
    'filename' => 'devtrac7_fieldtrip.inc',
    'required' => FALSE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_fieldtrip_progresslinksset'] = array(
    'name' => t('devtrac7_fieldtrip_progresslinksset'),
    'label' => t('devtrac7_fieldtrip_progresslinksset'),
    'description' => 'Change the progress list.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit List'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'edit-field-progress-links',
      'contextual' => FALSE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => '',
    'fail_text' => '',
    'function' => 'devtrac7_fieldtrip_progresslinksset',
    'filename' => 'devtrac7_fieldtrip.inc',
    'required' => FALSE,
    'required_function' => '',
  );
 */
  $progress_checks['referencing_fields'] = array('field_ftritem_field_trip');
  return $progress_checks;
}
