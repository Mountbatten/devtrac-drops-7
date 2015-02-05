<?php
/**
 * @file
 * devtrac7_theme_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function devtrac7_theme_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_all_pages';
  $context->description = 'Blocks that are active on all pages';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nice_menus-1' => array(
          'module' => 'nice_menus',
          'delta' => '1',
          'region' => 'menu',
          'weight' => '-71',
        ),
        'nice_menus-2' => array(
          'module' => 'nice_menus',
          'delta' => '2',
          'region' => 'featured',
          'weight' => '0',
        ),
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-75',
        ),
        'pane-credit_footer_block' => array(
          'module' => 'pane',
          'delta' => 'credit_footer_block',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks that are active on all pages');
  $export['context_all_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_node_view_actionitem';
  $context->description = 'Blocks on Action Items';
  $context->tag = 'nodetype';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'actionitem' => 'actionitem',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'branding',
          'weight' => '-9',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-dvtrc_action_items-block_5' => array(
          'module' => 'views',
          'delta' => 'dvtrc_action_items-block_5',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'commentblock-commentblock' => array(
          'module' => 'commentblock',
          'delta' => 'commentblock',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'views-dvtrc_action_items-block_2' => array(
          'module' => 'views',
          'delta' => 'dvtrc_action_items-block_2',
          'region' => 'preface_third',
          'weight' => '-10',
        ),
        'pane-action_items_info' => array(
          'module' => 'pane',
          'delta' => 'action_items_info',
          'region' => 'featured',
          'weight' => '-80',
        ),
        'delta_blocks-breadcrumb' => array(
          'module' => 'delta_blocks',
          'delta' => 'breadcrumb',
          'region' => 'breadcrumb',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'actionitems_page_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks on Action Items');
  t('nodetype');
  $export['context_node_view_actionitem'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_node_view_field_trip';
  $context->description = 'Field Trip page';
  $context->tag = 'nodetype';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'fieldtrip' => 'fieldtrip',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'branding',
          'weight' => '-9',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-dvtrc_field_trip-block_3' => array(
          'module' => 'views',
          'delta' => 'dvtrc_field_trip-block_3',
          'region' => 'content',
          'weight' => '-9',
        ),
        'quicktabs-fieldtrip_content_first' => array(
          'module' => 'quicktabs',
          'delta' => 'fieldtrip_content_first',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-dvtrc_field_trip-block_2' => array(
          'module' => 'views',
          'delta' => 'dvtrc_field_trip-block_2',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'views-dvtrc_field_trip-block_4' => array(
          'module' => 'views',
          'delta' => 'dvtrc_field_trip-block_4',
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
        'pane-field_trips_info' => array(
          'module' => 'pane',
          'delta' => 'field_trips_info',
          'region' => 'featured',
          'weight' => '-80',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'delta_node_page_layout',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Field Trip page');
  t('nodetype');
  $export['context_node_view_field_trip'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_node_view_ftritem';
  $context->description = 'Show on Field Site Report Items';
  $context->tag = 'nodetype';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'ftritem' => 'ftritem',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'pane-front_about_information' => array(
          'module' => 'pane',
          'delta' => 'front_about_information',
          'region' => 'featured',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'quicktabs-site_visit_quicktabs' => array(
          'module' => 'quicktabs',
          'delta' => 'site_visit_quicktabs',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-dvtrc_site_visits-block_2' => array(
          'module' => 'views',
          'delta' => 'dvtrc_site_visits-block_2',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'views-dvtrc_site_visits-block_4' => array(
          'module' => 'views',
          'delta' => 'dvtrc_site_visits-block_4',
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'breadcrumb',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'delta_node_page_layout',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Show on Field Site Report Items');
  t('nodetype');
  $export['context_node_view_ftritem'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_node_view_ftritem_anonymous';
  $context->description = 'Show on Field Site Report Items for anonymous  users';
  $context->tag = 'nodetype';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'ftritem' => 'ftritem',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'commentblock-commentblock' => array(
          'module' => 'commentblock',
          'delta' => 'commentblock',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'quicktabs-site_visit_quicktabs' => array(
          'module' => 'quicktabs',
          'delta' => 'site_visit_quicktabs',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-dvtrc_site_visits-block_2' => array(
          'module' => 'views',
          'delta' => 'dvtrc_site_visits-block_2',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'views-dvtrc_site_visits-block_4' => array(
          'module' => 'views',
          'delta' => 'dvtrc_site_visits-block_4',
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'breadcrumb',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'delta_node_page_layout',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Show on Field Site Report Items for anonymous  users');
  t('nodetype');
  $export['context_node_view_ftritem_anonymous'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_node_view_location';
  $context->description = 'To be shown on Location pages';
  $context->tag = 'Locations';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'place' => 'place',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'pane-locations_info' => array(
          'module' => 'pane',
          'delta' => 'locations_info',
          'region' => 'featured',
          'weight' => '-80',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'quicktabs-location_quicktabs' => array(
          'module' => 'quicktabs',
          'delta' => 'location_quicktabs',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-dvtrc_locations-block_2' => array(
          'module' => 'views',
          'delta' => 'dvtrc_locations-block_2',
          'region' => 'postscript_first',
          'weight' => '0',
        ),
        'views-dvtrc_site_visits-block_15' => array(
          'module' => 'views',
          'delta' => 'dvtrc_site_visits-block_15',
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'breadcrumb',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'delta_node_page_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Locations');
  t('To be shown on Location pages');
  $export['context_node_view_location'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_node_view_page';
  $context->description = 'Context for Informational Pages';
  $context->tag = 'nodetype';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'contact-us' => 'contact-us',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'menu-menu-funding-partners' => array(
          'module' => 'menu',
          'delta' => 'menu-funding-partners',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'informationalpage_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for Informational Pages');
  t('nodetype');
  $export['context_node_view_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_term_admin_unit';
  $context->description = 'Admin Unit term pages';
  $context->tag = 'taxonomy';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'vocabulary_6' => 'vocabulary_6',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'pane-devtrac_solr_map_info' => array(
          'module' => 'pane',
          'delta' => 'devtrac_solr_map_info',
          'region' => 'featured',
          'weight' => '-80',
        ),
        'views-district-block' => array(
          'module' => 'views',
          'delta' => 'district-block',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'views-district-block_3' => array(
          'module' => 'views',
          'delta' => 'district-block_3',
          'region' => 'content',
          'weight' => '-8',
        ),
        'quicktabs-districts' => array(
          'module' => 'quicktabs',
          'delta' => 'districts',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-district-block_1' => array(
          'module' => 'views',
          'delta' => 'district-block_1',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'views-dvtrc_site_visits-block_10' => array(
          'module' => 'views',
          'delta' => 'dvtrc_site_visits-block_10',
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
        'delta_blocks-breadcrumb' => array(
          'module' => 'delta_blocks',
          'delta' => 'breadcrumb',
          'region' => 'breadcrumb',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'breadcrumb',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'delta_node_page_layout',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Admin Unit term pages');
  t('taxonomy');
  $export['context_term_admin_unit'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_term_sector';
  $context->description = 'Sector pages';
  $context->tag = 'taxonomy';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'vocabulary_8' => 'vocabulary_8',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-oecd_sector_code-block_5' => array(
          'module' => 'views',
          'delta' => 'oecd_sector_code-block_5',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'views-oecd_sector_code-block_1' => array(
          'module' => 'views',
          'delta' => 'oecd_sector_code-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-oecd_sector_code-block_3' => array(
          'module' => 'views',
          'delta' => 'oecd_sector_code-block_3',
          'region' => 'content',
          'weight' => '-7',
        ),
        'quicktabs-sector' => array(
          'module' => 'quicktabs',
          'delta' => 'sector',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-oecd_sector_code-block_2' => array(
          'module' => 'views',
          'delta' => 'oecd_sector_code-block_2',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'views-dvtrc_site_visits-block_17' => array(
          'module' => 'views',
          'delta' => 'dvtrc_site_visits-block_17',
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
        'delta_blocks-breadcrumb' => array(
          'module' => 'delta_blocks',
          'delta' => 'breadcrumb',
          'region' => 'breadcrumb',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'breadcrumb',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'delta_node_page_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sector pages');
  t('taxonomy');
  $export['context_term_sector'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_user_view';
  $context->description = 'User profile page';
  $context->tag = 'user';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'pane-user_info' => array(
          'module' => 'pane',
          'delta' => 'user_info',
          'region' => 'featured',
          'weight' => '-80',
        ),
        'views-dvtrc_user-block_3' => array(
          'module' => 'views',
          'delta' => 'dvtrc_user-block_3',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'views-dvtrc_user-block_7' => array(
          'module' => 'views',
          'delta' => 'dvtrc_user-block_7',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'quicktabs-user_profile' => array(
          'module' => 'quicktabs',
          'delta' => 'user_profile',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-dvtrc_user-block_5' => array(
          'module' => 'views',
          'delta' => 'dvtrc_user-block_5',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'views-user_media-block_1' => array(
          'module' => 'views',
          'delta' => 'user_media-block_1',
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'breadcrumb',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'user_page_layout',
    ),
    'region' => array(
      'bartik' => array(
        'disable' => array(
          'header' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'highlighted' => 0,
          'featured' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'triptych_first' => 0,
          'triptych_middle' => 0,
          'triptych_last' => 0,
          'footer_firstcolumn' => 0,
          'footer_secondcolumn' => 0,
          'footer_thirdcolumn' => 0,
          'footer_fourthcolumn' => 0,
          'footer' => 0,
          'olmaptext_rightuppercorner' => 0,
          'olblockpanel' => 0,
          'olmaptext_1' => 0,
        ),
      ),
      'devtrac7_theme' => array(
        'disable' => array(
          'page_top' => 0,
          'page_bottom' => 0,
          'content' => 0,
          'help' => 0,
          'user_first' => 0,
          'user_second' => 0,
          'branding' => 0,
          'menu' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'header_first' => 0,
          'header_second' => 0,
          'preface_first' => 0,
          'preface_second' => 0,
          'preface_third' => 0,
          'postscript_first' => 0,
          'postscript_second' => 0,
          'postscript_third' => 0,
          'postscript_fourth' => 0,
          'footer_first' => 0,
          'footer_second' => 0,
          'my_items_menu' => 0,
          'my_tool_menu' => 0,
          'categories' => 0,
          'breadcrumb' => 0,
          'filter' => 0,
          'questions' => 0,
          'map_toolbar' => 0,
          'olmaptext_rightuppercorner' => 0,
          'olblockpanel' => 0,
          'olmaptext_1' => 0,
        ),
      ),
      'devtrac_classic' => array(
        'disable' => array(
          'highlighted' => 'highlighted',
          'branding' => 0,
          'menu' => 0,
          'featured' => 0,
          'sidebar_first' => 0,
          'content' => 0,
          'sidebar_second' => 0,
          'postscript_first' => 0,
          'postscript_second' => 0,
          'footer_first' => 0,
          'footer_second' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'help' => 0,
          'user_first' => 0,
          'user_second' => 0,
          'header_first' => 0,
          'header_second' => 0,
          'preface_first' => 0,
          'preface_second' => 0,
          'preface_third' => 0,
          'postscript_third' => 0,
          'postscript_fourth' => 0,
          'categories' => 0,
          'breadcrumb' => 0,
          'filter' => 0,
          'questions' => 0,
          'map_toolbar' => 0,
          'olmaptext_rightuppercorner' => 0,
          'olblockpanel' => 0,
          'olmaptext_1' => 0,
        ),
      ),
      'shiny' => array(
        'disable' => array(
          'content' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'sidebar_first' => 0,
          'footer' => 0,
          'olmaptext_rightuppercorner' => 0,
          'olblockpanel' => 0,
          'olmaptext_1' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('User profile page');
  t('user');
  $export['context_user_view'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac_all_solr_pages';
  $context->description = 'Shows items that are active on all Solr pages';
  $context->tag = 'solr';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac7_solr_user_view' => 'devtrac7_solr_user_view',
        'devtrac7_solr_user_view:page' => 'devtrac7_solr_user_view:page',
        'devtrac_solr_view_actionitems' => 'devtrac_solr_view_actionitems',
        'devtrac_solr_view_actionitems:list' => 'devtrac_solr_view_actionitems:list',
        'devtrac_solr_view_answers' => 'devtrac_solr_view_answers',
        'devtrac_solr_view_answers:graphs' => 'devtrac_solr_view_answers:graphs',
        'devtrac_solr_view_districts' => 'devtrac_solr_view_districts',
        'devtrac_solr_view_districts:map' => 'devtrac_solr_view_districts:map',
        'devtrac_solr_view_fieldtrips' => 'devtrac_solr_view_fieldtrips',
        'devtrac_solr_view_fieldtrips:list' => 'devtrac_solr_view_fieldtrips:list',
        'devtrac_solr_view_images' => 'devtrac_solr_view_images',
        'devtrac_solr_view_images:page_1' => 'devtrac_solr_view_images:page_1',
        'devtrac_solr_view_images:page_2' => 'devtrac_solr_view_images:page_2',
        'devtrac_solr_view_locations' => 'devtrac_solr_view_locations',
        'devtrac_solr_view_locations:map' => 'devtrac_solr_view_locations:map',
        'devtrac_solr_view_sitevisits' => 'devtrac_solr_view_sitevisits',
        'devtrac_solr_view_sitevisits:map' => 'devtrac_solr_view_sitevisits:map',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views_modes-modes' => array(
          'module' => 'views_modes',
          'delta' => 'modes',
          'region' => 'featured',
          'weight' => '100',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Shows items that are active on all Solr pages');
  t('solr');
  $export['devtrac_all_solr_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac_location_statistics_context';
  $context->description = 'Manages the Statistics on the Locations page';
  $context->tag = 'Locations';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'place' => 'place',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-3a9ae4acb949c61f74e7a3c27d58f170' => array(
          'module' => 'views',
          'delta' => '3a9ae4acb949c61f74e7a3c27d58f170',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Locations');
  t('Manages the Statistics on the Locations page');
  $export['devtrac_location_statistics_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac_theme_page_border_context';
  $context->description = 'This context is active on pages that need a grey box around them it adds a css class to the body';
  $context->tag = 'theme';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'user/*/*' => 'user/*/*',
        'node/*/*' => 'node/*/*',
        'contact' => 'contact',
        'contact/*' => 'contact/*',
        'notfound' => 'notfound',
        'accessdenied' => 'accessdenied',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'pageborder',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This context is active on pages that need a grey box around them it adds a css class to the body');
  t('theme');
  $export['devtrac_theme_page_border_context'] = $context;

  return $export;
}
