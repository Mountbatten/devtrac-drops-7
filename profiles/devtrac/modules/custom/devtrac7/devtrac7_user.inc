<?php

/**
 * @file
 * An include file with user specific devtrac functionality.
 */

/**
 * Implements progress check on the user profile edit link.
 * 
 * @param object $account
 *   The user account object to perform the progres check on.
 * @return boolean
 *   Returns whether or not the user profile is complete.
 */
function devtrac7_user_edit_profile($account) {
	// Always return FALSE so it will always is marked as not
	// complete to have it always show up in the progress button.
  return FALSE;
}

/**
 * Implements the override function on the user profile edit link.
 * 
 * @return boolean
 *   Returns whether or not the current page
 *   is the current user's profile page.
 */
function devtrac7_user_edit_profile_override() {
  global $user;
  $path = explode("/", $_GET['q']);
  $uid = $path[1];
  if (($path[0] == 'user') && is_numeric($uid) && ($user->uid == $uid)) {
  	return TRUE;
  }
  return FALSE;
}

/**
 * Implements progress check on the user contact link.
 * 
 * @param object $account
 *   The user account object to perform the progres check on.
 * @return boolean
 *   Returns whether or not the user is allowed to
 *   be contacted through the user contact form.
 */
function devtrac7_user_contact($account) {
	// Always return FALSE so it will always is marked as not
	// complete to have it always show up in the progress button.
    return FALSE;
}

/**
 * Implements the override function on the user contact link.
 * 
 * @return boolean
 *   Returns whether or not the current page is a user profile page
 *   and the current user is allowed to access the user contact form.
 */
function devtrac7_user_contact_override() {
  global $user;
  $path = explode("/", $_GET['q']);
  $uid = $path[1];
  if (($path[0] == 'user') && is_numeric($uid) && user_access("access user contact forms", $user)) {
    return TRUE;
  }
  return FALSE;
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
function devtrac7_user_devtrac7_progress_field_checks_info() {
  $progress_checks['devtrac7_user_edit_profile'] = array(
    'name' => t('devtrac7_user_edit_profile'),
    'label' => t('devtrac7_user_edit_profile'),
    'description' => 'Edit my user profile',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit'),
      'path' => 'user/%/edit',
      'attributes' => array(),
      'query' => array(
        'destination' => 'user',
      ),
      'fragment' => '',
      'contextual' => TRUE,
      'override' => TRUE,
      'override_function' => 'devtrac7_user_edit_profile_override',
    ),
    'success_text' => 'Successfully edited user profile.',
    'fail_text' => 'Failed to edit user profile.',
    'function' => 'devtrac7_user_edit_profile',
    'filename' => 'devtrac7_user.inc',
    'required' => TRUE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_user_contact'] = array(
    'name' => t('devtrac7_user_contact'),
    'label' => t('devtrac7_user_contact'),
    'description' => 'Contact the user',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Contact'),
      'path' => 'user/%/contact',
      'attributes' => array(),
      'query' => array(
        'destination' => 'user',
      ),
      'fragment' => '',
      'contextual' => TRUE,
      'override' => TRUE,
      'override_function' => 'devtrac7_user_contact_override',
    ),
    'success_text' => 'Successfully contacted the user.',
    'fail_text' => 'Failed to contact the user.',
    'function' => 'devtrac7_user_contact',
    'filename' => 'devtrac7_user.inc',
    'required' => TRUE,
    'required_function' => '',
  );
  return $progress_checks;
}
