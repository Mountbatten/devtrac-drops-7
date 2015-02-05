<?php
/**
 * @file
 * 
 * Functions that manage the ftritem. Called from various places
 */

function devtrac7_ftritem_addplacetofieldtrip($node) {
  if (!isset($node->field_ftritem_field_trip)) {
    // this happens when there is no fieldtrip.
    // for example when we load ftritems via feeds
    return;
  }
  if (isset($node->field_ftritem_place[$node->language]) && (count($node->field_ftritem_place[$node->language]) > 0)) {
    if (module_exists('mapit')) {
      $mapit_vocabulary = variable_get('mapit_vocabulary',"0");
      $undefined_area_tid = mapit_get_undefined_area_tid($mapit_vocabulary, $node->language);
    }
    $fieldtrip = node_load($node->field_ftritem_field_trip[$node->language][0]['target_id']);
    if (isset($node->original->field_ftritem_place[$node->language]) && (count($node->original->field_ftritem_place[$node->language]) > 0)) {
      /*
       * This happens when one place replaces another place
       */
      if ($node->field_ftritem_place == $node->original->field_ftritem_place) {
        /*
         * Location attached to the Site Report did not change.
         * However, something on the Site Report changed.
         */
        if ($node->taxonomy_vocabulary_6 == $node->original->taxonomy_vocabulary_6) {
          // The Admin Unit did not change.
          return TRUE;
        }
        // The Admin Unit changed.
        // Mitigate the change to the Fieldtrip.
        unset($fieldtrip->taxonomy_vocabulary_6);
        $alldistricts = array();
        foreach($fieldtrip->field_fieldtrip_places[$fieldtrip->language] as $key => $placeid) {
          if ($node->field_ftritem_place[$node->language][0]['target_id'] == $placeid['target_id']) {
            $alldistricts[] = $node->taxonomy_vocabulary_6[$node->language][0]['tid'];
          }
          else {
            $place = node_load($placeid['target_id']);
            $alldistricts[] = $place->taxonomy_vocabulary_6[$place->language][0]['tid'];
          }
        }
        $districts = array_unique($alldistricts);
        foreach ($districts as $key => $tid) {
          if (isset($undefined_area_tid) && is_numeric($undefined_area_tid)) {
            // Filter out "Undefined Area".
            if ($tid != $undefined_area_tid) {
              $fieldtrip->taxonomy_vocabulary_6[$fieldtrip->language][$key]['tid'] = $tid;
            }
          }
          else {
            $fieldtrip->taxonomy_vocabulary_6[$fieldtrip->language][$key]['tid'] = $tid;
          }
        }
        node_save($fieldtrip);
        return TRUE;
      }

      // This code only fires when a user changes the place attached to the site report.
      // Since the field is hidden on the site report edit form this will never be the case.
      // WARNING: The following code has never been tested.
      unset($fieldtrip->taxonomy_vocabulary_6);
      $districts = array();
      foreach($fieldtrip->field_fieldtrip_places[$fieldtrip->language] as $key=>$place) {
        if ($place['target_id'] == $node->original->field_ftritem_place[$node->language][0]['target_id']) {
          unset ($fieldtrip->field_fieldtrip_places[$fieldtrip->language][$key]);
        }
        else {
          $districts[] = $place->taxonomy_vocabulary_6[$place->language][0];
        }
      }
      $fieldtrip->taxonomy_vocabulary_6[$fieldtrip->language] = array_unique($districts);
      if ((isset($node->field_ftritem_place[$node->language][0])) && (!empty($node->field_ftritem_place[$node->language][0]))) {
        $fieldtrip->field_fieldtrip_places[$fieldtrip->language][] = $node->field_ftritem_place[$node->language][0];
      }
    }
    else {
      /*
       * This happens when a new place is added to the ftritem
       */
      if ((isset($node->field_ftritem_place[$node->language][0])) && (!empty($node->field_ftritem_place[$node->language][0]))) {
        $fieldtrip->field_fieldtrip_places[$fieldtrip->language][] = $node->field_ftritem_place[$node->language][0];
        if (isset($undefined_area_tid) && is_numeric($undefined_area_tid)) {
          // Filter out "Undefined Area".
          if (isset($node->taxonomy_vocabulary_6[$node->language][0]['tid']) && ($node->taxonomy_vocabulary_6[$node->language][0]['tid'] != $undefined_area_tid)) {
            if (isset($fieldtrip->taxonomy_vocabulary_6[$fieldtrip->language]) && (count($fieldtrip->taxonomy_vocabulary_6[$fieldtrip->language]) > 0)) {
              if (!in_array($node->taxonomy_vocabulary_6[$node->language][0], $fieldtrip->taxonomy_vocabulary_6[$fieldtrip->language])) {
                $fieldtrip->taxonomy_vocabulary_6[$fieldtrip->language][] = $node->taxonomy_vocabulary_6[$node->language][0];
              }
            }
            else {
              $fieldtrip->taxonomy_vocabulary_6[$fieldtrip->language][] = $node->taxonomy_vocabulary_6[$node->language][0];
            }
          }
        }
        else {
          if (isset($node->taxonomy_vocabulary_6[$node->language][0]['tid'])) {
            if (isset($fieldtrip->taxonomy_vocabulary_6[$fieldtrip->language]) && (count($fieldtrip->taxonomy_vocabulary_6[$fieldtrip->language]) > 0)) {
              if (!in_array($node->taxonomy_vocabulary_6[$node->language][0], $fieldtrip->taxonomy_vocabulary_6[$fieldtrip->language])) {
                $fieldtrip->taxonomy_vocabulary_6[$fieldtrip->language][] = $node->taxonomy_vocabulary_6[$node->language][0];
              }
            }
            else {
              $fieldtrip->taxonomy_vocabulary_6[$fieldtrip->language][] = $node->taxonomy_vocabulary_6[$node->language][0];
            }
          }
        }
      }
    }
    node_save($fieldtrip);

  }
  else {
    /*
     *  This is when a place is REMOVED from an ftritem, which should be impossible
     */

  }

}

/**
 * This function checks if the Place Type on the Site Report is set.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_ftritem_placetypeset($node) {
  if (!empty($node->taxonomy_vocabulary_7) && isset($node->taxonomy_vocabulary_7[$node->language])) {
    if ($node->taxonomy_vocabulary_7[$node->language][0]['tid'] == _devtrac7_site_report_tid('Roadside Observation')) {
      // It's a Roadside Observation, it does not need it's own Place Type to be set
      return TRUE;
    }
    // It's either a Site Visit or a Human Interest Story, they need the Place Type to be set
    return TRUE;
  }
  return FALSE;
}

function devtrac7_ftritem_placetype_required($node) {
  if (!empty($node->taxonomy_vocabulary_7) && isset($node->taxonomy_vocabulary_7[$node->language])) {
    return ($node->taxonomy_vocabulary_7[$node->language][0]['tid'] != _devtrac7_site_report_tid('Roadside Observation'));
  }
  return FALSE;
}

/**
 * This function checks if the District on the Site Report is set.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_ftritem_districtset($node) {
  if (!empty($node->taxonomy_vocabulary_7) && isset($node->taxonomy_vocabulary_7[$node->language])) {
    if ($node->taxonomy_vocabulary_7[$node->language][0]['tid'] == _devtrac7_site_report_tid('Roadside Observation')) {
      // It's a Roadside Observation, it needs it's own District to be set
      if (!empty($node->taxonomy_vocabulary_6) && isset($node->taxonomy_vocabulary_6[$node->language])) {
        return (count($node->taxonomy_vocabulary_6[$node->language]) > 0);
      }
      return FALSE;
    }
    // It's either a Site Visit or a Human Interest Story, they need the District to be set
    return TRUE;
  }
  return FALSE;
}

function devtrac7_ftritem_district_required($node) {
  if (!empty($node->taxonomy_vocabulary_7) && isset($node->taxonomy_vocabulary_7[$node->language])) {
    return ($node->taxonomy_vocabulary_7[$node->language][0]['tid'] == _devtrac7_site_report_tid('Roadside Observation'));
  }
  return FALSE;
}

/**
 * This function checks if the Place Type on the Site Report is set.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_ftritem_reporttypeset($node) {
  if (!empty($node->taxonomy_vocabulary_7) && isset($node->taxonomy_vocabulary_7[$node->language])) {
    return (count($node->taxonomy_vocabulary_7[$node->language]) > 0);
  }
  return FALSE;
}

/**
 * This function checks if the Sectors on the Site Report are set.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_ftritem_oecdcodesset($node) {
  if (!empty($node->taxonomy_vocabulary_8) && isset($node->taxonomy_vocabulary_8[$node->language])) {
    return (count($node->taxonomy_vocabulary_8[$node->language]) > 0);
  }
  return FALSE;
}

/**
 * This function checks if Images on the Site Report are set,
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_ftritem_fieldtripset($node) {
  if (!empty($node->field_ftritem_field_trip) && isset($node->field_ftritem_field_trip[$node->language])) {
    return (count($node->field_ftritem_field_trip[$node->language]) > 0);
  }
  return FALSE;
}

/**
 * This function checks if the Place on the Site Report is set.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_ftritem_placeset($node) {
  if (!empty($node->taxonomy_vocabulary_7) && isset($node->taxonomy_vocabulary_7[$node->language])) {
    if ($node->taxonomy_vocabulary_7[$node->language][0]['tid'] != _devtrac7_site_report_tid('Roadside Observation')) {
      // It's either a Site Visit or a Human Interest Story, they need the Place to be set
      if (!empty($node->field_ftritem_place) && isset($node->field_ftritem_place[$node->language])) {
        return (count($node->field_ftritem_place[$node->language]) > 0);
      }
      return FALSE;
    }
    // It's a Roadside Observation, it does not need the Place to be set
    return TRUE;
  }
  return FALSE;    
}

function devtrac7_ftritem_place_required($node) {
  if (!empty($node->taxonomy_vocabulary_7) && isset($node->taxonomy_vocabulary_7[$node->language])) {
    return ($node->taxonomy_vocabulary_7[$node->language][0]['tid'] != _devtrac7_site_report_tid('Roadside Observation'));
  }
  return FALSE;
}

/**
 * This function checks if the Date Visited on the Site Report is set,
 * and within the Start and End Date of the Field Trip
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_ftritem_datevisitedset($node) {
  if (!empty($node->field_ftritem_date_visited) && isset($node->field_ftritem_date_visited[$node->language])) {
    if (count($node->field_ftritem_date_visited[$node->language]) > 0) {
      // There is a Date Visited
      $datevisited = $node->field_ftritem_date_visited[$node->language][0]['value'];
      if (isset($node->field_ftritem_field_trip[$node->language][0]['target_id'])) {
        $fieldtrip = node_load($node->field_ftritem_field_trip[$node->language][0]['target_id']);
        if (!empty($fieldtrip->field_fieldtrip_start_end_date) && isset($fieldtrip->field_fieldtrip_start_end_date[$fieldtrip->language])) {
          $startdate = $fieldtrip->field_fieldtrip_start_end_date[$fieldtrip->language][0]['value'];
          $enddate = $fieldtrip->field_fieldtrip_start_end_date[$fieldtrip->language][0]['value2'];
          if (($startdate <= $datevisited) && ($datevisited <= $enddate)) {
            // Date Visited is within the Field Trip's Start and End Date
            return TRUE;
          }
          // Date Visited is NOT in between the Start and End Date of the Field Trip
        }
        // Either the Start or the End date is missing on the fieldtrip.
      }
      // The fieldtrip is not set on the ftritem
    }
    // There is no Date Visited
    return FALSE;
  }
  return FALSE;
}

/**
 * This function checks if the Public Report on the Site Report is set.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_ftritem_summaryset($node) {
  if (!empty($node->field_ftritem_public_summary) && isset($node->field_ftritem_public_summary[$node->language])) {
    return ((count($node->field_ftritem_public_summary[$node->language]) > 0) &&
           (!empty($node->field_ftritem_public_summary[$node->language][0]['value'])) &&
           ($node->field_ftritem_public_summary[$node->language][0]['value'] != 'Please provide the public report.'));
  }
  return FALSE;
}

/**
 * This function checks if the Private Notes on the Site Report is set.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_ftritem_narrativeset($node) {
  if (!empty($node->field_ftritem_narrative) && isset($node->field_ftritem_narrative[$node->language])) {
    return ((count($node->field_ftritem_narrative[$node->language]) > 0) &&
           (!empty($node->field_ftritem_narrative[$node->language][0]['value'])) &&
           ($node->field_ftritem_narrative[$node->language][0]['value'] != 'Please provide private notes for other Devtrac users.'));
  }
  return FALSE;
}

/**
 * This function checks if Images on the Site Report are set,
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_ftritem_imagesset($node) {
  if (!empty($node->field_ftritem_images) && isset($node->field_ftritem_images[$node->language])) {
    return (count($node->field_ftritem_images[$node->language]) > 0);
  }
  return FALSE;
}

/**
 * This function checks if there are questions available for the Site Report.
 * It returns FALSE if it does.
 * It returns TRUE if it doesn't.
 */
function devtrac7_ftritem_questionnaireset($node) {
  if (module_exists('questionnaire_question')) {
    return !questionnaire_question_addsubmission_access($node);
  }
  return TRUE;
}

/**
 * This function checks if the Lat-Lon on the Site Report is set.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_ftritem_latlonset($node) {
  if (!empty($node->taxonomy_vocabulary_7) && isset($node->taxonomy_vocabulary_7[$node->language])) {
    if ($node->taxonomy_vocabulary_7[$node->language][0]['tid'] == _devtrac7_site_report_tid('Roadside Observation')) {
      // It's a Roadside Observation, it needs it's own Lat-Lon to be set
      if (!empty($node->field_ftritem_lat_long) && isset($node->field_ftritem_lat_long[$node->language])) {
        return (count($node->field_ftritem_lat_long[$node->language]) > 0);
      }
      return FALSE;
    }
    // It's either a Site Visit or a Human Interest Story, they need the Place to be set
    return TRUE;
  }
  return FALSE;
}

function devtrac7_ftritem_latlon_required($node) {
  if (!empty($node->taxonomy_vocabulary_7) && isset($node->taxonomy_vocabulary_7[$node->language])) {
    return ($node->taxonomy_vocabulary_7[$node->language][0]['tid'] == _devtrac7_site_report_tid('Roadside Observation'));
  }
  return FALSE;
}

/**
 * This function checks if Images on the Site Report are set,
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_ftritem_statusset($node) {
  if (!empty($node->field_ftritem_status) && isset($node->field_ftritem_status[$node->language])) {
    return (count($node->field_ftritem_status[$node->language]) > 0);
  }
  return FALSE;
}

/**
 * This function checks if Contextual Links on the Site Report are set,
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_ftritem_buttonset($node) {
  if (!empty($node->field_fieldtrip_button) && isset($node->field_fieldtrip_button[$node->language])) {
    return (count($node->field_fieldtrip_button[$node->language]) > 0);
  }
  return FALSE;
}

/**
 * This function checks if the Progress Bar on the Site Report is set,
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_ftritem_progressbarset($node) {
  if (!empty($node->field_progress_bar) && isset($node->field_progress_bar[$node->language])) {
    return (count($node->field_progress_bar[$node->language]) > 0);
  }
  return FALSE;
}

/**
 * This function checks if the Progress Links on the Site Report are set.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_ftritem_progresslinksset($node) {
  if (!empty($node->field_progress_links) && isset($node->field_progress_links[$node->language])) {
    return (!empty($node->field_progress_links[$node->language]));
  }
  return FALSE;
}
/*
 * This function inserts the POINT WKT value from the attached place in the ftritem for performance reasons
*/
function devtrac7_ftritem_updatelatlon($node) {
  // Only copy latlon from Place when there is no lat_lon filled in on the ftritem
  // If the ftritem has a lat_lon already, it is
  // A. Already copied from the Place
  // B. A correction to the Place as it is stored in the database
  // C. A user error (and that is why we enabled versioning in Drupal 7)
  if (isset($node->original->field_ftritem_lat_long[$node->language]) && (count($node->original->field_ftritem_lat_long[$node->language]) > 0)) {
    // There was a Lat-Lon
    if (isset($node->field_ftritem_lat_long[$node->language]) && (count($node->field_ftritem_lat_long[$node->language]) > 0)) {
      // There still is a Lat-Lon
      if ($node->original->field_ftritem_lat_long[$node->language][0]['geom'] == $node->field_ftritem_lat_long[$node->language][0]['geom']) {
        // It did not change so do nothing
        watchdog('admin_feature', 'Lat-Lon did not change on Site Report: ' . $node->nid);
        return FALSE;
      }
      // It changed so save it
      watchdog('admin_feature', 'Changed Lat-Lon of Site Report: ' . $node->nid);
      // drupal_set_message('Changed Lat-Lon of the Site Report.', 'status');
      return TRUE;
    }
    // There is no Lat-Lon anymore
    watchdog('admin_feature', 'Attempt to delete Lat-Lon on Site Report: ' . $node->nid);
    //form_set_error('field_ftritem_lat_long','Please provide the Lat-Lon for the Site Report.');
    //form_state['redirect'] = FALSE;
    //drupal_set_message('Please provide the Lat-Lon for the Site Report.', 'error');
    return FALSE;
  }
  // There was no Lat-Lon
  if (isset($node->field_ftritem_lat_long[$node->language]) && (count($node->field_ftritem_lat_long[$node->language]) > 0)) {
    // There is a Lat-Lon now so save it
    if (isset($node->nid)) {
      watchdog('admin_feature', 'Set Lat-Lon on Site Report: ' . $node->nid);
    }
    else {
      watchdog('admin_feature', 'Set Lat-Lon on new Site Report');
    }
    // drupal_set_message('Set Lat-Lon on the Site Report.', 'status');
    return TRUE;
  }
  // There still is no Lat-Lon
  if (isset($node->field_ftritem_place[$node->language]) && (count($node->field_ftritem_place[$node->language]) > 0)) {
    // There is a place attached so copy it
    $place = node_load($node->field_ftritem_place[$node->language][0]['target_id']);
    $node->field_ftritem_lat_long = $place->field_place_lat_long;
    if (isset($node->nid)) {
      watchdog('admin_feature', 'Copied Lat-Lon to Site Report: ' . $node->nid);
    }
    else {
      watchdog('admin_feature', 'Copied Lat-Lon to the Site Report.');
    }
    // drupal_set_message('Copied Lat-Lon to the Site Report.', 'status');
    return TRUE;
  }
  // There is no place attached
  if (isset($node->taxonomy_vocabulary_7[$node->language]) && (count($node->taxonomy_vocabulary_7[$node->language]) > 0) && ($node->taxonomy_vocabulary_7[$node->language][0]['tid'] == _devtrac7_site_report_tid('Roadside Observation'))) {
    // It's a Roadside Observation (tid: _devtrac7_site_report_tid('Roadside Observation'))
    // It needs its Lat-Lon to be set
    watchdog('admin_feature', 'Lat-Lon needs to be set for Roadside Observation: ' . $node->nid);
    drupal_set_message('Please provide the Lat-Lon for the Site Report.', 'error');
    return FALSE;
  }
  // It's either a Site Visit (tid: 209) or a Human Interest Story (tid: 211)
  // It needs a place to be attached
  watchdog('admin_feature', 'Place needs to be attached to Site Visit or Human Interest Story: ' . $node->nid);
  drupal_set_message('Please attach a Place to the Site Report.', 'error');
  return FALSE;
}

/*
 * This function inserts the District from the attached place in the ftritem for performance reasons
*/
function devtrac7_ftritem_updatedistrict($node) {
  // Only copy District from Place when there is no District filled in on the Site Report
  // If the Site Report has a District already, it is
  // A. Already copied from the Place
  // B. A correction to the Place as it is stored in the database
  // C. A user error (and that is why we enabled versioning in Drupal 7)
  if (isset($node->original->taxonomy_vocabulary_6[$node->language]) && (count($node->original->taxonomy_vocabulary_6[$node->language]) > 0)) {
    // There was a District
    if (isset($node->taxonomy_vocabulary_6[$node->language]) && (count($node->taxonomy_vocabulary_6[$node->language]) > 0)) {
      // There still is a District
      if ($node->original->taxonomy_vocabulary_6[$node->language][0]['tid'] == $node->taxonomy_vocabulary_6[$node->language][0]['tid']) {
        // It did not change so do nothing
        watchdog('admin_feature', 'District did not change on Site Report: ' . $node->nid);
        return FALSE;
      }
      // It is changed so save it.
      // If it is changed by mapit, mitigate it to the place attached.
      if (module_exists('mapit')) {
        $mapit_vocabulary = variable_get('mapit_vocabulary',"0");
        $undefined_area_tid = mapit_get_undefined_area_tid($mapit_vocabulary, $node->language);
      }
      if (isset($undefined_area_tid) && is_numeric($undefined_area_tid)) {
        if ($node->original->taxonomy_vocabulary_6[$node->language][0]['tid'] == $undefined_area_tid) {
          if (isset($node->field_ftritem_place[$node->language][0]['target_id'])) {
            $place = node_load($node->field_ftritem_place[$node->language][0]['target_id']);
            $place->taxonomy_vocabulary_6[$place->language][0]['tid'] = $node->taxonomy_vocabulary_6[$node->language][0]['tid'];
            node_save($place);
          }
        }
      }
      watchdog('admin_feature', 'Changed District on Site Report: ' . $node->nid);
      // drupal_set_message('Changed District on the Site Report.', 'status');
      return TRUE;
    }
    // There is no District anymore
    watchdog('admin_feature', 'Attempt to delete District on Site Report: ' . $node->nid);
    drupal_set_message('Please provide the District for the Site Report.', 'error');
    return FALSE;
  }
  // There was no District
  if (isset($node->taxonomy_vocabulary_6[$node->language]) && (count($node->taxonomy_vocabulary_6[$node->language]) > 0)) {
    // There is a District now so save it
    watchdog('admin_feature', 'Set District on Site Report: ' . $node->nid);
    // drupal_set_message('Set District on the Site Report.', 'status');
    return TRUE;
  }
  // There still is no District
  if (isset($node->field_ftritem_place[$node->language]) && (count($node->field_ftritem_place[$node->language]) > 0)) {
    // There is a place attached so copy it
    $place = node_load($node->field_ftritem_place[$node->language][0]['target_id']);
    $node->taxonomy_vocabulary_6 = $place->taxonomy_vocabulary_6;
    if (isset($node->nid)) {
      watchdog('admin_feature', 'Copied District on Site Report: ' . $node->nid);
    }
    else {
      watchdog('admin_feature', 'Copied District on new Site Report: ');
    }
    // drupal_set_message('Copied District on the Site Report.', 'status');
    return TRUE;
  }
  // There is no place attached
  if (isset($node->taxonomy_vocabulary_7[$node->language]) && (count($node->taxonomy_vocabulary_7[$node->language]) > 0) && ($node->taxonomy_vocabulary_7[$node->language][0]['tid'] == _devtrac7_site_report_tid('Roadside Observation'))) {
    // It's a Roadside Observation (tid: _devtrac7_site_report_tid('Roadside Observation'))
    // It needs its District to be set
    watchdog('admin_feature', 'District needs to be set for Roadside Observation: ' . $node->nid);
    drupal_set_message('Please provide the District for the Site Report.', 'error');
    return FALSE;
  }
  // It's either a Site Visit (tid: 209) or a Human Interest Story (tid: 211)
  // It needs a place to be attached
  watchdog('admin_feature', 'Place needs to be attached to Site Visit or Human Interest Story: ' . $node->nid);
  drupal_set_message('Please attach a Place to the Site Report.', 'error');
  return FALSE;
}

/*
 * This function inserts the Place Type from the attached place in the ftritem for performance reasons
*/
function devtrac7_ftritem_updateplacetype($node) {
  // Only copy Place Type from Place when there is no Place Type filled in on the Site Report
  // If the Site Report has a Place Type already, it is
  // A. Already copied from the Place
  // B. A correction to the Place as it is stored in the database
  // C. A user error (and that is why we enabled versioning in Drupal 7)
  if (isset($node->original->taxonomy_vocabulary_1[$node->language]) && (count($node->original->taxonomy_vocabulary_1[$node->language]) > 0)) {
    // There was a Place Type
    if (isset($node->taxonomy_vocabulary_1[$node->language]) && (count($node->taxonomy_vocabulary_1[$node->language]) > 0)) {
      // There still is a Place Type
      if ($node->original->taxonomy_vocabulary_1[$node->language][0]['tid'] == $node->taxonomy_vocabulary_1[$node->language][0]['tid']) {
        // It did not change so do nothing
        watchdog('admin_feature', 'Place Type did not change on Site Report: ' . $node->nid);
        return FALSE;
      }
      // It changed so save it
      watchdog('admin_feature', 'Changed Place Type on Site Report: ' . $node->nid);
      // drupal_set_message('Changed Place Type on Site Report.', 'status');
      return TRUE;
    }
    // There is no Place Type anymore
    watchdog('admin_feature', 'Attempt to delete Place Type on Site Report: ' . $node->nid);
    drupal_set_message('Please provide the Location Type for the Site Visit.', 'error');
    return FALSE;
  }
  // There was no Place Type
  if (isset($node->taxonomy_vocabulary_1[$node->language]) && (count($node->taxonomy_vocabulary_1[$node->language]) > 0)) {
    // There is a Place Type now so save it
    // ->nid might not be set during creation of the node
    // for example when we load ftritems through feeds
    if (isset($node->nid)) {
      watchdog('admin_feature', 'Set Place Type on Site Report: ' . $node->nid);
    }
    else {
      watchdog('admin_feature', 'Set Place Type on new Site Report ');
    }
    // drupal_set_message('Set Place Type on Site Report.', 'status');
    return TRUE;
  }
  // There still is no Place Type
  if (isset($node->field_ftritem_place[$node->language]) && (count($node->field_ftritem_place[$node->language]) > 0)) {
    // There is a place attached so copy it
    $place = node_load($node->field_ftritem_place[$node->language][0]['target_id']);
    $node->taxonomy_vocabulary_1 = $place->taxonomy_vocabulary_1;
    if (isset($node->nid)) {
      watchdog('admin_feature', 'Copied Place Type to Site Report: ' . $node->nid);
    }
    else {
      watchdog('admin_feature', 'Copied Place Type to new Site Report');
    }
    // drupal_set_message('Copied Place Type to Site Report.', 'status');
    return TRUE;
  }
  // There is no place attached
  if (isset($node->taxonomy_vocabulary_7[$node->language]) && (count($node->taxonomy_vocabulary_7[$node->language]) > 0) && ($node->taxonomy_vocabulary_7[$node->language][0]['tid'] == _devtrac7_site_report_tid('Roadside Observation'))) {
    // It's a Roadside Observation (tid: _devtrac7_site_report_tid('Roadside Observation'))
    // It needs its Place Type to be set
//    watchdog('admin_feature', 'Place Type needs to be set for Roadside Observation: ' . $node->nid);
//    drupal_set_message('Please provide the Place Type for the Site Report.', 'error');
    return TRUE;
  }
  // It's either a Site Visit (tid: 209) or a Human Interest Story (tid: 211)
  // It needs a place to be attached
  watchdog('admin_feature', 'Place needs to be attached to Site Visit or Human Interest Story: ' . $node->nid);
  drupal_set_message('Please attach a Place to the Site Report.', 'error');
  return FALSE;
}

/*
 * This function inserts the Sectors from the attached action items in the ftritem for performance reasons
*/
function devtrac7_ftritem_updateoecdcodes($node) {
  // Only copy OECD Codes from Action Items when there are no OECD Codes filled in on the Site Report
  // If the Site Report already has OECD Codes already, they are
  // A. Already copied from the Action Items
  // B. A correction on the Action Items as it is stored in the database
  // C. A user error (and that is why we enabled versioning in Drupal 7)
  if (isset($node->original->taxonomy_vocabulary_8[$node->language]) && (count($node->original->taxonomy_vocabulary_8[$node->language]) > 0)) {
    // There were Sectors
    if (isset($node->taxonomy_vocabulary_8[$node->language]) && (count($node->taxonomy_vocabulary_8[$node->language]) > 0)) {
      // There still are Sectors
      if (asort($node->original->taxonomy_vocabulary_8[$node->language]) && asort($node->taxonomy_vocabulary_8[$node->language])) {
        if (array_values($node->original->taxonomy_vocabulary_8[$node->language]) == array_values($node->taxonomy_vocabulary_8[$node->language])) {
          // They did not change so do nothing
          watchdog('admin_feature', 'Sectors did not change on Site Report: ' . $node->nid);
          return FALSE;
        }
      }
      // They changed so save them
      watchdog('admin_feature', 'Changed Sectors on Site Report: ' . $node->nid);
      // drupal_set_message('Changed Sectors on Site Report.', 'status');
      return TRUE;
    }
    // There are no Sectors anymore
    watchdog('admin_feature', 'Attempt to delete all Sectors on Site Report: ' . $node->nid);
    drupal_set_message('Please provide the Sectors for the Site Report.', 'error');
    return FALSE;
  }
  // There were no Sectors
  if (isset($node->taxonomy_vocabulary_1[$node->language]) && (count($node->taxonomy_vocabulary_1[$node->language]) > 0)) {
    // There are Sectors now so save it
    if (isset($node->nid)) {
      watchdog('admin_feature', 'Sectors set on Site Report: ' . $node->nid);
    }
    else {
      watchdog('admin_feature', 'Sectors set on new Site Report');
    }
    // drupal_set_message('Sectors set.', 'status');
    return TRUE;
  }
  // There still are no Sectors
  if (isset($node->field_ftritem_place[$node->language]) && (count($node->field_ftritem_place[$node->language]) > 0)) {
    // There is a place attached so copy it
    $place = node_load($node->field_ftritem_place[$node->language][0]['target_id']);
    $node->taxonomy_vocabulary_1 = $place->taxonomy_vocabulary_1;
    watchdog('admin_feature', 'Copied Location Type from Location to Site Report.');
    // drupal_set_message('Place Type copied.', 'status');
    return TRUE;
  }
  // There are no action items attached
  if (isset($node->taxonomy_vocabulary_7[$node->language]) && (count($node->taxonomy_vocabulary_7[$node->language]) > 0) && ($node->taxonomy_vocabulary_7[$node->language][0]['tid'] == _devtrac7_site_report_tid('Roadside Observation'))) {
    // It's a Roadside Observation (tid: _devtrac7_site_report_tid('Roadside Observation'))
    // It needs its Place Type to be set
//    watchdog('admin_feature', 'Place Type needs to be set for Roadside Observation: ' . $node->nid);
//    drupal_set_message('Please provide the Place Type.', 'error');
    return TRUE;
  }
  // It's either a Site Visit (tid: 209) or a Human Interest Story (tid: 211)
  // It needs a place to be attached
  watchdog('admin_feature', 'Place needs to be attached to Site Visit or Human Interest Story: ' . $node->nid);
  drupal_set_message('Please attach a Place.', 'error');
  return FALSE;
}

/*
 * This function inserts the Start Date from the attached field trip into Date Visited on the ftritem for performance reasons
*/
function devtrac7_ftritem_updatedatevisited($node) {
  // Only set Date Visited to Start Date from Field Trip when there is no Date Visited filled in on the Site Report
  // If the Site Report has a Date Visited already, it is
  // A. Already copied from the Field Trip
  // B. A correction to the Start Date on the Field Trip as it is stored in the database
  // C. A user error (and that is why we enabled versioning in Drupal 7)
  if (isset($node->original->field_ftritem_date_visited[$node->language]) && (count($node->original->field_ftritem_date_visited[$node->language]) > 0)) {
    // There was a Date Visited
    if (isset($node->field_ftritem_date_visited[$node->language]) && (count($node->field_ftritem_date_visited[$node->language]) > 0)) {
      // There still is a Date Visited
      if ($node->original->field_ftritem_date_visited[$node->language][0]['value'] == $node->field_ftritem_date_visited[$node->language][0]['value']) {
        // It did not change so do nothing
        watchdog('admin_feature', 'Date Visited did not change on Site Report: ' . $node->nid);
        return FALSE;
      }
      // It changed so save it
      watchdog('admin_feature', 'Changed Date Visited on Site Report: ' . $node->nid);
      // drupal_set_message('Changed Date Visited on Site Report.', 'status');
      return TRUE;
    }
    // There is no Date Visited anymore
    watchdog('admin_feature', 'Attempt to delete Date Visited on Site Report: ' . $node->nid);
    drupal_set_message('Please provide the Date Visited for the Site Report.', 'error');
    return FALSE;
  }
  // There was no Date Visited
  if (isset($node->field_ftritem_date_visited[$node->language]) && (count($node->field_ftritem_date_visited[$node->language]) > 0)) {
    // There is a Date Visited now so save it
    // This might fire on node creation when ftritems are loaded using feeds
    // This means there might not be a ->nid yet
    if (isset($node->nid)) {
      watchdog('admin_feature', 'Set Date Visited on Site Report: ' . $node->nid);
    }
    else {
      watchdog('admin_feature', 'Set Date Visited on a new Site Report.');
    }
    // drupal_set_message('Set Date Visited on Site Report.', 'status');
    return TRUE;
  }
  // There still is no Date Visited
  if (isset($node->field_ftritem_field_trip[$node->language]) && (count($node->field_ftritem_field_trip[$node->language]) > 0)) {
    // There is a Field Trip attached so copy the Start Date from the Field Trip onto the Site Report
    $fieldtrip = node_load($node->field_ftritem_field_trip[$node->language][0]['target_id']);
    $startdate = $fieldtrip->field_fieldtrip_start_end_date;
    // Date Visited is a single value date field, so do some cleanup
    $startdate[$node->language][0]['show_todate'] = FALSE;
    unset($startdate[$node->language][0]['value2']);
    unset($startdate[$node->language][0]['offset2']);
    $node->field_ftritem_date_visited = $startdate;
    if (isset($node->nid)) {
      watchdog('admin_feature', 'Set Date Visited to Start Date of Field Trip on Site Report: ' . $node->nid);
    }
    else {
      watchdog('admin_feature', 'Set Date Visited to Start Date of Field Trip on new Site Report');
    }
    // drupal_set_message('Defaulted Date Visited to Start Date of Field Trip.', 'warning');
    return TRUE;
  }
  // There is no Field Trip attached which should not be possible
  watchdog('admin_feature', 'Field Trip needs to be attached to Site Report: ' . $node->nid);
  drupal_set_message('Please attach a Field Trip to the Site Report.', 'error');
  return FALSE;
}

/*
 *  This function creates an ftritem
*/
function devtrac7_ftritem_create($placenid, $fieldtripnid = NULL, $reporttype = NULL) {
  global $user;
  $message = "";
  $place = node_load($placenid);
  if ($place->type != 'place') {
    // lets supress this message, you should not be here in the first place
    // the BBsync code unfortunately still triggers this
    $message .= "Sorry, that is not a Place that you are attaching to the Field Trip.";
  }
  else {
    if (isset($fieldtripnid) && is_numeric($fieldtripnid)) {
      $fieldtrip = node_load($fieldtripnid);
      if ($fieldtrip->type != 'fieldtrip') {
        // lets supress this message, you should not be here in the first place
        // the BBsync code unfortunately still triggers this
        $message .= "Sorry, that is not a Field Trip that you are attaching this place to.";
      }
      else {
        if (isset($fieldtrip->field_fieldtrip_places[$fieldtrip->language])) {
          foreach ($fieldtrip->field_fieldtrip_places[$fieldtrip->language] as $tpplace) {
            if ($tpplace['target_id'] == $placenid) {
//              $sql = "SELECT ftr.nid FROM content_type_ftritem ftr WHERE ftr.field_ftritem_field_trip_nid = %d AND ftr.field_ftritem_place_nid = %d";
//              $ftrnid = db_result(db_query($sql, $fieldtripnid, $placenid));
//              watchdog("reinier", "ftrnid " . $ftrnid);
//              if ($ftrnid > 0) {
//                $message .= "This place is already attached to the field trip " . $fieldtrip->title;
//              }


              $query = db_select('node', 'n');
              $query->join('field_data_taxonomy_vocabulary_7', 'r', 'n.nid = r.entity_id');
              $query->join('field_data_field_ftritem_place', 'p', 'n.nid = p.entity_id');
              $query->join('field_data_field_ftritem_field_trip', 'f', 'n.nid = f.entity_id');
              $query->fields('n', array('nid'));
              $query->condition('r.taxonomy_vocabulary_7_tid', $reporttype);
              $query->condition('p.field_ftritem_place_target_id', $placenid);
              $query->condition('f.field_ftritem_field_trip_target_id', $fieldtripnid);

//              $sql = "SELECT ftr.nid FROM {content_type_ftritem} ftr INNER JOIN {taxonomy_term_node} tn ON ftr.nid = tn.nid WHERE ftr.field_ftritem_field_trip_nid = %d AND ftr.field_ftritem_place_nid = %d AND tn.tid = %d";
//              $ftrnid = db_query("SELECT ftr.nid FROM {content_type_ftritem} ftr INNER JOIN {taxonomy_term_node} tn ON ftr.nid = tn.nid WHERE ftr.field_ftritem_field_trip_nid = :ftr.field_ftritem_field_trip_nid AND ftr.field_ftritem_place_nid = :ftr.field_ftritem_place_nid AND tn.tid = :tn.tid", array(':ftr.field_ftritem_field_trip_nid' => $fieldtripnid, ':ftr.field_ftritem_place_nid' => $placenid, ':tn.tid' => $reporttype))->fetchField();
//              watchdog("reinier", "ftrnid " . $ftrnid);
              if ($ftrnid = $query->execute()->fetchField()) {
                $term = taxonomy_term_load($reporttype);
                $message .= "There is already a " . $term->name . " planned to this place during the field trip " . $fieldtrip->title;
              }
              break;
            }
          }
        }
        if ($message == "") {
//          $fieldtrip->field_fieldtrip_places[$placenid]['nid'] = $placenid;
//          node_save($fieldtrip);
//          $placetype = '';
//          if (count($place->taxonomy) > 0) {
//            foreach ($place->taxonomy as $term) {
//              if ($term->vid == 1) { // place type vocabulary
//                $placetype = ' ' . $term->name;
//              }
//            }
//          }
          $ftr = new stdClass();
          $ftr->type = 'ftritem';
          //          $vocabulary = devtrack_module_get_vocabulary_by_name('Site Report Type'); // Alert:  Hardcode vocabulary name
          //          $terms = devtrack_module_get_term_by_name_vid('Site Visit', $vocabulary->vid); // Alert:  Hardcode term name
          //          $ftr->taxonomy = array($terms[0]->tid => $terms[0]);
          $term = taxonomy_term_load($reporttype);
          $ftr->title = $term->name . ' at ' . $place->title; // . " " . $placetype;
          $ftr->taxonomy_vocabulary_7[LANGUAGE_NONE][0]['tid'] = $reporttype;
          $ftr->field_ftritem_field_trip[LANGUAGE_NONE][0]['target_id'] = $fieldtripnid;
          $ftr->field_ftritem_field_trip[LANGUAGE_NONE][0]['target_type'] = 'node';
          $ftr->field_ftritem_place[LANGUAGE_NONE][0]['target_id'] = $placenid;
          $ftr->field_ftritem_place[LANGUAGE_NONE][0]['target_type'] = 'node';
          $ftr->field_ftritem_public_summary[LANGUAGE_NONE][0]['value'] = t('Please provide the public report.');
          $ftr->field_ftritem_narrative[LANGUAGE_NONE][0]['value'] = t('Please provide private notes.');
          $ftr->field_ftritem_status[LANGUAGE_NONE][0]['value'] = 'In Progress';
          $ftr->uid = $user->uid;
          $ftr->language = LANGUAGE_NONE;
          $ftr->status = 1;
          $ftr->comment = 0;

          node_save($ftr);

          // for when we go ajax messages:  $message .= "Attached the " .$place->title . ' to '. l($fieldtrip->title, 'node/'. $fieldtrip->nid);
          $message .= 'Attached location ' . $place->title . ' to ' . $fieldtrip->title;
        }
      }
    }
  }
  return $message;
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
function devtrac7_ftritem_devtrac7_progress_field_checks_info() {
  $destination = current_path();
  $query = drupal_http_build_query(drupal_get_query_parameters());
  if ($query != '') {
    $destination .= '?' . $query;
  }
  $progress_checks['devtrac7_ftritem_statusset'] = array(
    'name' => t('devtrac7_ftritem_statusset'),
    'label' => t('devtrac7_ftritem_statusset'),
    'description' => 'Change the status of the Site Report.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Status'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'edit-field-ftritem-status',
      'contextual' => FALSE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'The satus is given.',
    'fail_text' => 'You have to provide the status.',
    'function' => 'devtrac7_ftritem_statusset',
    'filename' => 'devtrac7_ftritem.inc',
    'required' => TRUE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_ftritem_latlonset'] = array(
    'name' => t('devtrac7_ftritem_latlonset'),
    'label' => t('devtrac7_ftritem_latlonset'),
    'description' => 'Change the lat-lon of the Site Report.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Lat-Lon'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'edit-field-ftritem-lat-long',
      'contextual' => TRUE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'The lat-lon is given.',
    'fail_text' => 'You have to provide the lat-lon.',
    'function' => 'devtrac7_ftritem_latlonset',
    'filename' => 'devtrac7_ftritem.inc',
    'required' => FALSE,
    'required_function' => 'devtrac7_ftritem_latlon_required',
  );
  $progress_checks['devtrac7_ftritem_imagesset'] = array(
    'name' => t('devtrac7_ftritem_imagesset'),
    'label' => t('devtrac7_ftritem_imagesset'),
    'description' => 'Change the images of the Site Report',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Images'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => NULL,
      'contextual' => TRUE,
      'override' => TRUE,
      'override_function' => '',
    ),
    'success_text' => '',
    'fail_text' => '',
    'function' => 'devtrac7_ftritem_imagesset',
    'filename' => 'devtrac7_ftritem.inc',
    'required' => FALSE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_ftritem_questionnaireset'] = array(
    'name' => t('devtrac7_ftritem_questionnaireset'),
    'label' => t('devtrac7_ftritem_questionnaireset'),
    'description' => 'Add a questionnaire to the Site Report.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Add Questionnaire'),
      'path' => 'node/%/addsubmission',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => NULL,
      'contextual' => TRUE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'Thank you for filling out the questionnaire.',
    'fail_text' => '',
    'function' => 'devtrac7_ftritem_questionnaireset',
    'filename' => 'devtrac7_ftritem.inc',
    'required' => FALSE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_ftritem_narrativeset'] = array(
    'name' => t('devtrac7_ftritem_narrativeset'),
    'label' => t('devtrac7_ftritem_narrativeset'),
    'description' => 'Change the private notes of the Site Report.',
    'finished_condition' => 'none',
    'url' => array(
    'text' => t('Edit Notes'),
    'path' => 'node/%/edit',
    'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => '',
      'contextual' => TRUE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'The private notes have been succesfully altered.',
    'fail_text' => 'You have to provide some private notes narrative.',
    'function' => 'devtrac7_ftritem_narrativeset',
    'filename' => 'devtrac7_ftritem.inc',
    'required' => FALSE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_ftritem_summaryset'] = array(
    'name' => t('devtrac7_ftritem_summaryset'),
    'label' => t('devtrac7_ftritem_summaryset'),
    'description' => 'Change the public report of the Site Report.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Public Report'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'edit-field-ftritem-public-summary',
      'contextual' => TRUE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'The public report has been provided.',
    'fail_text' => 'You have to provide a meaningful public report.',
    'function' => 'devtrac7_ftritem_summaryset',
    'filename' => 'devtrac7_ftritem.inc',
    'required' => TRUE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_ftritem_datevisitedset'] = array(
    'name' => t('devtrac7_ftritem_datevisitedset'),
    'label' => t('devtrac7_ftritem_datevisitedset'),
    'description' => 'Change the date visited of the Site Report. It has to fall inbetween the start and end date of the Field Trip.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Date Visited'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'edit-field-ftritem-date-visited',
      'contextual' => TRUE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'The date visited is given.',
    'fail_text' => 'You have to provide an appropriate date visited.',
    'function' => 'devtrac7_ftritem_datevisitedset',
    'filename' => 'devtrac7_ftritem.inc',
    'required' => TRUE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_ftritem_placeset'] = array(
    'name' => t('devtrac7_ftritem_placeset'),
    'label' => t('devtrac7_ftritem_placeset'),
    'description' => 'Change the location of the Site Report.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Location'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'edit-field-ftritem-place',
      'contextual' => TRUE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'The location is given.',
    'fail_text' => 'You have to provide the location.',
    'function' => 'devtrac7_ftritem_placeset',
    'filename' => 'devtrac7_ftritem.inc',
    'required' => FALSE,
    'required_function' => 'devtrac7_ftritem_place_required',
  );
  $progress_checks['devtrac7_ftritem_fieldtripset'] = array(
    'name' => t('devtrac7_ftritem_fieldtripset'),
    'label' => t('devtrac7_ftritem_fieldtripset'),
    'description' => 'Change the Field Trip of the Site Report.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Fieldtrip'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'edit-field-ftritem-field-trip',
      'contextual' => TRUE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => '',
    'fail_text' => '',
    'function' => 'devtrac7_ftritem_fieldtripset',
    'filename' => 'devtrac7_ftritem.inc',
    'required' => FALSE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_ftritem_oecdcodesset'] = array(
    'name' => t('devtrac7_ftritem_oecdcodesset'),
    'label' => t('devtrac7_ftritem_oecdcodesset'),
    'description' => 'Change the sectors of the Site Report.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Sectors'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'edit-taxonomy-vocabulary-8',
      'contextual' => TRUE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'The sectors are given.',
    'fail_text' => 'You have to provide at least one sectors.',
    'function' => 'devtrac7_ftritem_oecdcodesset',
    'filename' => 'devtrac7_ftritem.inc',
    'required' => TRUE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_ftritem_reporttypeset'] = array(
    'name' => t('devtrac7_ftritem_reporttypeset'),
    'label' => t('devtrac7_ftritem_reporttypeset'),
    'description' => 'Change the report type of the Site Report.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Report Type'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'edit-taxonomy-vocabulary-7',
      'contextual' => FALSE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'The report type is given.',
    'fail_text' => 'You have to provide the report type.',
    'function' => 'devtrac7_ftritem_reporttypeset',
    'filename' => 'devtrac7_ftritem.inc',
    'required' => TRUE,
    'required_function' => '',
  );
/*
  $progress_checks['devtrac7_ftritem_districtset'] = array(
    'name' => t('devtrac7_ftritem_districtset'),
    'label' => t('devtrac7_ftritem_districtset'),
    'description' => 'Change the district of the Site Report.',
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
    'function' => 'devtrac7_ftritem_districtset',
    'filename' => 'devtrac7_ftritem.inc',
    'required' => FALSE,
    'required_function' => 'devtrac7_ftritem_district_required',
  );
 */
  $progress_checks['devtrac7_ftritem_placetypeset'] = array(
    'name' => t('devtrac7_ftritem_placetypeset'),
    'label' => t('devtrac7_ftritem_placetypeset'),
    'description' => 'Change the location type of the Site Report.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Location Type'),
      'path' => 'node/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => 'edit-taxonomy-vocabulary-1',
      'contextual' => TRUE,
      'override' => FALSE,
      'override_function' => '',
    ),
    'success_text' => 'The location type is given.',
    'fail_text' => 'You have to provide the location type.',
    'function' => 'devtrac7_ftritem_placetypeset',
    'filename' => 'devtrac7_ftritem.inc',
    'required' => FALSE,
    'required_function' => 'devtrac7_ftritem_placetype_required',
  );
/*
  $progress_checks['devtrac7_ftritem_buttonset'] = array(
    'name' => t('devtrac7_ftritem_buttonset'),
    'label' => t('devtrac7_ftritem_buttonset'),
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
    'function' => 'devtrac7_ftritem_buttonset',
    'filename' => 'devtrac7_ftritem.inc',
    'required' => FALSE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_ftritem_progressbarset'] = array(
    'name' => t('devtrac7_ftritem_progressbarset'),
    'label' => t('devtrac7_ftritem_progressbarset'),
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
    'function' => 'devtrac7_ftritem_progressbarset',
    'filename' => 'devtrac7_ftritem.inc',
    'required' => FALSE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_ftritem_progresslinksset'] = array(
    'name' => t('devtrac7_ftritem_progresslinksset'),
    'label' => t('devtrac7_ftritem_progresslinksset'),
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
    'function' => 'devtrac7_ftritem_progresslinksset',
    'filename' => 'devtrac7_ftritem.inc',
    'required' => FALSE,
    'required_function' => '',
  );
 */
  $progress_checks['referencing_fields'] = array('field_actionitem_ftreportitem');
  return $progress_checks;
}
