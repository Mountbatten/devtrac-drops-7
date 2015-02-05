/**
 * 
 */
(function ($) {


Drupal.behaviors.devtracwms = {
  attach: function (context, settings) {
    $('.getfeatureaddlink:not(.wmsdevtrac-processed)', context)
      .click (function() {
        return Drupal.devtracwms.click(this);
      })
    .addClass('wmsdevtrac-processed');
  }
};

//Initialize settings array.
Drupal.devtracwms = {};

Drupal.devtracwms.click = function(me) {
  $(this).addClass('getfeatureinfo-submitting');
  var url = this.href;
  
  if (url == undefined) {
    url = me.href;
  }
  if (url == undefined) {
    return true;
  }
  $.ajax({
    url: url,
    type: 'GET',
    success: function(response) {
      // Call all callbacks.
      if (response.__callbacks) {
        $.each(response.__callbacks, function(i, callback) {
          eval(callback)(element, response);
        });
      }
      alert(response.content);
      myPath = window.location.pathname.split('/');
      // we go back to the fieldtrip
      window.location =  Drupal.settings.basePath + response.redirect;
    },
    error: function(response) {
        alert("We are very sorry, something went wrong. Please report the full error through the contact form:\n\n" + response.responseText);
        $(this).removeClass('getfeatureinfo-submitting');
    },
    dataType: 'json'
  });
  return false;
};



})(jQuery);
