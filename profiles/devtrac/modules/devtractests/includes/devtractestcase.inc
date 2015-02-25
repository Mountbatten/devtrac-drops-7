<?php

/**
 * @file
 * The Devtrac Test Case class.
 */

class DevtracTestCase extends SimpleTestCloneTestCase {
  protected $manager;
  protected $administrator;
  protected $fieldworker;

  /**
   * Create an administrative user.
   */
  public function drupalCreateAdminUser(array $permissions = array()) {
    $roles = user_roles();
    $index = array_search('administrator', $roles);
    $user = $this->drupalCreateUser($permissions);
    $user->roles[$index] = 'administrator';
    return user_save($user);
  }

  /**
   * Creates a user with the given role.
   */
  public function drupalCreateUserWithRole($role) {
    $roles = user_roles();
    $rid = array_search($role, $roles);

    // Create a user assigned to that role.
    $edit = array();
    $edit['name'] = $this->randomName();
    $edit['mail'] = $edit['name'] . '@example.com';
    $edit['pass'] = user_password();
    $edit['status'] = 1;
    if ($rid) {
      $edit['roles'] = array($rid => $rid);
    }
    $account = user_save(drupal_anonymous_user(), $edit);

   $this->assertTrue(!empty($account->uid), t('User created with name %name and pass %pass', array('%name' => $edit['name'], '%pass' => $edit['pass'])), t('User login'));
    if (empty($account->uid)) {
      return FALSE;
    }

    // Add the raw password so that we can log in as this user.
    $account->pass_raw = $edit['pass'];
    return $account;
  }

  /**
   * Click link using it's xpath.
   */
  public function clickLinkUsingXpath($label, $index, $linkxpath) {
    $url_before = $this->getUrl();
    $urls = $this->xpath($linkxpath);
    if (isset($urls[$index])) {
      $url_target = $this->getAbsoluteUrl($urls[$index]['href']);
      $this->pass(t('Clicked link %label (@url_target) from @url_before',
        array(
          '%label' => $label,
          '@url_target' => $url_target,
          '@url_before' => $url_before)),
        t('Devtrac'));
      $this->drupalGet($url_target);
    }
    else {
      $this->fail(t('%label Link does not exist on @url_before', array('%label' => $label, '@url_before' => $url_before)), t('Devtrac'));
    }
  }

  /**
   * Asserts that the given pattern is not in the body .
   */
  public function assertNoPatternInBody($pattern, $message, $group) {
    $body = strstr($this->drupalGetContent(), '<body');
    // $this->verbose($body);
    $this->assert(!preg_match($pattern, $body), $message, $group);
  }

  /**
   * Asserts that the facets in the right sidebar are in the correct order
   */
  public function assertFacetOrder($order, $message, $group) {
    // $sidebar = strstr($this->drupalGetContent(), '<div class="region-inner region-sidebar-first-inner">');
    $start = strpos($this->drupalGetContent(), '<aside class="grid-3 region region-sidebar-first" id="region-sidebar-first">');
    $cutoff = strpos($this->drupalGetContent(), '</aside><div class="grid-9 region region-content" id="region-content">');
    $length = $cutoff - $start;
    $sidebar = substr($this->drupalGetContent(), $start, $length);
    // $this->verbose($sidebar);
    $matches = array();
    preg_match_all('/<h2[ a-zA-z="->]*/', $sidebar, $result);
    $result = reset($result);
    // $this->verbose(var_export($result, TRUE));
    foreach($result as $match) {
      $match = strstr($match, '</h2>', true);
      $match = strstr($match, '>');
      $match = substr($match, 1);
      array_push($matches, $match);
    }
    $this->verbose(var_export($matches, TRUE));
    // $this->verbose(var_export($order, TRUE));
    $this->assert($matches === $order, $message, $group);
  }

  /**
   * Asserts the correct column count in a CSV.
   */
  public function assertColumnCount($length, $columns) {
    $column_names_line = substr($this->drupalGetContent(), 0, $length);
    $column_names = preg_split("/[,]+/", $column_names_line);
    // $this->verbose(var_export($column_names, TRUE));
    if (count($column_names) == $columns) {
      $this->pass(t('CSV Column count is correct.'), t('Devtrac'));
    }
    else {
      $this->fail(t('CSV Column Count is wrong.'), t('Devtrac'));
    }
  }

  /**
   * Reindexes a Search API Index.
   */
  public function reindex($url) {
    $this->drupalPost($url, NULL, t('Clear all indexed data'));
    $this->drupalPost(NULL, NULL, t('Confirm'));
    $this->drupalPost(NULL, NULL, t('Index now'));
  }
  
  /**
   * Enables Demo Data.
   */
  public function enableDemoData() {

    // Enabling demo data.
    $this->drupalGet('admin/apps/devtrac/devtrac_to_devtrac_importer/details');
    $this->clickLink('Enable App', 0);
    $this->assertText('Enabled Devtrac to Devtrac Importers app', t('Enabled Devtrac to Devtrac Importers app'), t('Devtrac'));
    $this->clickLink('Configure', 0);
    $this->drupalPost(NULL, NULL, t('Enable Demo Content'));
    $this->assertText('All Data has been imported. It will take a little while before the data will appear on the overview pages.', t('All Data has been imported. It will take a little while before the data will appear on the overview pages.'), t('Devtrac'));

    // Adding Admin Unit tags.
    $this->drupalGet('admin/structure/taxonomy/district_category/add');
    $tag1['name'] = 'Tag 1';
    $this->drupalPost(NULL, $tag1, t('Save'));
    $tag2['name'] = 'Tag 2';
    $this->drupalPost(NULL, $tag2, t('Save'));
    $this->drupalGet('admin/structure/taxonomy/district_category');

    // Running cron twice so mapit can lookup the admin units.
    $this->cronRun();
    $this->drupalGet('');
    $this->cronRun();

    $this->drupalGet('admin/structure/taxonomy/vocabulary_6');
    $this->clickLink('edit', 12);
    $tag['field_district_category[und]'] = 'Tag 1';
    $this->drupalPost(NULL, $tag, t('Save'));
    $this->clickLink('Amudat');
    $this->assertRaw('<div class="field-label">Tags:&nbsp;</div><div class="field-items"><div class="field-item even">Tag 1</div></div></div></div>', t('Amudat district tagged correctly.'), t('Devtrac'));

    $this->reindex('admin/config/search/search_api/index/devtrac_solr_field_trip_index');
    $this->reindex('admin/config/search/search_api/index/devtrac_solr_action_items_index');
    $this->reindex('admin/config/search/search_api/index/devtrac_solr_locations_index');
    $this->reindex('admin/config/search/search_api/index/devtrac_solr_site_visits_index');
    $this->reindex('admin/config/search/search_api/index/devtrac7_user_index');
    // $this->drupalGet('district/uganda/amudat');
  }

  /**
   * Fill in a users profile.
   */
  public function fillInProfile($manageruid, $function, $department, $firstname, $lastname, $about, $district, $sector) {
    $this->clickLink(t('Edit My Profile'), 0);
    // Fill in the required fields for the profile.
    $manager_account = user_load($manageruid);
    $profile['taxonomy_vocabulary_5[und]'] = $function;
    $profile['field_user_superior[und][0][target_id]'] = $manager_account->name . ' (' . $manageruid . ')';
    $profile['taxonomy_vocabulary_4[und]'] = $department;
    $profile['field_user_firstname[und][0][value]'] = $firstname;
    $profile['field_user_surname[und][0][value]'] = $lastname;
    $profile['field_user_aboutme[und][0][value]'] = $about;
    $profile['taxonomy_vocabulary_6[und][]'] = $district;
    $profile['taxonomy_vocabulary_8[und][]'] = $sector;
    $this->drupalPost(NULL, $profile, t('Save'));
  }

  /**
   * Edits a users profile.
   */
  public function editUserProfile($userid, $manageruid, $function, $department, $firstname, $lastname, $about, $district, $sector) {
    $this->clickLink(t('Admin'), 0);
    $this->clickLink(t('People'), 0);
    $this->assertLinkByHref('user/' . $userid . '/edit', 0);
    // Fill in the required fields for the profile.
    $manager_account = user_load($manageruid);
    $profile['taxonomy_vocabulary_5[und]'] = $function;
    $profile['field_user_superior[und][0][target_id]'] = $manager_account->name . ' (' . $manageruid . ')';
    $profile['taxonomy_vocabulary_4[und]'] = $department;
    $profile['field_user_firstname[und][0][value]'] = $firstname;
    $profile['field_user_surname[und][0][value]'] = $lastname;
    $profile['field_user_aboutme[und][0][value]'] = $about;
    $profile['taxonomy_vocabulary_6[und][]'] = $district;
    $profile['taxonomy_vocabulary_8[und][]'] = $sector;
    $this->drupalPost('user/' . $userid . '/edit', $profile, t('Save'));
  }

  /**
   * Add a Field Trip.
   */
  public function addAFieldtrip($title, $tags, $purpose, $percentage, $startdate = NULL, $enddate = NULL) {
    $this->clickLink('Add Field Trip', 0);
    $fieldtrip['title'] = $title;
    $fieldtrip['field_fieldtriptags[und]'] = $tags;
    $fieldtrip['field_fieldtrip_fc_purpose[und][0][field_fieldtrip_fc_purpose_purps][und]'] = $purpose;
    $fieldtrip['field_fieldtrip_fc_purpose[und][0][field_fieldtrip_purpose_percent][und][0][value]'] = $percentage;
    if (isset($startdate)) {
      $fieldtrip['field_fieldtrip_start_end_date[und][0][value][date]'] = $startdate;
    }
    if (isset($enddate))  {
      $fieldtrip['field_fieldtrip_start_end_date[und][0][value2][date]'] = $enddate;
    }
    $this->drupalPost(NULL, $fieldtrip, t('Save'));
  }

  /**
   * Create a Site Visit.
   */
  public function addASiteVisit($district, $locationname, $locationtype, $lat, $lon) {
    $this->clickLink('Add Site Report');
    $sitereporttype['district'] = $district;
    $sitereporttype['reporttype'] = '2';
    $this->drupalPost(NULL, $sitereporttype, t('Submit'));
    $location['title'] = $locationname;
    $location['taxonomy_vocabulary_1[und][0][tid]'] = $locationtype;
    $location['field_place_lat_long[und][0][geom]'] = 'POINT(' . $lon . ' ' . $lat . ')';
    $this->drupalPost(NULL, $location, t('Save'));
  }

  
  /**
   * Edit a Site Visit.
   */
  public function editASiteVisit($title = NULL, $locationtype = NULL, $sector = NULL, $visitedon = NULL, $report = NULL, $notes = NULL) {
    $this->clickLink('Edit', 0);
    if (isset($title)) {
      $edit['title'] = $title;
    }
    if (isset($locationtype)) {
      $edit['taxonomy_vocabulary_1[und][0][tid]'] = $locationtype;
    }
    if (isset($sector)) {
      $edit['taxonomy_vocabulary_8[und][]'] = $sector;
    }
    if (isset($visitedon)) {
      $edit['field_ftritem_date_visited[und][0][value][date]'] = $visitedon;
    }
    if (isset($report)) {
      $edit['field_ftritem_public_summary[und][0][value]'] = $report;
    }
    if (isset($notes)) {
      $edit['field_ftritem_narrative[und][0][value]'] = $notes;
    }
    if (isset($edit)) {
      $this->drupalPost(NULL, $edit, t('Save'));
    }
  }

  /**
   * Adds images to a Site Visit.
   */
  public function addImagestoSiteVisit($images) {
    if (is_array($images)) {
      for($ctr=0; $ctr < count($images); $ctr++) {
        $this->clickLink('Edit', 0);
        $attach['media[field_ftritem_images_und_' . $ctr . ']'] = $images[$ctr];
        $this->drupalPost(NULL, $attach, t('Save'));
        array_shift($attach);
      }
    }
    else {
      $this->clickLink('Edit', 0);
      $attach['media[field_ftritem_images_und_0]'] = $images;
      $this->drupalPost(NULL, $attach, t('Save'));
    }
  }
  /**
   * Add an Action Item.
   */
  public function addAnActionItem($title, $sector, $followuptask, $status = NULL, $priority = NULL, $duedate = NULL, $responsible = NULL, $report = NULL) {
    $this->clickLink('Add Actionitem', 0);
    $actionitem['title'] = $title;
    $actionitem['taxonomy_vocabulary_8[und][]'] = $sector;
    if (isset($status)) {
      $actionitem['field_actionitem_status[und]'] = $status;
    }
    if (isset($priority)) {
      $actionitem['field_actionitem_severity[und]'] = $priority;
    }
    if (isset($duedate)) {
      $actionitem['field_actionitem_due_date[und][0][value][date]'] = $duedate;
    }
    if (isset($responsible)) {
      if (is_array($responsible)) {
        for( $ctr=0; $ctr < count($responsible); $ctr++) {
          $actionitem['field_actionitem_responsible[und][' . $ctr . '][target_id]'] = $responsible[$ctr];
        }
      }
      else {
        $actionitem['field_actionitem_responsible[und][0][target_id]'] = $responsible;
      }
    }
    if (isset($report)) {
      $actionitem['field_actionitem_ftreportitem[und][0][target_id]'] = $report;
    }
    $actionitem['field_actionitem_followuptask[und][0][value]'] = $followuptask;
    $this->drupalPost(NULL, $actionitem, t('Save'));
  }

  /**
   * Creates a question.
   */
  public function createQuestion($question, $type, $options = array(), $options_vocabulary = NULL, $sector = NULL, $locationtype = NULL,$related_questions = array()) {
    // $this->clickLink('Admin', 0);
    // $this->clickLink('Devtrac', 0);
    // $this->clickLink('Questionnaire', 0);
    // $this->clickLink('Edit Questions', 0);
    // $this->clickLink('Add New Question', 0);
    $this->drupalGet('node/add/questionnaire-question');
    $edit['title'] = $question;
    $edit['questionnaire_question_type[und]'] = $type;
    if (isset($options)) {
      for( $ctr=0; $ctr < count($options); $ctr++) {
        $this->drupalPostAJAX(NULL, NULL,  array('questionnaire_question_options_add_more' => t('Add another item')));
        $edit['questionnaire_question_options[und][' . $ctr . '][value]'] = $options[$ctr];
      }
    }
    if (isset($options_vocabulary)) {
      $edit['qq_options_vocabulary[und]'] = $options_vocabulary;
    }
    if (isset($sector)) {
      $edit['taxonomy_vocabulary_8[und][]'] = $sector;
    }
    if (isset($locationtype)) {
      $edit['taxonomy_vocabulary_1[und][0][tid]'] = $locationtype;
    }
    if (isset($related_questions)) {
      for( $ctr=0; $ctr < count($related_questions); $ctr++) {
        $edit['field_related_questions[und][' . $ctr . '][target_id]'] = $related_questions[$ctr];
        $this->drupalPostAJAX(NULL, NULL,  array('field_related_questions_add_more' => t('Add another item')));
      }
    }
    $this->drupalPost(NULL, $edit, t('Save'));
  }

  /**
   * Basic test setup required for a fieldworker.
   */
   public function setUpFieldWorker() {
    // $this->manager = $this->drupalCreateAdminUser();
    $this->administrator = $this->drupalCreateAdminUser();
    $this->drupalLogin($this->administrator);

    // Enabling demo data.
    $this->enableDemoData();
    // Edit User 1's profile.
    $this->drupalGet('');
    $this->editUserProfile('1', '1', '11', '16', 'Site', 'Admin', '...', '308', '57');
    // Add a tag to the first image.
    $tag['field_taxonomy_image_tags[und]'] = 'Image Tag 1';
    $this->drupalPost('file/1/edit', $tag, t('Save'));

    // Add questions.
    $this->createQuestion('How would you rate this school?', 'radios', $options = array('Good', 'Mediocre', 'Bad'), NULL, '57', '286', array());
    $this->createQuestion('Any further comments about this school?', 'open', array(), NULL, '57', '286', array());
    $this->createQuestion('How would you rate this water point?', 'select', $options = array('Good', 'Mediocre', 'Bad'), NULL, '85', '261', array());
    $this->drupalLogout();

    // Create a field worker.
    $this->fieldworker = $this->drupalCreateUserWithRole('field worker');
    $this->drupalLogin($this->fieldworker);
    $this->fillInProfile($this->administrator->uid, '11', '16', 'Test', 'Fieldworker', '...', '306', '57');

    // Create a Site Report for edit button test.
    $this->addAFieldtrip('Test Title', 'Test Tag', '9', 100, '01/02/2015');
    $this->addASiteVisit('3', 'test location', '286', '0.5564815500152875', '32.70449822231746');
    
    $this->clickLink('Site Reports', 1);
    $this->clickLink('Site Visit at test location', 0);
    $this->editASiteVisit(NULL, NULL, '57', NULL, NULL, NULL);
    $this->addImagestoSiteVisit(array('1', '2', '3'));
    $this->clickLink('Add Questionnaire');
    $answers['30'] = "Needs more books in the library.";
    $answers['29'] = "Mediocre";
    $this->drupalPost(NULL, $answers, t('Submit'));
    $this->clickLink('Add Questionnaire');
    $answers['30'] = "Needs better books in the library.";
    $answers['29'] = "Mediocre";
    $this->drupalPost(NULL, $answers, t('Submit'));
    $this->addAnActionItem('Test Action Item', '57', 'Testing presence of Edit button.');
    $this->clickLink('Site Reports', 0);
    $this->clickLink('List', 0);
    $this->clickLink('Site Visit at Loroo Piped Water', 0);
    $this->clickLink('Add Questionnaire');
    $answers2['31'] = "Mediocre";
    $this->drupalPost(NULL, $answers2, t('Submit'));
   }
}
