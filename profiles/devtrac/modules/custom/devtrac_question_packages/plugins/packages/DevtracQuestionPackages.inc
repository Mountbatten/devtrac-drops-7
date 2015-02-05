<?php

/**
 * @file
 * Devtrac Question Packages handler.
 */

/**
 * CKAN Packages class.
 * @todo implements interface
 */
class DevtracQuestionPackages {
  /**
   * {@inheritdoc}
   */
  public function index() {
    $name = 'devtrac_solr_view_questions';
    $display_id = 'attachment_1';
    $args = array();

    $view = views_get_view($name);
    if (!$view) {
      return FALSE;
    }
    if (!$view->set_display($display_id)) {
      return FALSE;
    }
    $view->pre_execute($args);
    $view->execute();

    $data = array();
    foreach ($view->result as $row) {
      $data[] = $row->entity;
    }
    return $data;
  }

  /**
   * {@inheritdoc}
   */
  public function retrieve($id) {
    $name = 'ckan_question';
    $display_id = 'default';
    $args = array($id);

    $view = views_get_view($name);
    if (!$view) {
      return FALSE;
    }
    if (!$view->set_display($display_id)) {
      return FALSE;
    }
    $view->pre_execute($args);
    $view->execute();

    foreach ($view->field as $field_id => $field) {
      $label = $field->label();
      $formatted_value = $this->format_field($label, $field_id, $field);

      if (is_array($formatted_value)) {
        $data[$label] = array_merge((array) $data[$label], $formatted_value);
      }
      else {
        $data[$label] = $formatted_value;
      }
    }

    // Special case the 'files' resources even further.
    foreach ($data['resources'] as &$resource) {
      $resource->name = "Answers collected by UNICEF Uganda to the question '{$data['title']}' for the Devtrac project.";
    }

    return $data;
  }

  /**
   * Return rendered field.
   *
   * Uses render as set in views, except for the special case fields.
   * To be moved into a views style plugin I'd think.
   */
  protected function format_field($label, $field_id, $field) {
    $row = 0; // we have but one result.

    switch ($label) {
      case 'tags':
        $tags = array();
        $tids = $field->get_value($field->view->result[$row], 'tid');
        foreach ($tids as $tid) {
          $term = entity_load('taxonomy_term', array($tid));
          $term = reset($term);
          // $tag->name = sanitize name?*/
          $tag = transliteration_clean_filename($term->name);
          $tags[] = $tag;
        }
        return $tags;
      case 'resources':
        // If it is not a file object that Drupal knows about, This will
        // probably have to be special cased all the time
        $path = $field->view->style_plugin->get_field($row, $field_id);
        $url = url('', array('absolute' => TRUE)) . $path; // Double encoding.
        $resource = new StdClass();
        $resource->url = $url;
        if (strpos($path, 'analyse/csv')) {
          $resource->format = 'CSV';
        }
        elseif (strpos($path, 'analyse/kml')) {
          $resource->format = 'KML';
        }
        elseif (strpos($path, 'analyse/rss')) {
          $resource->format = 'RSS';
        }
        else {
          $resource->format = 'HTML';
        }
        $resource->id = sha1($this->generate_uuid($path, 'csv'));
        // $resource->headers = get_headers($url);
        return array($resource);
      case 'id':
        return $this->generate_uuid($field->view->style_plugin->get_field($row, $field_id), 'node');
      default:
        return $field->view->style_plugin->get_field($row, $field_id);
    }
  }

  /**
   * Makes a unique ID for API name, rather than a UUID, that we can lookup.
   */
  protected function generate_uuid($id, $type) {
    global $base_root;
    $parts = parse_url($base_root);
    return $id . ':' . $type . '@' . $parts['host'];
  }

}
