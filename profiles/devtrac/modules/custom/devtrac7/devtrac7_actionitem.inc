<?php

/**
 * This function checks if the District on the Action Item is set.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_actionitem_districtset($node) {
  if (!empty($node->taxonomy_vocabulary_6) && isset($node->taxonomy_vocabulary_6[$node->language])) {
    return (count($node->taxonomy_vocabulary_6[$node->language]) > 0);
  }
  return FALSE;
}

/**
 * This function checks if the Sectors on the Action Item are set.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_actionitem_oecdcodesset($node) {
  if (!empty($node->taxonomy_vocabulary_8) && isset($node->taxonomy_vocabulary_8[$node->language])) {
    return (count($node->taxonomy_vocabulary_8[$node->language]) > 0);
  }
  return FALSE;
}

/**
 * This function checks if the Status on the Action Item is set.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_actionitem_statusset($node) {
  if (!empty($node->field_actionitem_status) && isset($node->field_actionitem_status[$node->language])) {
    return (count($node->field_actionitem_status[$node->language]) > 0);
  }
  return FALSE;
}

/**
 * This function checks if the Priority on the Action Item is set.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_actionitem_priorityset($node) {
  if (!empty($node->field_actionitem_severity) && isset($node->field_actionitem_severity[$node->language])) {
    return (count($node->field_actionitem_severity[$node->language]) > 0);
  }
  return FALSE;
}

/**
 * This function checks if the Due Date on the Action Item is set.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_actionitem_duedateset($node) {
  if (!empty($node->field_actionitem_due_date) && isset($node->field_actionitem_due_date[$node->language])) {
return TRUE;
    return (count($node->field_actionitem_due_date[$node->language]) > 0);
  }
return TRUE;
  return FALSE;
}

/**
 * This function checks if the Responsible Persons on the Action Item is set.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_actionitem_responsibleset($node) {
  if (!empty($node->field_actionitem_responsible) && isset($node->field_actionitem_responsible[$node->language])) {
    return (count($node->field_actionitem_responsible[$node->language]) > 0);
  }
  return FALSE;
}

/**
 * This function checks if the Follow-up Task on the Action Item is set.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_actionitem_followuptaskset($node) {
  if (!empty($node->field_actionitem_followuptask) && isset($node->field_actionitem_followuptask[$node->language])) {
    return (count($node->field_actionitem_followuptask[$node->language]) > 0);
  }
  return FALSE;
}

/**
 * This function checks if the Responsible Place on the Action Item is set.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_actionitem_respplaceset($node) {
  if (!empty($node->field_actionitem_resp_place) && isset($node->field_actionitem_resp_place[$node->language])) {
    return (count($node->field_actionitem_resp_place[$node->language]) > 0);
  }
  return FALSE;
}

/**
 * This function checks if the Report on the Action Item is set.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_actionitem_reportset($node) {
  if (!empty($node->field_actionitem_ftreportitem) && isset($node->field_actionitem_ftreportitem[$node->language])) {
    return (count($node->field_actionitem_ftreportitem[$node->language]) > 0);
  }
  return FALSE;
}

/**
 * This function checks if the Contextual Links on the Action Item are set.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_actionitem_buttonset($node) {
  if (!empty($node->field_fieldtrip_button) && isset($node->field_fieldtrip_button[$node->language])) {
    return (!empty($node->field_fieldtrip_button[$node->language]));
  }
  return FALSE;
}

/**
 * This function checks if the Progress Bar on the Action Item is set.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_actionitem_progressbarset($node) {
  if (!empty($node->field_progress_bar) && isset($node->field_progress_bar[$node->language])) {
    return (!empty($node->field_progress_bar[$node->language]));
  }
  return FALSE;
}

/**
 * This function checks if the Progress Links on the Action Item are set.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_actionitem_progresslinksset($node) {
  if (!empty($node->field_progress_links) && isset($node->field_progress_links[$node->language])) {
    return (!empty($node->field_progress_links[$node->language]));
  }
  return FALSE;
}

/*
 * This function inserts the District from the responsible place in the actionitem for performance reasons
*/
function devtrac7_actionitem_updatedistrict($node) {
  // Only copy District from Place when there is no District filled in on the Action Item
  // If the Action Item has a District already, it is
  // A. Already copied from the Place
  // B. A correction to the Place as it is stored in the database
  // C. A user error (and that is why we enabled versioning in Drupal 7)
  if (isset($node->original->taxonomy_vocabulary_6[$node->language]) && (count($node->original->taxonomy_vocabulary_6[$node->language]) > 0)) {
    // There was a District
    if (isset($node->taxonomy_vocabulary_6[$node->language]) && (count($node->taxonomy_vocabulary_6[$node->language]) > 0)) {
      // There still is a District
      if ($node->original->taxonomy_vocabulary_6[$node->language][0]['tid'] == $node->taxonomy_vocabulary_6[$node->language][0]['tid']) {
        // It did not change so do nothing
        watchdog('admin_feature', 'District did not change on Action Item: ' . $node->nid);
        return FALSE;
      }
      // It changed so save it
      watchdog('admin_feature', 'Changed District on Action Item: ' . $node->nid);
      // drupal_set_message('Changed District on the Action Item.', 'status');
      return TRUE;
    }
    // There is no District anymore
    watchdog('admin_feature', 'Attempt to delete District on Action Item: ' . $node->nid);
    drupal_set_message('Please set a District on the Action Item.', 'error');
    return FALSE;
  }
  // There was no District
  if (isset($node->taxonomy_vocabulary_6[$node->language]) && (count($node->taxonomy_vocabulary_6[$node->language]) > 0)) {
    // There is a District now so save it
    watchdog('admin_feature', 'Set District on Action Item: ' . $node->nid);
    // drupal_set_message('Set District on the Action Item.', 'status');
    return TRUE;
  }
  // There still is no District
  if (isset($node->field_actionitem_resp_place[$node->language]) && (count($node->field_actionitem_resp_place[$node->language]) > 0)) {
    // There is a place attached so copy it
    $place = node_load($node->field_actionitem_resp_place[$node->language][0]['target_id']);
    $node->taxonomy_vocabulary_6 = $place->taxonomy_vocabulary_6;
    if (isset($node->nid)) {
      watchdog('admin_feature', 'Copied District on Action Item: ' . $node->nid);
    }
    else {
      watchdog('admin_feature', 'Copied District on new Action Item');
    }
    // drupal_set_message('Copied District on the Action Item.', 'status');
    return TRUE;
  }
  // There is no place attached
  watchdog('admin_feature', 'Location needs to be attached to Action Item: ' . $node->nid);
  drupal_set_message('Please attach a Location to the Action Item.', 'error');
  return FALSE;
}

/*
 * This function reacts on an update of the Subjets and propagates this to the Site Report
*/
function devtrac7_actionitem_updateoecdcodes($node) {
  // Only add additional Sectors from the Action Item to the Site Report
  // If the has some Sectors already, we don't want to remove them because they were
  // A. Already copied from another Action Item
  // B. A correction to the Sectors on the Site Report that should never be overwritten
  // C. A user error (and that is why we enabled versioning in Drupal 7)
  if (isset($node->taxonomy_vocabulary_8[$node->language]) && (count($node->taxonomy_vocabulary_8[$node->language]) > 0)) {
    // There are Sectors
    $oldoecdcodes = array();
    $oldcodes = array();
    if ((isset($node->original->taxonomy_vocabulary_8[$node->language])) && (count($node->original->taxonomy_vocabulary_8[$node->language]) > 0)) {
      $oldcodes = $node->original->taxonomy_vocabulary_8[$node->language];
      foreach ($oldcodes as $oldcode) {
        $oldoecdcodes[$oldcode['tid']] = $oldcode['tid'];
      }
    }
    $newoecdcodes = array();
    $newcodes = array();
    if ((isset($node->taxonomy_vocabulary_8[$node->language])) && (count($node->taxonomy_vocabulary_8[$node->language]) > 0)) {
      $newcodes = $node->taxonomy_vocabulary_8[$node->language];
      foreach ($newcodes as $newcode) {
        $newoecdcodes[$newcode['tid']] = $newcode['tid'];
      }
    }
    if ($oldoecdcodes == $newoecdcodes) {
      // They did not change so do nothing
      watchdog('admin_feature', 'Sectors did not change on Action Item: ' . $node->nid);
      return FALSE;
    }
    // They changed so save them
    $additions = array_diff($newoecdcodes, $oldoecdcodes);
    if (count($additions) > 0) {
      // New Sectors were added so also add them to the Site Report
      // Load the Site Report
      $ftritem = FALSE;
      if (isset($node->language) && isset($node->field_actionitem_ftreportitem[$node->language][0]['target_id'])){
        $ftritem = node_load($node->field_actionitem_ftreportitem[$node->language][0]['target_id']);
      }
      if ($ftritem != FALSE) {
        if (isset($node->field_actionitem_ftreportitem[$node->language]) && (count($node->field_actionitem_ftreportitem[$node->language]) > 0)) {
          // Put the Site Report's Sectors in a temp array keyed by the tid of the Sectors
          $reportcodes = array();
          if ((isset($ftritem->taxonomy_vocabulary_8[$ftritem->language])) && (count($ftritem->taxonomy_vocabulary_8[$ftritem->language]) > 0)) {
            $codes = $ftritem->taxonomy_vocabulary_8[$ftritem->language];
            foreach ($codes as $code) {
              if (($code['tid'] != NULL) && is_numeric($code['tid'])) {
                $reportcodes[$code['tid']]['tid'] = $code['tid'];
              }
            }
          }
        }
        // Now populate the Sectors on the Site Report while rekeying them
        // Add the Action Item's added Sectors to the temp array
        foreach ($additions as $addition) {
          // We override existing Sectors to avoid getting duplicates
          $reportcodes[$addition]['tid'] = $addition;
        }
        if (isset($ftritem->taxonomy_vocabulary_8[$ftritem->language]) && (count($ftritem->taxonomy_vocabulary_8[$ftritem->language]) > 0)) {
          if (count($reportcodes) > 0) {
            $ftritem->taxonomy_vocabulary_8[$ftritem->language] = array_values($reportcodes);
            // Save the changes
            node_save($ftritem);
            watchdog('admin_feature', 'Added Sectors to Site Report: ' . $ftritem->nid);
            // drupal_set_message('Sectors added to Site Report: ' . $ftritem->nid, 'status');
          }
        }
      }
      else {
        if (isset($ftritem->nid)) {
          watchdog('admin_feature', 'Site report referred to does not exist: ' . $ftritem->nid);
          drupal_set_message('Site Report referred to does not exist.' . $ftritem->nid, 'status');
        }
        else {
          watchdog('admin_feature', 'Site report referred to does not exist.');
          drupal_set_message('Site Report referred to does not exist.', 'status');
        }
      }
    }
    watchdog('admin_feature', 'Changed Sectors on Action Item: ' . $node->nid);
    // drupal_set_message('Changed Sectors on Action Item: ' . $node->nid, 'status');
    return TRUE;
  }
  // There are no Sectors
  watchdog('admin_feature', 'Attempt to delete all Sectors on Action item: ' . $node->nid);
  drupal_set_message('Please provide the Sectors for Action item:' . $node->nid, 'error');
  return FALSE;
}

/*
 * This function inserts the author in the list of responsible persons if that happens to be empty
 */
function devtrac7_actionitem_updateresponsible($node) {
  // Add the author to the list of responsible persons if that list is empty
  if (isset($node->field_actionitem_responsible[$node->language]) && (count($node->field_actionitem_responsible[$node->language]) > 0)) {
    // There is at least one responsible person, so do nothing
    if (isset($node->nid)) {
      watchdog('admin_feature', 'There is a person responsible for the Action Item: ' . $node->nid);
    }
    else {
      watchdog('admin_feature', 'There is a person responsible for new Action Item.');
    }
    return FALSE;
  }
  // No person responsible so add the author
  $node->field_actionitem_responsible[$node->language][0]['target_id'] = $node->uid;
  if (isset($node->nid)) {
    watchdog('admin_feature', 'The author is responsible for the Action Item: ' . $node->nid);
  }
  else {
    watchdog('admin_feature', 'There is a person responsible for new Action Item.');
  }
  return TRUE;
}

/**
 * Define all progress checks provided by the module.
 *
 * @return array
 *   An associative array keyed by unique name of the field. Each check is an
 *   associative array containing:
 *   - name: The internal name of the progress check.
 *   - label: The human readable name of the progress check.
 *   - description: The description of the progress check.
 *   - url: An associative array that describes when and how a link should be
 *     rendered to allow the user to correct the check.
 *   - success_text: The text to display when the check succeeds.
 *   - fail_text: The text to display when the check fails.
 *   - function: The function that actually performs the progress check.
 *   - file_name: The file where that function is implemented.
 *   - required: Boolean determining whether the progress check is required
 *     or not. Is overridden by required_function.
 *   - required_function: Function determining whether the progress check is
 *     required or not. Overrides required.
 */
function devtrac7_actionitem_devtrac7_progress_field_checks_info() {
  $destination = current_path();
  $query = drupal_http_build_query(drupal_get_query_parameters());
  if ($query != '') {
    $destination .= '?' . $query;
  }
  $progress_checks['devtrac7_actionitem_reportset'] = array(
    'name' => t('devtrac7_actionitem_reportset'),
    'label' => t('devtrac7_actionitem_reportset'),
    'description' => 'Change the Site Report of the Action Item.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Report'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'edit-field-actionitem-ftreportitem',
      'contextual' => FALSE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'The site report is given.',
    'fail_text' => 'You have to provide the site report.',
    'function' => 'devtrac7_actionitem_reportset',
    'filename' => 'devtrac7_actionitem.inc',
    'required' => TRUE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_actionitem_respplaceset'] = array(
    'name' => t('devtrac7_actionitem_respplaceset'),
    'label' => t('devtrac7_actionitem_respplaceset'),
    'description' => 'Change the location of the Action Item.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Location'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'edit-field-actionitem-resp-place',
      'contextual' => FALSE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'The location is given.',
    'fail_text' => 'You have to provide the location.',
    'function' => 'devtrac7_actionitem_respplaceset',
    'filename' => 'devtrac7_actionitem.inc',
    'required' => TRUE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_actionitem_responsibleset'] = array(
    'name' => t('devtrac7_actionitem_responsibleset'),
    'label' => t('devtrac7_actionitem_responsibleset'),
    'description' => 'Change the responsible person(s) of the Action Item.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Responsible'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'edit-field-actionitem-responsible',
      'contextual' => TRUE,
      'override' => TRUE,
      'override_function' => '',
    ),
    'success_text' => 'The responsible person is given.',
    'fail_text' => 'You have to provide at least one responsible person.',
    'function' => 'devtrac7_actionitem_responsibleset',
    'filename' => 'devtrac7_actionitem.inc',
    'required' => FALSE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_actionitem_followuptaskset'] = array(
    'name' => t('devtrac7_actionitem_followuptaskset'),
    'label' => t('devtrac7_actionitem_followuptaskset'),
    'description' => 'Change the follow-up task of the Action Item.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Action Item'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'edit-field-actionitem-followuptask',
      'contextual' => TRUE,
      'override' => TRUE,
      'override_function' => '',
    ),
    'success_text' => 'The follow-up task is given.',
    'fail_text' => 'You have to provide the follow-up task.',
    'function' => 'devtrac7_actionitem_followuptaskset',
    'filename' => 'devtrac7_actionitem.inc',
    'required' => FALSE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_actionitem_duedateset'] = array(
    'name' => t('devtrac7_actionitem_duedateset'),
    'label' => t('devtrac7_actionitem_duedateset'),
    'description' => 'Change the due date of the Action Item.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Due Date'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'edit-field-actionitem-due-date',
      'contextual' => FALSE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'The due date is given.',
    'fail_text' => 'You have to provide the due date.',
    'function' => 'devtrac7_actionitem_duedateset',
    'filename' => 'devtrac7_actionitem.inc',
    'required' => FALSE,
    'required_function' => '',
  );
/*  $progress_checks['devtrac7_actionitem_priorityset'] = array(
    'name' => t('devtrac7_actionitem_priorityset'),
    'label' => t('devtrac7_actionitem_priorityset'),
    'description' => 'Change the priority of the Action Item.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Priority'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'edit-field-actionitem-severity',
      'contextual' => TRUE,
      'override' => TRUE,
      'override_function' => '',
    ),
    'success_text' => 'The priority is given.',
    'fail_text' => 'You have to provide the priority.',
    'function' => 'devtrac7_actionitem_priorityset',
    'filename' => 'devtrac7_actionitem.inc',
    'required' => TRUE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_actionitem_statusset'] = array(
    'name' => t('devtrac7_actionitem_statusset'),
    'label' => t('devtrac7_actionitem_statusset'),
    'description' => 'Change the status of the Action Item.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Status'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'edit-field-actionitem-status',
      'contextual' => FALSE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'The status is given.',
    'fail_text' => 'You have to provide the status.',
    'function' => 'devtrac7_actionitem_statusset',
    'filename' => 'devtrac7_actionitem.inc',
    'required' => TRUE,
    'required_function' => '',
  );*/
  $progress_checks['devtrac7_actionitem_oecdcodesset'] = array(
    'name' => t('devtrac7_actionitem_oecdcodesset'),
    'label' => t('devtrac7_actionitem_oecdcodesset'),
    'description' => 'Change the sectors of the Action Item.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Sectors'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'edit-taxonomy-vocabulary-8',
      'contextual' => FALSE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'Sectors are given.',
    'fail_text' => 'You have to provide at least one sector.',
    'function' => 'devtrac7_actionitem_oecdcodesset',
    'filename' => 'devtrac7_actionitem.inc',
    'required' => TRUE,
    'required_function' => '',
  );
/*
/*  $progress_checks['devtrac7_actionitem_districtset'] = array(
    'name' => t('devtrac7_actionitem_districtset'),
    'label' => t('devtrac7_actionitem_districtset'),
    'description' => 'Change the district of the Action Item.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit District'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'edit-taxonomy-vocabulary-6',
      'contextual' => TRUE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'The district is given.',
    'fail_text' => 'You have to provide the district.',
    'function' => 'devtrac7_actionitem_districtset',
    'filename' => 'devtrac7_actionitem.inc',
    'required' => TRUE,
    'required_function' => '',
  );*/
/*
  $progress_checks['devtrac7_actionitem_buttonset'] = array(
    'name' => t('devtrac7_actionitem_buttonset'),
    'label' => t('devtrac7_actionitem_buttonset'),
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
    'function' => 'devtrac7_actionitem_buttonset',
    'filename' => 'devtrac7_actionitem.inc',
    'required' => FALSE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_actionitem_progressbarset'] = array(
    'name' => t('devtrac7_actionitem_progressbarset'),
    'label' => t('devtrac7_actionitem_progressbarset'),
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
    'function' => 'devtrac7_actionitem_progressbarset',
    'filename' => 'devtrac7_actionitem.inc',
    'required' => FALSE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_actionitem_progresslinksset'] = array(
    'name' => t('devtrac7_actionitem_progresslinksset'),
    'label' => t('devtrac7_actionitem_progressliknsset'),
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
    'function' => 'devtrac7_actionitem_progresslinksset',
    'filename' => 'devtrac7_actionitem.inc',
    'required' => FALSE,
    'required_function' => '',
  );
 */
  return $progress_checks;
}
