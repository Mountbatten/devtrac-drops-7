<?php

/**
 * Querystring processor.
 */
module_load_include('inc', 'purl_search_api', 'includes/purl_search_api');

/**
 * The classname has to be purl_*method* it seems. I have not seen the 
 * documentation that supports it but I have felt the pain of not following
 * that naming convention.
 */
class purl_devtrac extends purl_search_api {

  
  public function method() {
    return 'devtrac';
  }

 // public function detect($q) {
 // }

  public function description() {
  }

 // public function parse($valid_values, $qs) {
 //   return parent::rewrite($valid_values, $qs);
 // }

  function remove($value, $element) {
  }

  /**
   * 
   * @staticvar type $originals
   * @param type $path
   * @param type $options
   * @param type $element
   */
  public function rewrite(&$path, &$options, $element) {
    parent::rewrite($path, $options, $element);
    /*
     *  Do the same tests as in purl_search_api
     */
    static $originals;
    // The first time we pass here, we store the original full element
    // The second (and beyond) time around, we do the other way around.
    if (!isset($originals)) {
      // Wow, magic. This is to make $originals a copy of $element->id
      // and not a reference to $element->id
      // explanation:
      // http://stackoverflow.com/questions/1190026/php-copying-array-elements-by-value-not-by-reference#answer-1190298
      $originals = array_flip(array_flip($element->id));
    } else {
      $element->id = array_flip(array_flip($originals));
    }
    
//    $return = array_flip(array_flip($element->id));

    
    /**
     * Did we set the right class in 
     * @see purl_search_api_menu_link_alter().
     */
    if (isset($options['attributes']['class'])) {
      if (in_array('purl_search_api_noreset', $options['attributes']['class'])) {
        if (!_purl_skip($element, $options)) {
          $querykey = $element->value;
          $removes = array();
          if ($path == 'actionitems')  {
            foreach ($element->id as $key=>$id) {
              if (strpos($id, "author:") === 0) {
                $element->id[$key] = str_replace("author:", "field_actionitem_responsible:", $id);
              }
              if (strpos($id, "field_ftritem_date_visited:") === 0) {
                $element->id[$key] = str_replace("field_ftritem_date_visited", "field_actionitem_due_date", $id);
              }
              if (strpos($id, "field_fieldtrip_start_end_date:") === 0) {
                $element->id[$key] = str_replace("field_fieldtrip_start_end_date", "field_actionitem_due_date", $id);
              }
            }
          }
          else {
            foreach ($element->id as $key=>$id) {
              // TODO THIS WONT WORK IF THERE ARE MORE THAN 1 Responsible in the filter
              if (strpos($id, "field_actionitem_responsible:") === 0) {
                $element->id[$key] = str_replace("field_actionitem_responsible", "author", $id);
              }            
            }
          }
          if ($path == 'fieldtrips')  {
            foreach ($element->id as $key=>$id) {
              if (strpos($id, "field_actionitem_due_date:") === 0) {
                $element->id[$key] = str_replace("field_actionitem_due_date", "field_fieldtrip_start_end_date", $id);
              }
              if (strpos($id, "field_ftritem_date_visited:") === 0) {
                $element->id[$key] = str_replace("field_ftritem_date_visited", "field_fieldtrip_start_end_date", $id);
              }
            }
          }
          if ($path == 'adminunits')  {
            foreach ($element->id as $key=>$id) {
              if (strpos($id, "taxonomy_vocabulary_6:") === 0) {
                $element->id[$key] = str_replace("taxonomy_vocabulary_6", "parents_all", $id);
              }
            }
          }
          else {
            foreach ($element->id as $key=>$id) {
              if (strpos($id, "parents_all:") === 0) {
                $element->id[$key] = str_replace("parents_all", "taxonomy_vocabulary_6", $id);
              }
            }            
          }
          if ($path == 'sitereports')  {
            foreach ($element->id as $key=>$id) {
              if (strpos($id, "field_actionitem_due_date:") === 0) {
                $element->id[$key] = str_replace("field_actionitem_due_date", "field_ftritem_date_visited", $id);
              }
              if (strpos($id, "field_fieldtrip_start_end_date:") === 0) {
                $element->id[$key] = str_replace("field_fieldtrip_start_end_date", "field_ftritem_date_visited", $id);
              }

              // And now for something ugly
              // This will remove filter when going to sitevisits but not put them back when you go back to actionitems.
              if (
                  (strpos($id, "field_actionitem_severity:1") === 0 ) ||
                  (strpos($id, "field_actionitem_severity:2") === 0 ) ||
                  (strpos($id, "field_actionitem_severity:3") === 0 ) ||
                  (strpos($id, "field_actionitem_severity:4") === 0 ) ||
                  (strpos($id, "field_actionitem_status:1") === 0 ) ||
                  (strpos($id, "field_actionitem_status:2") === 0 ) ||
                  (strpos($id, "field_actionitem_status:3") === 0 )
                  ) {
                $removes[] = $key;
              }
            }
            
          }
          // All $keys that need to be removed, remove them
          foreach ($removes as $key) {
            unset ($element->id[$key]);
          }
          
          $options['query'][$querykey] = $element->id;
        }
      }
    }
  }

  /**
   * No need to do nothing at all.
   */
  public function adjust(&$value, $item, &$q) {
    return;
  }

}
