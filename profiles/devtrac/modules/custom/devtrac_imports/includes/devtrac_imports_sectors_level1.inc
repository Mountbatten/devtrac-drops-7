<?php
class DevtracImportsSectorsLevel1 extends XMLMigration {

  /**
   * Invoke the class constructor.
   */
  public function __construct() {
    parent::__construct();

    // Do some general administration.
    $this->description = t('Imports terms of Sectorlevel 1.');
    //$this->softDependencies = array('LocationLevel0');

    // Instantiate the map.
    $fields = array(
      'code' => 'code',
      'name' => 'name',
      'description' => 'description',
      'parent' => 'parent',
    );
    $xml_folder = drupal_get_path('module', 'devtrac_imports');
    $items_url = $xml_folder . '/data/sectors.xml';
    $item_xpath = '/codelist/Sector';  // relative to document
    $item_ID_xpath = 'code';          // relative to item_xpath
    $this->source = new MigrateSourceXML($items_url, $item_xpath, $item_ID_xpath, $fields);
    $this->destination = new MigrateDestinationTerm('vocabulary_8');
    // Instantiate the map.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'code' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'code',
          'alias' => 'c',
        ),
      ),
    MigrateDestinationTerm::getKeySchema()
    );
    // Instantiate the field mapping.
    $this->addFieldMapping('field_iati_code', 'code')->xpath('code');
    $this->addFieldMapping('name', 'name')->xpath('name');
    $this->addFieldMapping('description', 'description')->xpath('description');
    $this->addFieldMapping('parent', 'parent');
    
    $this->addFieldMapping('field_oecd_code', 'code')->xpath('code');
            
    $this->addFieldMapping('field_term_icon', 'code')
      ->xpath('code')
      ->sourceMigration('DevtracImportsSectorIcons');
    $this->addFieldMapping('field_term_icon:file_class')
      ->defaultValue('MigrateFileFid');
  }
  /**
   * Construct the machine name from the source file name.
   */
  public function prepareRow($row) {
    if (!empty($row->xml->code) && !empty($row->xml->category)) {
      $term = db_select(str_replace('1', '0', $this->getMap()->getMapTable()), 'mt')
      ->fields('mt', array('destid1'))
      ->condition('sourceid1', $row->xml->category)
      ->execute()
      ->fetchAssoc();
      if ($term === FALSE) {
        drupal_set_message(t('Could not find the top level sectors. Please load them before loading the sub-sectors.'));
        return FALSE;
      }
      $row->parent = $term['destid1'];
    }
    else {
      drupal_set_message(t('There is no sub-sector provided.'));
      return FALSE;
    }
  }

}




