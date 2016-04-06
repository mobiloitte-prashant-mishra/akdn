/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
/*(function ($, Drupal, window, document, undefined) {


// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.image_autosize_behavior = {
  attach: function(context, settings) {

    $('.image-full img').each(function(str) {
      var self = $(this);
         $.ajax({
            url: Drupal.settings.basePath + 'image_autosize_ajax_create_image_style',
            type: 'GET',
            cache: false,
            data: 'img_src='+ $( this ).attr('src') +'&size=full',
            success: function(data) {
                  if(data != ' ') {
                    $( self ).attr('src',data);
                  }
            }
        });
    });

    $('.image-right-half img').each(function(str) {
      var self = $(this);
         $.ajax({
            url: Drupal.settings.basePath + 'image_autosize_ajax_create_image_style',
            type: 'GET',
            cache: false,
            data: 'img_src='+ $( this ).attr('src') +'&size=half',
            success: function(data) {
                  if(data != ' ') {
                    $( self ).attr('src',data);
                  }
            }
        });
    });

    $('.image-left-half img').each(function(str) {
      var self = $(this);
         $.ajax({
            url: Drupal.settings.basePath + 'image_autosize_ajax_create_image_style',
            type: 'GET',
            cache: false,
            data: 'img_src='+ $( this ).attr('src') +'&size=half',
            success: function(data) {
                  if(data != ' ') {
                    $( self ).attr('src',data);
                  }
            }
        });
    });

     $('.image-right-third img').each(function(str) {
      var self = $(this);
         $.ajax({
            url: Drupal.settings.basePath + 'image_autosize_ajax_create_image_style',
            type: 'GET',
            cache: false,
            data: 'img_src='+ $( this ).attr('src') +'&size=one_third',
            success: function(data) {
                  if(data != ' ') {
                    $( self ).attr('src',data);
                  }
            }
        });
    });

     $('.image-left-third img').each(function(str) {
      var self = $(this);
         $.ajax({
            url: Drupal.settings.basePath + 'image_autosize_ajax_create_image_style',
            type: 'GET',
            cache: false,
            data: 'img_src='+ $( this ).attr('src') +'&size=one_third',
            success: function(data) {
                  if(data != ' ') {
                    $( self ).attr('src',data);
                  }
            }
        });
    });


  }
};


})(jQuery, Drupal, this, this.document);*/

jQuery(document).ready(function() {
   jQuery('.image-full img').each(function(str) {
      var self = jQuery(this);
         jQuery.ajax({
            url: Drupal.settings.basePath + 'image_autosize_ajax_create_image_style',
            type: 'GET',
            cache: false,
            data: 'img_src='+ jQuery( this ).attr('src') +'&size=full',
            success: function(data) {
                  if(data != ' ') {
                    jQuery( self ).attr('src',data);
                  }
            }
        });
    });

    jQuery('.image-right-half img').each(function(str) {
      var self = jQuery(this);
         jQuery.ajax({
            url: Drupal.settings.basePath + 'image_autosize_ajax_create_image_style',
            type: 'GET',
            cache: false,
            data: 'img_src='+ jQuery( this ).attr('src') +'&size=half',
            success: function(data) {
                  if(data != ' ') {
                   jQuery( self ).attr('src',data);
                  }
            }
        });
    });

   jQuery('.image-left-half img').each(function(str) {
      var self = jQuery(this);
         jQuery.ajax({
            url: Drupal.settings.basePath + 'image_autosize_ajax_create_image_style',
            type: 'GET',
            cache: false,
            data: 'img_src='+ jQuery( this ).attr('src') +'&size=half',
            success: function(data) {
                  if(data != ' ') {
                    jQuery( self ).attr('src',data);
                  }
            }
        });
    });

     jQuery('.image-right-third img').each(function(str) {
      var self = jQuery(this);
         jQuery.ajax({
            url: Drupal.settings.basePath + 'image_autosize_ajax_create_image_style',
            type: 'GET',
            cache: false,
            data: 'img_src='+ jQuery( this ).attr('src') +'&size=one_third',
            success: function(data) {
                  if(data != ' ') {
                    jQuery( self ).attr('src',data);
                  }
            }
        });
    });

     jQuery('.image-left-third img').each(function(str) {
      var self = jQuery(this);
         jQuery.ajax({
            url: Drupal.settings.basePath + 'image_autosize_ajax_create_image_style',
            type: 'GET',
            cache: false,
            data: 'img_src='+ jQuery( this ).attr('src') +'&size=one_third',
            success: function(data) {
                  if(data != ' ') {
                    jQuery( self ).attr('src',data);
                  }
            }
        });
    });

   });

