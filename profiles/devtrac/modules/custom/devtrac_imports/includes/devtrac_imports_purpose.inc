<?php



// public function __construct(array $arguments) {
// 	$this->arguments = $arguments;
// 	parent::__construct();

/**
 * User-only migration - not profile fields
*
* The data file is assumed to be in
*   sites/all/modules/a_wusel_migration/data_sources/
*/
class DevtracImportsPurpose extends DevtracImportsCsvBase {
	public function __construct($arguments) {
		$this->arguments = $arguments;
		parent::__construct($arguments);
		$this->description = t('Import an CSV-file (only "Account"-fields)');
		$columns = array(
				// "Source": ('Fieldname', 'Description')
				0 => array('name', t('name')),
				1 => array('path', t('path')),

		);
		// TIP: delete ", array('header_rows' => 1)" in the next line, if the CSV-file has NO header-line
		$this->source = new MigrateSourceCSV(DRUPAL_ROOT . '/' . drupal_get_path('module', 'devtrac_imports') . '/data/purpose.csv', $columns, array('header_rows' => 1));
		//$this->destination = new MigrateDestinationUser();
		$this->destination = new MigrateDestinationTerm('vocabulary_9');
		// Instantiate the map.
		$this->map = new MigrateSQLMap($this->machineName,
				array('name' => array( // this field is used to connect user und profile2
						'type' => 'varchar',
						'length' => 20,
						'not null' => TRUE,
						'description' => t('Taxonomy term') // description never used
				)
				),
				MigrateDestinationTerm::getKeySchema()
		);
		// Mapped fields
		//$this->addSimpleMappings(array('name'));
		
		$this->addFieldMapping('name', 'name')
		->defaultValue('')
		->description(t('Name'));
		$this->addFieldMapping('path', 'path')
		->defaultValue('')
		->description(t('Name'));		
		
	}
}



