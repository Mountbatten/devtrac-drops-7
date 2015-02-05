(function ($) {
  Drupal.behaviors.devtracOrgFront = {
    attach: function(context, settings) {
      
      devtracOrgFront();

      $(window).resize(function() {
        devtracOrgFront();
      });
      
      function devtracOrgFront() {
        var useHeight = $(window).height() - ( $('.front header').height() + $('.front footer').height() ) - 10;
        $('.front.page-home section.section-content').css('height', useHeight);

        // var useWidth = $(window).width();
        // $('.front.page-home section.section-content .view-home-page-slideshow').css({
        //   'width': useWidth,
        //   'height': useHeight,
        // });

        // $('.node-type-book section.section-content').css({
        //   'min-height': ( function() { return useHeight - 100;} ),
        // });

        var userMargin = ( useHeight - 400 ) / 2;
        $('.front.page-home section.section-content .region-inner.region-content-inner').css({
          'margin-top': userMargin,
        });

      }

    }
  };
})(jQuery);
