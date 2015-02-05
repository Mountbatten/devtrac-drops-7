
/*
 *  Remembers last quicktab clicked, very useful for comments
 *  copied from http://drupal.org/node/1454486
 *  And is ment to go into the module at some point
 */

(function ($) {
  Drupal.behaviors.quicktabsHistory = {
    attach: function(context, settings) {
      // enable accordion memory
      $('.quick-accordion', context).each(function() {
        var id = $(this).attr('id');
        var accordion = $.cookie(id);

        if (accordion != '') {
          $(this).find('h3 a[href="' + accordion + '"]').click();
        }
        $(this).find('h3 a').click(function() {
          $.cookie(id, $(this).attr('href'));
        });
      });

      // enable tab memory
      $('.quicktabs-wrapper', context).each(function() {
        var id = $(this).attr('id');
        var tab = $.cookie(id);

        if (tab != '') {
          $(this).find('ul.quicktabs-tabs a#' + tab).click();
        }
        $(this).find('ul.quicktabs-tabs a').click(function() {
          $.cookie(id, $(this).attr('id'));
        });
      });
    }
  };
})(jQuery);