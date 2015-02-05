<?php

/**
 * FacetAPI context condition based on facet values.
 */
class facetapi_context_condition_facet_values extends context_condition {
  /**
   * Omit condition values. We will provide a custom input form for our conditions.
   */
  function condition_values() {
    return array();
  }

  /**
   * Condition form.
   */
  function condition_form($context) {
    $form = parent::condition_form($context);
    unset($form['#options']);
    $form['#type'] = 'textarea';
    $form['#default_value'] = implode("\n", $this->fetch_from_context($context, 'values'));
    $form['#description'] = t('Coma separated facet values. Example: "facet1:value1,facet2:value2".
        <br/>When only the facetname is given, any filter value of that facet will trigger the context.
        <br/>Insert <none> to activate this context when no facet is active.
        <br/>Prepending with a ~ negates the line.');
    return $form;
  }

  /**
   * Condition form submit handler.
   */
  function condition_form_submit($values) {
    $parsed = array();
    // Explode by lines.
    $items = explode("\n", $values);
    if (!empty($items)) {
      foreach ($items as $line) {
        $line = trim($line);
        if (!empty($line)) {
          $parsed[] = $line;
        }
      }
    }
    return $parsed;
  }

  /**
   * Execute.
   */
  function execute() {
    if ($this->condition_used()) {
      $searchers = facetapi_get_active_searchers();
      foreach ($searchers as $searcher) {
        if ($adapter = facetapi_adapter_load($searcher)) {
          $adapter->processActiveItems();
          foreach ($this->get_contexts() as $context) {
            // Retrieve facet values.
            $values = $this->fetch_from_context($context, 'values');
            if (strcasecmp($values[0], '<none>') == 0  ) {
              if (count($adapter->getAllActiveItems()) == 0 ) {
                $this->condition_met($context);
              }
              unset($values[0]);
//              break;
            }
            elseif (strcasecmp($values[0], '~<none>') == 0  ) {
              if (count($adapter->getAllActiveItems()) > 0 ) {
                $this->condition_met($context);
              }
              unset($values[0]);
//              break;
            }
            foreach ($values as $line) {
              // Extract values of the facets.
              $facet_values = array();
              foreach (explode(',', $line) as $pair) {
                if (!empty($pair)) {
                  $pair_array = explode(':', $pair);
                  if (count($pair_array) == 2) {
                    list($facet_name, $facet_value) = $pair_array;
                    $facet_values[$facet_name][] = $facet_value;
                  }
                  elseif (count($pair_array) == 1) {
                    $facet_values[$line] = NULL;
                  }
                }
              }
              // Go through all facet values and make sure they are all active.
              foreach ($facet_values as $facet_name => $facet_values) {
                $condition_met = TRUE;
                /*
                 *  Check if $facet_name is prepended with a ~
                 */
                $negate = TRUE;
                if (strpos($facet_name, '~') !== FALSE) {
                  $facet_name = substr($facet_name, 1);
                  $negate = FALSE;
                }

                /*
                 * First check facet + value combinations
                 */
                if (isset($facet_value)) {
                  foreach ($facet_values as $facet_value) {
                      $condition_met = $condition_met && ($adapter->itemActive($facet_name, $facet_value) && $negate);
                    }
                }
                /*
                 *  Now check if a certain facet is active
                 */
                else {
                  $facets = $adapter->getEnabledFacets();
                  $facet = $facets[$facet_name];
                  $activeitems = $adapter->getActiveItems($facet);
                  $condition_met = $condition_met && ( (count($activeitems) > 0 ) == $negate);
                }
              }
              if ($condition_met) {
                $this->condition_met($context);
                break;
              }
            }
          }
        }
      }
    }
  }
}
