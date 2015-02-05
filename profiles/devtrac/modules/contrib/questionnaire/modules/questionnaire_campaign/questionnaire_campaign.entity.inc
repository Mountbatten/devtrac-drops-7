<?php

/**
 * @file
 * Questionnaire Campaign entity.
 */

class QuestionnaireCampaign extends Entity {
  public $title;
  public $id;
  public $created;
  public $lastrun;
  public $repeat_interval;
  public $nid;
  public $userlist_provider;
  public $userlist_id;
  public $sender; // This needs renaming $sender_handler.
  public $enabled = 0;
  public $options = array();

  // List of keys that will be stored in the $options array.
  public static $options_keys = array(
    'questionnaire_field' => 'questionnaire_field',
    'userlist_options' => 'userlist_options',
    'sending_options' => 'sending_options',
  );

  /**
   * Overloading for options.
   */
  function __set($name, $value) {
    if (array_key_exists($name, self::$options_keys)) {
      $this->options[$name] = $value;
    }
    else {
      $this->$name = $value;
    }
  }

  /**
   * Overloading for options.
   */
  function __get($name) {
    if (array_key_exists($name, $this->options)) {
      return $this->options[$name];
    }

    $trace = debug_backtrace();
    trigger_error('Undefined property via __get(): ' . $name . ' in ' . $trace[0]['file'] . ' on line ' . $trace[0]['line'], E_USER_NOTICE);
  }

  /**
   * Overloading for options.
   */
  function __isset($name) {
    return array_key_exists($name, $this->options);
  }

  /**
   * Overloading for options.
   */
  function __unset($name) {
    unset($this->options[$name]);
  }

  /**
   * Additional default to parent::save().
   */
  function save() {
    if (empty($this->id) && empty($this->created)) {
      $this->created = time();
    }
    parent::save();
  }

  /**
   * Run campaign.
   */
  function run() {
    // Get the list of recipients.
    $userlist_provider = questionnaire_campaign_get_userlist_provider($this->userlist_provider);
    $users = $userlist_provider->getList($this);
    if (count($users)) {
      // Send (or queue) the questionnaire.
      $sending_handler = questionnaire_campaign_get_sending_handler($this->sender);
      $sending_handler->send($this, $users);
    }
    // Update the run time.
    $this->lastrun = time();
    $this->save();
  }
}
