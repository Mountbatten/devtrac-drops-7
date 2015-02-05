<?php
/**
* User-only migration - not profile fields
*
* The data file is assumed to be in
*   sites/all/modules/a_wusel_migration/data_sources/
*/
class DevtracImportsSiteReportType extends DevtracImportsCsvBase {
	public function __construct($arguments) {
		$this->arguments = $arguments;
		parent::__construct($arguments);
		$this->description = t('Import Site Report Types');
		$columns = array(
				0 => array('name', t('name')),
		);
		// TIP: delete ", array('header_rows' => 1)" in the next line, if the CSV-file has NO header-line
		$this->source = new MigrateSourceCSV(DRUPAL_ROOT . '/' . drupal_get_path('module', 'devtrac_imports') . '/data/sitereporttype.csv', $columns, array('header_rows' => 1));
		//$this->destination = new MigrateDestinationUser();
		$this->destination = new MigrateDestinationTerm('vocabulary_7');
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
		
		$this->addFieldMapping('name', 'name')
		->defaultValue('')
		->description(t('Name'));
		
	}
}



