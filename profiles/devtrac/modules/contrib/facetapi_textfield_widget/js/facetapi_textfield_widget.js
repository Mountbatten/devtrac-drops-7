/**
 * facetapi_textfield.js
 */

(function ($) {

  // Create a namespace
  Drupal.facetapiTextfieldWidget = {};

  Drupal.facetapiTextfieldWidget.submitForm = function() {
    /**
     * Create the required url from the active facets
     * and navigate to it.
     */
    // Get the full text search form.
    var form = $("#facetapi-textfield-widget-form");

    // Get the full text search field.
    var field = arguments[0]['name'];

    // Get an index to start so we won't overwrite existing input fields
    for (var facetid = 0; form[0][facetid] !== undefined; facetid++) {
    }

    // Get the string of search terms, remove all non-functional whitespace
    var search = form[0][field].value.trim().replace(/\s+/g, '+');
    // Loop over all current search terms and add them as input fields to the form
    var searchTerms = search.split("+");
    for (var index = 0; index < searchTerms.length; index++) {
      // Add the new term field to the form
      var input = document.createElement('input');
      input.type = 'hidden';
      input.name = 'f[' + (facetid + index) + ']';
      input.value = field + ':' + searchTerms[index];
      form.append(input);
    }
  };

  // Store our function as a property of Drupal.behaviors.
  Drupal.behaviors.facetapiTextfieldWidgetVerifyForm = {
    attach: function (context, settings) {

      /**
       * Do some processing on the current search items
       */
      // Make sure the hrefs on the current search facet links are okay
      $('.current-search-item-active .facetapi-active a', context).once('currentsearchTextfieldWidgetProcessed').each(function() {
        // Extract the searchterm from the link text
        var searchterm = $(this).text().replace('[-]', '').trim();
        // Remove the searchterm from the href
        // First remove it if it is not the first
        // Then remove it if it is not the last
        // Finally remove it if it is the only term
        var href = $(this).attr("href").replace('%20' + searchterm, '').replace(searchterm + '%20', '').replace(searchterm, '');
        // Set the new href on the current search facet link
        $(this).attr("href", href);
      });
    }
  };

}(jQuery));
