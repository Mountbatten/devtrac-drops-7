<?php

/**
 * Implements hook_preprocess_views_view_table().
 */
function devtrac7_theme_alpha_preprocess_views_view_table(&$vars) {
  foreach ($vars['result'] as $index => $result) {
    if(isset($result->nid)){
    	$node = node_load($result->nid);
    	if (isset($node)) {
          if ($node->type == 'actionitem') {
                   if ((isset($node->field_actionitem_status['und'][0]['value']) && ($node->field_actionitem_status['und'][0]['value'] == 1))) {
    			$date = $node->field_actionitem_due_date['und'][0]['value'];
    			if (checkForDueDate($date)) {
    				// This will return true when the date is overdue
    				$vars['row_classes'][$index][] = "overdue";
    			}
                   }
    		}
    	}
    }
  }
}

/**
 * Returns true/false depending on whether the due date is greater or less than the current date.
 */
function checkForDueDate($date) {
  $duedate = strtotime($date);
  $currentdate = date('U');
  if ($currentdate > $duedate) {
    return TRUE;
  }
  return FALSE;
}
