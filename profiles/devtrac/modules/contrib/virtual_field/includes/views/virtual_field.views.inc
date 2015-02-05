<?php
/**
 * Implementation of hook_views_data()
 */
function virtual_field_views_data() {

  $data['virtual_field']['table']['group'] = t('Virtual Field');

  $data['virtual_field']['table']['join'] = array(
      '#global' => array(),
  );

  $data['virtual_field']['virtual_field'] = array(
      'title' => t('virtual_field'),
      'help' => t('Renders a Virtual Field.'),
      'field' => array(
          'handler' => 'virtual_field_handler_field_virtual_field',
      ),
  );

  return $data;
}
