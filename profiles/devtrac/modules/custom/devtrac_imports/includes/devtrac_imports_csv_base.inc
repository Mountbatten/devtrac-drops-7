<?php 
/**
 * 
 * @author dan
 *
 */
abstract class DevtracImportsCsvBase extends Migration {
	public function __construct($arguments) {
		// Always call the parent constructor first for basic setup
		$this->arguments = $arguments;
		parent::__construct();
		// Avoid known line ending issue: "Invalid data value" at drupal.org/node/1152158#InvalidDataValue
		ini_set('auto_detect_line_endings', TRUE);
	}
}