<?php

/**
 * @file
 * Contains SearchApiFileSourceBundleFilter.
 */

/**
 * Represents a data alteration that restricts entity indexes to some bundles.
 * Only works on entity types node and taxonomy_term.
 */
class SearchApiFileSourceBundleFilter extends SearchApiAbstractAlterCallback {

  /**
   * {@inheritdoc}
   */
  public function supportsIndex(SearchApiIndex $index) {
    return $index->getEntityType() == 'file';
  }

  /**
   * {@inheritdoc}
   */
  public function alterItems(array &$items) {
    foreach ($items as $fid => $file) {
      $usage = file_get_file_references($file, $field = NULL, $age = FIELD_LOAD_CURRENT, $file->type);
      $empty = TRUE;
      $results = array();
      foreach ($usage as $field_name => $using_entities) {
        foreach ($using_entities as $entity_type => $using_entity) {
          // Filter out all usages that do not belong to the selected bundles.
          $entity_ids = array_keys($using_entity);
          $entity_id = reset($entity_ids);
          switch ($entity_type) {
            case 'taxonomy_term':
              if (!in_array(reset($using_entity)->vocabulary_machine_name, $this->options['bundles'])) {
                unset($usage[$field_name][$entity_type][$entity_id]);
              }
              break;

            case 'node':
              if (!in_array(reset($using_entity)->type, $this->options['bundles'])) {
                unset($usage[$field_name][$entity_type][$entity_id]);
              }
              break;

            default:
              unset($usage[$field_name][$entity_type][reset(array_keys($using_entity))]);
              break;
          }
        }
        foreach ($usage[$field_name] as $entity_type_to => $using_entity_to) {
          if (!empty($using_entity_to)) {
            $empty = FALSE;
          }
        }
      }
      // Filter out all the items that do not have any usages.
      if ($empty) {
        unset($items[$fid]);
      }
    }
  }

  /**
   * {@inheritdoc}
   */
  public function configurationForm() {
    $entity_info = entity_get_info();
    $options = array();
    foreach ($entity_info as $entity_type => $info) {
      if (self::hasBundles($info)) {
        foreach ($info['bundles'] as $bundle_name => $bundle_info) {
          $instances = field_info_instances($entity_type, $bundle_name);
          foreach ($instances as $field_name => $instance) {
            $field_info = field_info_field($field_name);
            $file_info = entity_get_info('file');
            $bundles = array_keys($file_info['bundles']);
            if (in_array($field_info['type'], $bundles)) {
              $options[$entity_type][$bundle_name] = isset($bundle_info['label']) ? $bundle_info['label'] : $bundle_name;
            }
          }
        }
      }
    }
    if (empty($options)) {
      return array(
        'forbidden' => array(
          '#markup' => '<p>' . t("There are no bundles that have file fields attached, therefore the items cannot be filtered here.") . '</p>',
        ),
      );
    }
    $form = array(
      'default' => array(
        '#prefix' => '<div>',
        '#markup' => check_plain(t('Only files from the selected bundles will be indexed.')),
        '#suffix' => '</div>',
        /*
        '#type' => 'radios',
        '#title' => 'Which items should be indexed?',
        '#default_value' => isset($this->options['default']) ? $this->options['default'] : 1,
        '#options' => array(
          1 => t('All but those from one of the selected bundles'),
          0 => t('Only those from the selected bundles'),
        ),
        */
      ),
      'bundles' => array(
        '#type' => 'select',
        '#title' => t('Bundles'),
        '#default_value' => isset($this->options['bundles']) ? $this->options['bundles'] : array(),
        '#options' => $options,
        '#size' => min(6, count($options, COUNT_RECURSIVE)),
        '#multiple' => TRUE,
      ),
    );
    return $form;
  }

  /**
   * Determines whether a certain entity type has any bundles.
   *
   * @param array $entity_info
   *   The entity type's entity_get_info() array.
   *
   * @return bool
   *   TRUE if the entity type has bundles, FALSE otherwise.
   */
  protected static function hasBundles(array $entity_info) {
    return !empty($entity_info['entity keys']['bundle']) && !empty($entity_info['bundles']);
  }
}
