(function ($) {
  
  
  Drupal.behaviors.percentaudit = {
    attach: function (context, settings) {
    var sum = 0;
    var inputvalue;
    Drupal.devtractheme4.disableremove();
    //upal.devtractheme4.disableaddpurpose();
    
    $('#edit-field-fieldtrip-fc-purpose input.form-text:not(.text-full):not(.menuresize-processed)', context).each(function () {
    
      inputvalue = parseInt($(this).val()) || 0;
      
      if(sum >= 100 && inputvalue == 0 ){
	$(this).css("background-color", "red");
	Drupal.devtractheme4.disableaddpurpose();
	
	//Drupal.devtractheme4.disableaddpurpose();
      }else if(sum < 100 && inputvalue == 0){
	Drupal.devtractheme4.disableaddpurpose();
	sum = 100 - sum;	
	//console.log("balo is "+sum);
	$(this).val(sum);
	
      }else if(inputvalue != 0){
	sum = sum + parseInt($(this).val());
	//console.log("Sum is "+sum);
      }
      
    })
    
    .change (function() {
       
      var changeobject = $(this); 
      Drupal.devtractheme4.percentit(changeobject);
 
      })
    
    .addClass('menuresize-processed');
    
     
    
    }
  };
  
  
Drupal.devtractheme4 = {};
  
Drupal.devtractheme4.percentit = function(currenttbx) {
  var total = 0;
  var object;
  $('#edit-field-fieldtrip-fc-purpose input.form-text:not(.text-full)').each(function () {
    
    object = $(this);
    
    inputvalue = parseInt($(this).val()) || 0;
    
    if(inputvalue != 0){
	total = total + inputvalue;
	object.css("background-color", "white");
      }
      $('#errconsole').remove();
      if(total >= 100){
      //console.log("Total is > 100 "+total);
      
	
	currenttbx.css("background-color", "red").next().after("<div style='color:red; padding-top:7px;' id='errconsole'>Value is more than 100</div>");
	Drupal.devtractheme4.disableaddpurpose();
	
      }else if(total < 100){
	Drupal.devtractheme4.enableaddpurpose();
	
      }
      
  });
  
}

Drupal.devtractheme4.disableremove = function() {
  //console.log("Inside disable purpose");
  var total = $('#edit-field-fieldtrip-fc-purpose tbody').children('tr').length;
  
  var removebtns = $('#edit-field-fieldtrip-fc-purpose tbody').children('tr').children('td:nth-child(2)').children().siblings('input:submit');
  
  // console.log("a: "+total);
   
   if(total == 1){
     removebtns.each(function(){
       //console.log("Inside disable remove len is "+total);
	//console.log("value is "+$(this).val());
	$(this).attr('disabled','disabled');
	//console.log("value of disabled is "+$(this).attr('disabled'));
    });
  }else{
    removebtns.each(function(){
      //console.log("Inside enable remove len is "+total);
	//console.log("value is "+$(this).val());
	$(this).removeAttr('disabled');
	//console.log("value of disabled is "+$(this).attr('disabled'));
    });
  }
}

Drupal.devtractheme4.disableaddpurpose = function() {
  //console.log("Inside disable purpose");
  $('.field-add-more-submit').each(function(){
    //console.log("disable: "+$(this).attr('name')+" element is type "+$(this).attr('type'));
    
    //$(this).prop("disabled",true);
    $(this).attr("disabled", "disabled");
    
    //console.log("value of disabled is "+$(this).attr('disabled'));
  });
  
  
   
}

Drupal.devtractheme4.enableaddpurpose = function() {
  //console.log("Inside enable purpose");
  $('.field-add-more-submit').each(function(){
    //console.log("enable: "+$(this).attr('name')+" element is type "+$(this).attr('type'));
      $(this).removeAttr('disabled');
      //$(this).prop("disabled",false);
      //console.log("value of disabled is "+$(this).attr('disabled'));
  });
  
  
   
}

})(jQuery);


