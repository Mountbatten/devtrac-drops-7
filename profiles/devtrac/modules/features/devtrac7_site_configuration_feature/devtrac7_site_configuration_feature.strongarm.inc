<?php
/**
 * @file
 * devtrac7_site_configuration_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function devtrac7_site_configuration_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_safe_threshold';
  $strongarm->value = '0';
  $export['cron_safe_threshold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'globalredirect_case_sensitive_urls';
  $strongarm->value = '1';
  $export['globalredirect_case_sensitive_urls'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'globalredirect_deslash';
  $strongarm->value = '1';
  $export['globalredirect_deslash'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'globalredirect_menu_check';
  $strongarm->value = '-1';
  $export['globalredirect_menu_check'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'globalredirect_nonclean2clean';
  $strongarm->value = '1';
  $export['globalredirect_nonclean2clean'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'globalredirect_settings';
  $strongarm->value = array(
    'trailing_zero' => 2,
    'menu_check' => 1,
    'canonical' => 1,
    'content_location_header' => 1,
  );
  $export['globalredirect_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'globalredirect_trailingzero';
  $strongarm->value = '-1';
  $export['globalredirect_trailingzero'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_admin_version';
  $strongarm->value = '1.5';
  $export['jquery_update_jquery_admin_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.8';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mapit_discard_ids';
  $strongarm->value = '0';
  $export['mapit_discard_ids'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mapit_discard_types';
  $strongarm->value = 'OLC';
  $export['mapit_discard_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mapit_flag';
  $strongarm->value = 'field_svg_data';
  $export['mapit_flag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mapit_geofield';
  $strongarm->value = 'field_district_geo';
  $export['mapit_geofield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mapit_longname';
  $strongarm->value = 'field_long_name';
  $export['mapit_longname'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mapit_osm_id';
  $strongarm->value = 'field_osm_id';
  $export['mapit_osm_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mapit_osm_rel';
  $strongarm->value = 'field_osm_relation_id';
  $export['mapit_osm_rel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mapit_osm_type';
  $strongarm->value = 'field_osm_type';
  $export['mapit_osm_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mapit_vocabulary';
  $strongarm->value = 'vocabulary_6';
  $export['mapit_vocabulary'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mapit_wikipedia';
  $strongarm->value = 'field_wikipedia';
  $export['mapit_wikipedia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_cache';
  $strongarm->value = 0;
  $export['piwik_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_codesnippet_after';
  $strongarm->value = '';
  $export['piwik_codesnippet_after'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_codesnippet_after_backup_7202';
  $strongarm->value = '';
  $export['piwik_codesnippet_after_backup_7202'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_codesnippet_before';
  $strongarm->value = '';
  $export['piwik_codesnippet_before'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_codesnippet_before_backup_7202';
  $strongarm->value = '';
  $export['piwik_codesnippet_before_backup_7202'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_custom';
  $strongarm->value = '0';
  $export['piwik_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_custom_var';
  $strongarm->value = array(
    'slots' => array(
      1 => array(
        'slot' => 1,
        'name' => '',
        'value' => '',
        'scope' => 'visit',
      ),
      2 => array(
        'slot' => 2,
        'name' => '',
        'value' => '',
        'scope' => 'visit',
      ),
      3 => array(
        'slot' => 3,
        'name' => '',
        'value' => '',
        'scope' => 'visit',
      ),
      4 => array(
        'slot' => 4,
        'name' => '',
        'value' => '',
        'scope' => 'visit',
      ),
      5 => array(
        'slot' => 5,
        'name' => '',
        'value' => '',
        'scope' => 'visit',
      ),
    ),
  );
  $export['piwik_custom_var'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_domain_mode';
  $strongarm->value = '0';
  $export['piwik_domain_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_js_scope';
  $strongarm->value = 'footer';
  $export['piwik_js_scope'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_pages';
  $strongarm->value = 'admin
admin/*
batch
node/add*
node/*/*
user/*/*';
  $export['piwik_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_page_title_hierarchy';
  $strongarm->value = 0;
  $export['piwik_page_title_hierarchy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_page_title_hierarchy_exclude_home';
  $strongarm->value = 1;
  $export['piwik_page_title_hierarchy_exclude_home'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_privacy_donottrack';
  $strongarm->value = 1;
  $export['piwik_privacy_donottrack'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_roles';
  $strongarm->value = array(
    1 => '1',
    5 => '5',
    3 => 0,
    2 => 0,
    4 => 0,
    6 => 0,
  );
  $export['piwik_roles'] = $strongarm;
/*
  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially *//*
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_site_id';
  $strongarm->value = '11';
  $export['piwik_site_id'] = $strongarm;
*/
  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_site_search';
  $strongarm->value = 0;
  $export['piwik_site_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_track';
  $strongarm->value = 1;
  $export['piwik_track'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_trackfiles_extensions';
  $strongarm->value = '7z|aac|arc|arj|asf|asx|avi|bin|csv|doc|exe|flv|gif|gz|gzip|hqx|jar|jpe?g|js|mp(2|3|4|e?g)|mov(ie)?|msi|msp|pdf|phps|png|ppt|qtm?|ra(m|r)?|sea|sit|tar|tgz|torrent|txt|wav|wma|wmv|wpd|xls|xml|z|zip';
  $export['piwik_trackfiles_extensions'] = $strongarm;
/*
  $strongarm = new stdClass();
  $strongarm->disabled = TRUE; /* Edit this to true to make a default strongarm disabled initially *//*
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_url_http';
  $strongarm->value = 'http://piwik.mountbatten.net/';
  $export['piwik_url_http'] = $strongarm;
*//*
  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially *//*
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_url_https';
  $strongarm->value = '';
  $export['piwik_url_https'] = $strongarm;
*/
  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_visibility_pages';
  $strongarm->value = '0';
  $export['piwik_visibility_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_visibility_roles';
  $strongarm->value = '0';
  $export['piwik_visibility_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'robotstxt';
  $strongarm->value = '#
# robots.txt
#
# This file is to prevent the crawling and indexing of certain parts
# of your site by web crawlers and spiders run by sites like Yahoo!
# and Google. By telling these "robots" where not to go on your site,
# you save bandwidth and server resources.
#
# This file will be ignored unless it is at the root of your host:
# Used:    http://example.com/robots.txt
# Ignored: http://example.com/site/robots.txt
#
# For more information about the robots.txt standard, see:
# http://www.robotstxt.org/wc/robots.html
#
# For syntax checking, see:
# http://www.sxw.org.uk/computing/robots/check.html

User-agent: *
Crawl-delay: 10
# Directories
Disallow: /includes/
Disallow: /misc/
Disallow: /modules/
Disallow: /profiles/
Disallow: /scripts/
Disallow: /themes/
# Files
Disallow: /CHANGELOG.txt
Disallow: /cron.php
Disallow: /INSTALL.mysql.txt
Disallow: /INSTALL.pgsql.txt
Disallow: /INSTALL.sqlite.txt
Disallow: /install.php
Disallow: /INSTALL.txt
Disallow: /LICENSE.txt
Disallow: /MAINTAINERS.txt
Disallow: /update.php
Disallow: /UPGRADE.txt
Disallow: /xmlrpc.php
# Paths (clean URLs)
Disallow: /admin/
Disallow: /comment/reply/
Disallow: /filter/tips/
Disallow: /node/add/
Disallow: /search/
Disallow: /user/register/
Disallow: /user/password/
Disallow: /user/login/
Disallow: /user/logout/
# Paths (no clean URLs)
Disallow: /?q=admin/
Disallow: /?q=comment/reply/
Disallow: /?q=filter/tips/
Disallow: /?q=node/add/
Disallow: /?q=search/
Disallow: /?q=user/password/
Disallow: /?q=user/register/
Disallow: /?q=user/login/
Disallow: /?q=user/logout/

Disallow /sitereports
Disallow: /?q=sitereports
Disallow /statistics/answers
Disallow: /?q=statistics/answers';
  $export['robotstxt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'special_menu_items_nolink_tag';
  $strongarm->value = '<a href="#">';
  $export['special_menu_items_nolink_tag'] = $strongarm;

  return $export;
}
