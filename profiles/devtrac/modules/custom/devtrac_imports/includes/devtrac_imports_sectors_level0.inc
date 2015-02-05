<?php
/**
 *Imports codelists for activity data type flag
*/
class DevtracImportsSectorsLevel0 extends XMLMigration {
  /**
   * Invoke the class constructor.
   */
  public function __construct() {
    parent::__construct();

    // Do some general administration.
    $this->description = t('Imports terms of  Sector Level 0.');

    // Instantiate the map.
    $fields = array(
      'category' => 'category',
      'category-name' => 'category-name',
      'category-description' => 'category-description',
    );

    $xml_folder = drupal_get_path('module', 'devtrac_imports');
    $items_url = $xml_folder . '/data/sectors.xml';
    $item_xpath = '/codelist/Sector';  // relative to document
    $item_ID_xpath = 'category';          // relative to item_xpath
    $this->source = new MigrateSourceXML($items_url, $item_xpath, $item_ID_xpath, $fields);
    $this->destination = new MigrateDestinationTerm('vocabulary_8');
    // Instantiate the map.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'category' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'category',
          'alias' => 'c',
        ),
      ),
    MigrateDestinationTerm::getKeySchema()
    );
    // Instantiate the field mapping.
    $this->addFieldMapping('field_oecd_code', 'category')->xpath('category');
    $this->addFieldMapping('name', 'category-name')->xpath('category-name');
    $this->addFieldMapping('description', 'category-description')->xpath('category-description');
  }
}

