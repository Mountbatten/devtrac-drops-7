<?php

/**
 * @file
 * Custom Packages handler.
 */

/**
 * CKAN Packages class.
 * @todo implements interface
 * @ingroup devtrac_ckan_api
 */
class DevtracCustomPackages {
  /**
   * {@inheritdoc}
   * 
   * The currently supported packages are 
   * sitereports, organisations, activities, locations and images
   */
  public function index() {
    return array(
      'sitereports',
      'organisations',
      'activities',
      'locations',
      'images',
    );
  }

  /**
   * @todo replace hardcoded values with site specific ones
   * @todo replace UUIDs with real UUIDs
   * {@inheritdoc}
   */
  public function retrieve($id) {
      $csv = new StdClass();
      $csv->format = 'CSV';
      $html = new StdClass();
      $html->format = 'HTML';
      $package = array(
        'notes' => NULL,
        'tags' => array(),
        'author' => 'Devtrac',
        'author_email' => 'info@devtrac.ug',
        'created' => date('c'),
        'revision_timestamp' => date('c'),
      );
    switch ($id) {
      case 'sitereports':
        $csv->url = url('sitevisits/analyse/csv', array('absolute' => TRUE));
        $csv->id = '430966b0-9252-11e3-baa8-0800200c9a66';
        $html->url = url('sitereports', array('absolute' => TRUE));
        $html->id = 'a9945110-9252-11e3-baa8-0800200c9a66';
        $package['title'] = 'DevTrac site reports';
        $package['id'] = 'sitereports';
        $package['resources'][] = $csv;
        $package['resources'][] = $html;
        return $package;
      case 'organisations':
        $csv->url = url('organisations/analyse/csv', array('absolute' => TRUE));
        $csv->id = '430966b1-9252-11e3-baa8-0800200c9a66';
        $html->url = url('organisations', array('absolute' => TRUE));
        $html->id = 'a9947820-9252-11e3-baa8-0800200c9a66';
        $package['title'] = 'DevTrac organisations';
        $package['id'] = 'organisations';
        $package['resources'][] = $csv;
        $package['resources'][] = $html;
        return $package;
      case 'activities':
        $csv->url = url('activities/analyse/csv', array('absolute' => TRUE));
        $csv->id = '43098dc0-9252-11e3-baa8-0800200c9a66';
        $html->url = url('activities', array('absolute' => TRUE));
        $html->id = 'a9947821-9252-11e3-baa8-0800200c9a66';
        $package['title'] = 'DevTrac activities';
        $package['id'] = 'activities';
        $package['resources'][] = $csv;
        $package['resources'][] = $html;
        return $package;
      case 'locations':
        $csv->url = url('locations/analyse/csv', array('absolute' => TRUE));
        $csv->id = '43098dc1-9252-11e3-baa8-0800200c9a66';
        $html->url = url('locations', array('absolute' => TRUE));
        $html->id = 'a9947822-9252-11e3-baa8-0800200c9a66';
        $package['title'] = 'DevTrac locations';
        $package['id'] = 'locations';
        $package['resources'][] = $csv;
        $package['resources'][] = $html;
        return $package;
      case 'images':
        $csv->url = url('images/analyse/csv', array('absolute' => TRUE));
        $csv->id = '43098dc2-9252-11e3-baa8-0800200c9a66';
        $html->url = url('images', array('absolute' => TRUE));
        $html->id = 'a9947823-9252-11e3-baa8-0800200c9a66';
        $package['title'] = 'DevTrac images';
        $package['id'] = 'organisations';
        $package['resources'][] = $csv;
        $package['resources'][] = $html;
        return $package;
    }
  }
}
