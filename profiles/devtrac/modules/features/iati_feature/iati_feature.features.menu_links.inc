<?php
/**
 * @file
 * iati_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function iati_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_activities:activities
  $menu_links['main-menu_activities:activities'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'activities',
    'router_path' => 'activities',
    'link_title' => 'Activities',
    'options' => array(
      'identifier' => 'main-menu_activities:activities',
      'attributes' => array(
        'class' => array(
          0 => 'purl_search_api_noreset',
        ),
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_organisations:organisations
  $menu_links['main-menu_organisations:organisations'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'organisations',
    'router_path' => 'organisations',
    'link_title' => 'Organisations',
    'options' => array(
      'identifier' => 'main-menu_organisations:organisations',
      'attributes' => array(
        'class' => array(
          0 => 'purl_search_api_noreset',
        ),
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Activities');
  t('Organisations');

  return $menu_links;
}
