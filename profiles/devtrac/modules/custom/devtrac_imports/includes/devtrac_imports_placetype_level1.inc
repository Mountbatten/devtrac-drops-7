<?php
class DevtracImportsPlacetypeLevel1 extends XMLMigration {

  public function __construct(array $arguments) {
    $this->arguments = $arguments;
    parent::__construct();
    
    $this->description = t('Imports Place types on Level 1.');
    $this->dependencies = array(
    	//'DevtracImportsPlacetypeLevel0',
    );
        
    $items_url = drupal_get_path('module', 'devtrac_imports') . '/data/placetype.xml';
    $this->item_xpath = "/placetypes/placetype/placetype";  // relative to document
    $this->item_ID_xpath = 'name';
    // Do some general administration
    // $this->description = t('Imports relations of type funding organisation role.');

    $fields = array(
        'name', 'name',
    		'parent', 'parent',
    );

    $options = array();
   
    $items_class = new MigrateItemsXML($items_url, $this->item_xpath, $this->item_ID_xpath);

    $this->source = new MigrateSourceMultiItems($items_class, $fields);
    $this->destination = new MigrateDestinationTerm('vocabulary_1');

    $this->map = new MigrateSQLMap($this->machineName,
        array(
            'name' => array(
                'type' => 'varchar',
                'length' => 255,
                'not null' => TRUE,
                'description' => 'name',
                'alias' => 'st',
            ),
        ),
        MigrateDestinationTerm::getKeySchema()
    );
    //$sourcemaptable = str_replace('relationorgrolefunding', 'dataactivity', $this->generateMachineName());
    //$this->addFieldMapping('field_oecd_code', 'code')->xpath('@code'); //->defaultValue('1');
    $this->addFieldMapping('name', 'name')->xpath('name');   
     
    $this->addFieldMapping('parent', 'parent')
    ->xpath('parent::*/name')
    ->sourceMigration('DevtracImportsPlacetypeLevel0');   
     
    $this->addFieldMapping('field_term_icon', 'name')
      ->xpath('name')
      ->sourceMigration('DevtracImportsPlacetypeIcons');    
    $this->addFieldMapping('field_term_icon:file_class')
      ->defaultValue('MigrateFileFid');

  }

}




