
(function($) {

/**
 * @ingroup admin_behaviors
 * @{
 */

/**
 * Click a button to test the services
 *
 */
Drupal.behaviors.questionnairetestServices = {
	attach: function (context, settings) { 
      $("#questionnaire-testservices", context).once("init-questionnaire-testServices",  function() {
	    $(this).click( function() {

	     
         var node = {
	  	     'apiPath': Drupal.settings.basePath + 'api/node'
 	      };
	      // REST functions.
	      node.submit = function(node) {
	        $.ajax({
	          type: "POST",
	          url: this.apiPath,
	          data: JSON.stringify(node),
	          dataType: 'json',
	          contentType: 'application/json',
	          success: function(result) {
	            alert("result" + result);
	          },
	          error: function (err) {
	          	alert (err.statusText); // This gives the proper Drupal Error (for example if you store a string in a number question).
	          }
	       });
	     };
	     mynode = {
	    		 title : "reinier",
	    		 type : "page",
	    		 body : {und: {}},
	    		 field_me : {und : {}},
	    		 language : "und"
	     };
	     mynode['body']['und'][0] = {};
	     mynode['body']['und'][0]['value'] = "here we are!";
	     mynode['field_me']['und'][0] = {};
	     mynode['field_me']['und'][0] = 11;
	     node.submit(mynode);	    	
	    	
	    });
      });
	}
};

/**
 * @} End of "defgroup admin_behaviors".
 */

})(jQuery);
