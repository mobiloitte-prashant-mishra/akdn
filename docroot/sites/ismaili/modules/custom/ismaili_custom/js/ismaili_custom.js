/**
 * @file
 * A javascript file for the module.
 */
(function ($) {

  Drupal.behaviors.ismaili_custom = {
    attach: function (context, settings) {
         $( "a.close" ).live( "click", function() {
        Drupal.CTools.Modal.dismiss();
      });
    }
  };

  Drupal.behaviors.ismaili_custom_web_form_submissions_delete = {
    attach: function (context, settings) {
        $("#ismaili-custom-webform-listing").find("#edit-delete").click(function(){
        	if(!$("#ismaili-custom-webform-listing").find("[name^='subscribers']:checked").length){
        	   alert("Please select atleast one subscription");
               return false;
        	}else{
        		var r = confirm("Are you sure want to delete!");
        		return r;
        	}
        });     
    }
  };


    Drupal.behaviors.ismaili_custom_simplenews_subscription_delete = {
    attach: function (context, settings) {
        $("#ismaili-custom-unconfimed-simplenews").find("input[value='Delete']").click(function(){
          if(!$("#ismaili-custom-unconfimed-simplenews").find("[name^='simplenews_subscribers']:checked").length){
             alert("Please select atleast one subscription");
               return false;
          }else{
            var r = confirm("Are you sure want to delete!");
            return r;
          }
        });     
    }
  };

    Drupal.behaviors.ismaili_custom_video_element_states = {
    attach: function (context, settings) {
        //Video type state action.
        var video_type = $("#edit-field-video-type-und").val();
        if(video_type == 'Youtube/Vimeo') {
            $("#edit-field-brightcove").hide();
        }
      $("#edit-field-video-type-und").change(function(){
        video_type = $(this).val();
        if (video_type == 'Youtube/Vimeo') {
          $("#edit-field-brightcove").hide();
        } else {
          $("#edit-field-brightcove").show();
        }
      });
        //Article type video state action.
        var article_type = $("#edit-field-article-type-und").val();
         if (article_type == '9076') {
               $("#edit-field-images-for-carousal").hide();
             }
        $("#edit-field-article-type-und").change(function(){
             article_type = $(this).val();
             if (article_type == '9076') {
               $("#edit-field-images-for-carousal").hide();
             } else {
               $("#edit-field-images-for-carousal").show();
             }
        });
      }
    };
    Drupal.behaviors.ismaili_custom_language_switcher = {
    attach: function (context, settings) {
        var lang = $("html").attr("lang");
        var s_lang = $(".language-switcher-locale-url").find("."+lang);
        $(s_lang).remove();
        $(".language-switcher-locale-url").prepend(s_lang); 
    }
  };
    

}(jQuery));





