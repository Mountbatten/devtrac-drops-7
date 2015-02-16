<?php
/**
 * @file
 * devtrac7_solr_user_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function devtrac7_solr_user_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'devtrac7_solr_user_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_devtrac7_user_index';
  $view->human_name = 'devtrac7_solr_user_view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_user_firstname' => 'field_user_firstname',
    'field_user_surname' => 'field_user_surname',
    'mail' => 'mail',
    'name' => 'name',
    'taxonomy_vocabulary_8' => 'taxonomy_vocabulary_8',
    'last_access' => 'last_access',
    'edit_url' => 'edit_url',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_user_firstname' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_surname' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_8' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_access' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['style_options']['footable'] = array(
    'expand' => 'field_user_firstname',
    'hide' => array(
      'field_user_firstname' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'field_user_surname' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'mail' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'name' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'taxonomy_vocabulary_8' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'last_access' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'edit_url' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'noresult text';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Your search did not return any results. Making your search less specific give you a higher chance of finding what you are looking for.';
  $handler->display->display_options['empty']['area']['format'] = '1';
  /* Field: Indexed User: First Name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'search_api_index_devtrac7_user_index';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  /* Field: Indexed User: Surname */
  $handler->display->display_options['fields']['field_user_surname']['id'] = 'field_user_surname';
  $handler->display->display_options['fields']['field_user_surname']['table'] = 'search_api_index_devtrac7_user_index';
  $handler->display->display_options['fields']['field_user_surname']['field'] = 'field_user_surname';
  /* Field: Indexed User: Email */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'search_api_index_devtrac7_user_index';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['link_to_entity'] = 0;
  /* Field: Indexed User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_devtrac7_user_index';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['link_to_entity'] = 1;
  /* Field: Indexed User: Subjects */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'search_api_index_devtrac7_user_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['label'] = 'Sectors';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['view_mode'] = 'full';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['bypass_access'] = 0;
  /* Field: Indexed User: Last access */
  $handler->display->display_options['fields']['last_access']['id'] = 'last_access';
  $handler->display->display_options['fields']['last_access']['table'] = 'search_api_index_devtrac7_user_index';
  $handler->display->display_options['fields']['last_access']['field'] = 'last_access';
  $handler->display->display_options['fields']['last_access']['date_format'] = 'date_only';
  $handler->display->display_options['fields']['last_access']['second_date_format'] = 'date_only';
  $handler->display->display_options['fields']['last_access']['link_to_entity'] = 0;
  /* Field: Indexed User: Edit URL */
  $handler->display->display_options['fields']['edit_url']['id'] = 'edit_url';
  $handler->display->display_options['fields']['edit_url']['table'] = 'search_api_index_devtrac7_user_index';
  $handler->display->display_options['fields']['edit_url']['field'] = 'edit_url';
  $handler->display->display_options['fields']['edit_url']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_url']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['edit_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_url']['alter']['path'] = '[edit_url]';
  $handler->display->display_options['fields']['edit_url']['link_to_entity'] = 0;
  /* Sort criterion: Indexed User: Last access */
  $handler->display->display_options['sorts']['last_access']['id'] = 'last_access';
  $handler->display->display_options['sorts']['last_access']['table'] = 'search_api_index_devtrac7_user_index';
  $handler->display->display_options['sorts']['last_access']['field'] = 'last_access';
  $handler->display->display_options['sorts']['last_access']['order'] = 'DESC';

  /* Display: Users List Page */
  $handler = $view->new_display('page', 'Users List Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed User: First Name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'search_api_index_devtrac7_user_index';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  /* Field: Indexed User: Surname */
  $handler->display->display_options['fields']['field_user_surname']['id'] = 'field_user_surname';
  $handler->display->display_options['fields']['field_user_surname']['table'] = 'search_api_index_devtrac7_user_index';
  $handler->display->display_options['fields']['field_user_surname']['field'] = 'field_user_surname';
  /* Field: Indexed User: Email */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'search_api_index_devtrac7_user_index';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['link_to_entity'] = 0;
  /* Field: Indexed User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_devtrac7_user_index';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['link_to_entity'] = 1;
  /* Field: Indexed User: Subjects */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'search_api_index_devtrac7_user_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['label'] = 'Sectors';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['list']['separator'] = ' ';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['display'] = 'view';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['view_mode'] = 'sector_code_icon';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['bypass_access'] = 0;
  /* Field: Indexed User: Last access */
  $handler->display->display_options['fields']['last_access']['id'] = 'last_access';
  $handler->display->display_options['fields']['last_access']['table'] = 'search_api_index_devtrac7_user_index';
  $handler->display->display_options['fields']['last_access']['field'] = 'last_access';
  $handler->display->display_options['fields']['last_access']['date_format'] = 'date_only';
  $handler->display->display_options['fields']['last_access']['second_date_format'] = 'date_only';
  $handler->display->display_options['fields']['last_access']['link_to_entity'] = 0;
  /* Field: Indexed User: Edit URL */
  $handler->display->display_options['fields']['edit_url']['id'] = 'edit_url';
  $handler->display->display_options['fields']['edit_url']['table'] = 'search_api_index_devtrac7_user_index';
  $handler->display->display_options['fields']['edit_url']['field'] = 'edit_url';
  $handler->display->display_options['fields']['edit_url']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_url']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['edit_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_url']['alter']['path'] = '[edit_url]';
  $handler->display->display_options['fields']['edit_url']['link_to_entity'] = 0;
  $handler->display->display_options['path'] = 'users';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Users';
  $handler->display->display_options['menu']['description'] = 'List of users of Devtrac';
  $handler->display->display_options['menu']['weight'] = '25';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: User Graphs */
  $handler = $view->new_display('mode', 'User Graphs', 'graphs');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '-1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_user_firstname' => 'field_user_firstname',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_user_firstname' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed User: First Name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'search_api_index_devtrac7_user_index';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
  );
  $handler->display->display_options['mode_id'] = 'graphs';
  $handler->display->display_options['mode_name'] = 'graphs';
  $export['devtrac7_solr_user_view'] = $view;

  return $export;
}
