<?php

/**
 * @file
* Views handlers for virtual field module.
*/

/**
 * A handler to provide a field that is completely custom by the administrator.
*
* @ingroup views_field_handlers
*/
class virtual_field_handler_field_virtual_field extends views_handler_field_node {
  function query() {
    // Do nothing, as this handler does not need to do anything to the query itself.
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['virtual_field'] = array('Select' => NULL);
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    // Get a list of the available fields and arguments for token replacement.
    $fields = $this->_get_fieldname_options($this->view->base_table);
    $form['virtual_field'] = array(
        '#type' => 'select',
        '#title' => t('The Virtual Field to Render'),
        '#description' => t('Select the field that should be rendered.'),
        '#options' => $fields,
        '#default_value' => $this->options['virtual_field'],
        '#weight' => -12,
    );
    unset($form['link_to_node']);

  }

  /**
   * Render the button field
   */
  function render($values) {

    $fieldname = $this->options['virtual_field'];
    /*
     *  Get the needed info from a different place
     *  for search_api based views
     */
    $entities = array();
    if ($this->_is_searchapi()) {
      $index_id = substr($this->view->base_table, 17);
      $index = search_api_index_load($index_id);
      $entity_type = $index->item_type; // node, user etc.
      $id = $this->view->result[$this->view->row_index]->entity;
      $entity =  $values->_entity_properties['entity object'];
      $entities = array($id => $entity);
    }
    else {
      $entity_type = $this->view->base_table; //node, user etc.
      $base_field = $this->view->base_field;
      $id = $values->$base_field;
      $entities = entity_load($entity_type, array($id));
      $entity = $entities[$id];
    }

    /*
     *  Get the field instance
     */
    $instances = array();
    $instances[$id] = field_info_instance($entity_type, $fieldname, $entity->type);
    $instance = $instances[$id];

    $field = 'dummy';
    $langcode = LANGUAGE_NONE;
    $items = array ();
    $displays = array();

    // Get the default formatter for this field and bailout if thats not set.
    if (!($formatter = $instance['display']['default']['type'])) {
      return;
    }

    $formatter_prepare_view = $formatter.'_prepare_view';
    $formatter_view = $formatter.'_view';

    $formatter_prepare_view($entity_type, $entities, $field, $instances, $langcode, $items, $displays);
    // Only pass a single item to the formatter_view hook. Feel free to build a foreach here, we had issues
    // with the key that was returned. The documentation says it should be 0, 1, 2 etc but we had to put in
    // a certain string.
    $element = $formatter_view($entity_type, $entity, $field, $instance, $langcode, $items[$id], $displays);

    // So here we just use any key that has been returned.
    $keys = array_keys($element);
    $key = $keys[0];
    return $element[$key]['#markup'];
  }

  /**
   * This function finds all possible virtual fields on a certain entity_type
   */
  function _get_fieldname_options($entity_type) {
    $fieldsbybundle = field_info_instances($entity_type);
    if (!$fieldsbybundle) {
      if (!($fieldsbybundle = $this->_get_fieldname_options_search_api($entity_type))) {
        return array();
      }
    }
    $virtualfields = virtual_field_fields();

    $fieldnames = array();
    foreach($fieldsbybundle as $bundle=>$fields) {
      foreach ($fields as $name => $field) {
        // Check if this is a virtual field
        if ($field['widget']['module'] == 'virtual_field') {
          // check if this virtual field is our virtual field (through the formatter)
          $fieldnames[$name] = $fields[$name]['label'];
        }
      }
    }
    return $fieldnames;
  }

  /**
   * This function finds all possible virtual fields on a search_api index
   */
  function _get_fieldname_options_search_api($entity_type) {

    if (!$this->_is_searchapi()) { return;};
    $index_id = substr($this->view->base_table, 17);
    $index = search_api_index_load($index_id);

    $item_type = $index->item_type;
    return field_info_instances($item_type);
  }

  /**
   *  Checks if this view is based on search_api
   *  The check is copied from
   *  search_api/contrib/search_api_views/display_facet_block.inc -> getFieldOptions
   */
  function _is_searchapi() {
    $index_id = substr($this->view->base_table, 17);
    if (!($index_id && ($index = search_api_index_load($index_id)))) {
      $table = views_fetch_data($this->view->base_table);
      $table = empty($table['table']['base']['title']) ? $this->view->base_table : $table['table']['base']['title'];
      $check = !$table;
    }
    else {
      $check = TRUE;
    }

    return $check;
  }
}
