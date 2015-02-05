<?php

/**
 * @file
 * CKAN package REST callbacks for CKAN API 2.0
 */

/**
 * View callback for retrieving 1 package.
 */
function ckan_packages_retrieve($package_id) {
  // @todo site specific defaults. Remove; make variable. Create admin settings
  // page for 'any' defaults.
  $defaults = array(
    'maintainer' => variable_get('ckan_packages_maintainer', variable_get('site_name', '')),
    'maintainer_email' => variable_get('ckan_packages_maintainer_email', variable_get('site_mail', '')),
    'license' => variable_get('ckan_packages_license', 'cc-by-sa'),
    'extras' => new stdClass(),
  );

  list($plugin_id, $package_name) = explode('--', $package_id);
  $plugin = _ckan_packages_get_plugin('packages', $plugin_id);
  $package = $plugin->retrieve($package_name);
  if (! $package) {
    return 'Not found';
  }
  // For API v2 the name called for the rest retrieve must be the (uu)id.
  // This is fast work-around.
  $package['id'] = $package_id;
  $package['name'] = $package_id;
  $package['num_tags'] = count($package['tags']);
  $package['num_resources'] = count($package['resources']);
  $package += $defaults;
  return $package;
}

/**
 * Package list callback.
 */
function ckan_packages_list() {
  $packages = array();
  $append_function = function(&$package_name, $key, $plugin_id) {
    $package_name = $plugin_id . '--' . $package_name;
  };
  $plugins = _ckan_packages_get_plugin('packages');
  foreach ($plugins as $plugin_id => $plugin) {
    $plugin_index = $plugin->index();
    array_walk($plugin_index, $append_function, $plugin_id);
    $packages = array_merge($packages, $plugin_index);
  }
  return $packages;
}

/**
 * Implements hook_default_services_endpoint().
 */
function ckan_packages_default_services_endpoint() {
  $endpoints = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE;
  $endpoint->api_version = 3;
  $endpoint->name = 'ckan_v2';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'rest';
  $endpoint->authentication = array();
  $endpoint->server_settings = array(
    'formatters' => array(
      'json' => TRUE,
      'bencode' => FALSE,
      'jsonp' => FALSE,
      'php' => FALSE,
      'xml' => FALSE,
    ),
    'parsers' => array(
      'application/json' => TRUE,
      'application/vnd.php.serialized' => FALSE,
      'application/x-www-form-urlencoded' => FALSE,
      'application/xml' => FALSE,
      'multipart/form-data' => FALSE,
      'text/xml' => FALSE,
    ),
  );
  $endpoint->resources = array(
    'dataset' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
        ),
        'index' => array(
          'enabled' => '1',
        ),
      ),
    ),
  );
  $endpoint->debug = FALSE;

  $endpoints[] = $endpoint;
  return $endpoints;
}
