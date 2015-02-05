<?php

/**
 * @file
 * Search API Date.
 */

class SearchApiDateProcessor extends SearchApiAbstractProcessor {
  /**
   * {@inheritdoc}
   */
  public function supportsIndex(SearchApiIndex $index) {
    foreach ($index->getFields() as $field) {
      if (isset($field['type']) && $field['type'] == 'date') {
        return TRUE;
      }
    }

    return FALSE;
  }

  /**
   * {@inheritdoc}
   */
  public function configurationForm() {
    $form   = array();
    $fields = array();

    foreach ($this->index->getFields() as $key => $field) {
      if (isset($field['type']) && $field['type'] == 'date') {
        $fields[$key] = $field['name'];
      }
    }

    if (empty($fields)) {
      $form['forbidden'] = array(
        '#markup' => '<p>' . t("Items indexed by this index aren't date types and therefore cannot be altered here.") . '</p>',
      );
    }
    else {
      $form['default'] = array(
        '#type'          => 'radios',
        '#title'         => t('Which fields should be altered?'),
        '#default_value' => isset($this->options['default']) ? $this->options['default'] : 1,
        '#attributes'    => array('class' => array('search-api-checkboxes-list')),
        '#options'       => array(
          1 => t('All but those from one of the selected fields'),
          0 => t('Only those from the selected fields'),
        ),
      );

      $form['fields'] = array(
        '#type'          => 'select',
        '#title'         => t('Fields'),
        '#default_value' => isset($this->options['fields']) ? array_keys($this->options['fields']) : array(),
        '#options'       => $fields,
        '#size'          => min(4, count($fields)),
        '#multiple'      => TRUE,
      );
    }

    $form['#attached']['css'][] = drupal_get_path('module', 'search_api') . '/search_api.admin.css';

    return $form;
  }

  /**
   * {@inheritdoc}
   */
  protected function testField($name, array $field) {
    if ($field['type'] != 'date') {
      return FALSE;
    }

    if (empty($this->options['default'])) {
      return !empty($this->options['fields'][$name]);
    }

    return empty($this->options['fields'][$name]);
  }

  /**
   * {@inheritdoc}
   */
  protected function process(&$value) {
    if (is_numeric($value)) {
      $day   = date('j', $value);
      $month = date('n', $value);
      $year  = date('Y', $value);

      $value = mktime(0, 0, 0, $month, $day, $year);
    }
  }
}
