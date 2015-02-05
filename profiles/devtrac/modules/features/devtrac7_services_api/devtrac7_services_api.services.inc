<?php
/**
 * @file
 * devtrac7_services_api.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function devtrac7_services_api_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'api';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'api';
  $endpoint->authentication = array(
    'services' => 'services',
  );
  $endpoint->server_settings = array(
    'formatters' => array(
      'bencode' => TRUE,
      'json' => TRUE,
      'jsonp' => TRUE,
      'php' => TRUE,
      'rss' => TRUE,
      'xml' => TRUE,
      'yaml' => TRUE,
    ),
    'parsers' => array(
      'application/json' => TRUE,
      'application/vnd.php.serialized' => TRUE,
      'application/x-www-form-urlencoded' => TRUE,
      'application/x-yaml' => TRUE,
      'multipart/form-data' => TRUE,
    ),
  );
  $endpoint->resources = array(
    'questionnaire' => array(
      'actions' => array(
        'submit' => array(
          'enabled' => 1,
        ),
      ),
    ),
    'comment' => array(
      'operations' => array(
        'create' => array(
          'enabled' => 1,
        ),
        'retrieve' => array(
          'enabled' => 1,
        ),
      ),
      'actions' => array(
        'countAll' => array(
          'enabled' => 1,
        ),
        'countNew' => array(
          'enabled' => 1,
        ),
      ),
    ),
    'devtracuser' => array(
      'actions' => array(
        'login' => array(
          'enabled' => '1',
        ),
      ),
    ),
    'file' => array(
      'operations' => array(
        'create' => array(
          'enabled' => 1,
        ),
      ),
    ),
    'node' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => 1,
        ),
        'create' => array(
          'enabled' => 1,
        ),
        'update' => array(
          'enabled' => 1,
        ),
        'delete' => array(
          'enabled' => 1,
        ),
        'index' => array(
          'enabled' => 1,
        ),
      ),
      'relationships' => array(
        'files' => array(
          'enabled' => 1,
        ),
        'comments' => array(
          'enabled' => 1,
        ),
      ),
    ),
    'system' => array(
      'actions' => array(
        'connect' => array(
          'enabled' => 1,
        ),
      ),
    ),
    'user' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => 1,
        ),
      ),
      'actions' => array(
        'login' => array(
          'enabled' => 1,
        ),
        'logout' => array(
          'enabled' => 1,
        ),
      ),
    ),
    'views' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => 1,
        ),
      ),
    ),
  );
  $endpoint->debug = 1;
  $export['api'] = $endpoint;

  return $export;
}
