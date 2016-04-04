jQuery(document).ready(function($) {

/**
 * [description]
 * @param  {[type]} Basic Page Quick links Scroll
 * @return {[type]}       [description]
 */

  // Open search filter
function getUrlVars() {
  var vars = [], hash;
  var hashes = window.location.href.slice(window.location.href.indexOf('?') + 1).split('&');
  for (var i = 0; i < hashes.length; i++) {
    hash = hashes[i].split('=');
    vars.push(hash[0]);
    vars[hash[0]] = hash[1];
  }
  return vars;
}
  var value = getUrlVars()["f[0]"];
  if (value != undefined) {
    jQuery('div.akdn-filter-js-wrapper').css('display', 'block');
  }

  jQuery('.accordian-quick-links a').click(function(){
    jQuery('html, body').animate({
        scrollTop: jQuery(jQuery(this).attr('href') ).offset().top
    }, 500);
    return false;
  });

  // What we do Body summary Text
jQuery(".what-we-do-body-more .morelink").click(function(){
  jQuery(this).hide();
  jQuery(".what-we-do-body-more-body").removeClass("collapse");
});

jQuery(".what-we-do-body-more-body .lesslink").click(function(){
  jQuery(".what-we-do-body-more .morelink").show();
  jQuery(".what-we-do-body-more-body").addClass("collapse");
});


  // to hide what's News label
  what_found = jQuery('#what-is-new-nofound').hasClass('nofound');
  what_news_found = jQuery('#what-is-new-news-nofound').hasClass('nofound');
  if (what_found && what_news_found) {
    jQuery('#what-is-new-nofound').addClass('hide');
  }
  // remove () from file size
  var content = jQuery(".file-size").text().replace(/[()]/g,'');
  jQuery(".file-size").html(content);

  // hide the open quotations
  jQuery('.toggle-quote-display').click(function(){
    jQuery(this).closest(".other-quotes").toggle();
  });

  // toggle quote finder
  jQuery('#block-akdn-custom-akdn-speech-tools .item-list > h3').siblings().css("display", "none");
  jQuery('#block-akdn-custom-akdn-speech-tools .item-list > h3').addClass("facet-api-close");
  jQuery('#block-akdn-custom-akdn-speech-tools .item-list > h3').click(function(){
    jQuery(this).siblings().toggle();
    jQuery(this).toggleClass("facet-api-close");
    jQuery(this).toggleClass("facet-api-open");
  });

  // Toggle date filters.
  jQuery('#block-akdn-custom-akdn-date-filter .block-title').addClass("facet-api-open");
  jQuery('#block-akdn-custom-akdn-date-filter .block-title').click(function(){
    jQuery(this).siblings().toggle();
    jQuery(this).toggleClass("facet-api-close");
    jQuery(this).toggleClass("facet-api-open");
  });

  // toggle speaker list
  jQuery('div#speech-speakers-list > h3').siblings().hide();
  jQuery('div#speech-speakers-list > h3').click(function(){
    jQuery(this).siblings().toggle();
  });

  jQuery('div#speech-speakers-list-more > h3').siblings().hide();
  jQuery('div#speech-speakers-list-more > h3').click(function(){
    jQuery(this).siblings().toggle();
    jQuery(this).toggle();
    jQuery('div#speech-speakers-list-more-hide > h3').show();
  });

  jQuery('div#speech-speakers-list-more-hide > h3').hide();
  jQuery('div#speech-speakers-list-more-hide > h3').click(function(){
    jQuery(this).toggle();
    jQuery('div#speech-speakers-list-more > h3').siblings().hide();
    jQuery('div#speech-speakers-list-more > h3').show();
    jQuery('#speech-speakers-list').focus();
  });

  // Toggle facets.
  jQuery('section.block-facetapi > div > h2').addClass("facet-api-open");
  jQuery('section.block-facetapi > div > h2').click(function(){
    jQuery(this).siblings().toggle();
    jQuery(this).toggleClass("facet-api-close");
    jQuery(this).toggleClass("facet-api-open");
  });

   // toggle quote finder
  //jQuery('.page-speech-quotes .views-row-1').siblings().css('display', 'none');
  //jQuery('.page-speech-quotes .views-row-1').siblings('h3').css('display', 'block');

 /* jQuery('.more-quotes').click(function() {
  	var moreQuotes = jQuery(this).find('span:first').attr('class');
  	jQuery('.' + moreQuotes).css('display', 'block');
  });*/
    // toggle quote finder more
  /*  jQuery('.views-row-first', context).nextAll().hide();
    jQuery('.more-quotes span').click(function(){
        var classs = jQuery(this).attr('class');
        jQuery('div.'+classs).toggle();
    });*/

/* hide More Quotations link if there is only one Quotations */
jQuery(".view-id-solr_quotes .view-grouping-content").each(function(){
      var check = jQuery(this).find('div.views-row:nth-child(3)').length;
     if(check == 0){
      jQuery(this).find('.more-quotes').hide();
     }
});

  if (jQuery('.flexslider li').length == 1 ) {
  	jQuery('.flexslider .field-content .slide-text').css('display', 'block');
  }
  // $('#block-views-exp-speeches-page #edit-field-publish-date-value-wrapper select').selectToUISlider().hide();

  // Set up for jCarousel project display.
  var breaks = {
    normal: 980,
    narrow: 740
  };
  var w = $(window).width();
  var vis = 0;
  if (w >= breaks.normal) {
    vis = 3;
  }
  else if (w < breaks.normal && w >= breaks.narrow) {
    vis = 2;
  }
  else {
    vis = 1;
  }
  var select = '';
  /*if ($('#block-views-projects-block .carousel').length > 0) {
    select = '#block-views-projects-block .carousel';
  } else if ($('.view-id-projects.view-display-id-block_3 .carousel').length > 0) {
    select = '.view-id-projects.view-display-id-block_3 .carousel';
  }*/
  /*if ($('.view-id-projects .carousel').length > 0) {
    select = '.view-id-projects .carousel';
  }
  var numProjects = $(select + ' li').length;
  if (numProjects <= vis) {
    $(select).jcarousel({
      visible: vis,
      scroll: vis,
      buttonNextHTML: null,
      buttonPrevHTML: null
    });
  } else {
    $(select).jcarousel({
      visible: vis,
      scroll: vis,
      buttonNextHTML: "<div></div>",
      buttonPrevHTML: "<div></div>",
    });
  }*/

  var views_ids = new Array("#views-exposed-form-press-releases-page","#views-exposed-form-articles-page","#views-exposed-form-speeches-page","#views-exposed-form-projects-page-1","#views-exposed-form-publications-page","#views-exposed-form-galleries-page","#views-exposed-form-podcasts-page","#views-exposed-form-events-page-past","#views-exposed-form-articles-page-1","#views-exposed-form-speech-themes-block-1");

  for (x in views_ids) {
    if ($(views_ids[x]).length) {
      $(views_ids[x]+" #edit-field-agency-tid-wrapper select, "+views_ids[x]+" #edit-field-focus-area-tid-wrapper select, "+views_ids[x]+" #edit-field-country-tid-wrapper select, "+views_ids[x]+" #edit-tid-wrapper select, "+views_ids[x]+" #edit-field-speech-speaker-nid, "+views_ids[x]+" #edit-field-speech-themes-tid-wrapper select").chosen();
    }
  }

  views_id = "#views-exposed-form-akaa-projects-page";
  if ($("#views-exposed-form-akaa-projects-page").length) {
    $(views_id+" #edit-field-region-tid-wrapper select, "+views_id+" #edit-field-arch-country-tid-wrapper select, "+views_id+" #edit-field-city-tid-wrapper select, "+views_id+" #edit-field-building-type-tid-wrapper select").chosen();
  }
    ap_views_id = '#views-exposed-form-akmi-performance-page';//'#block-views-exp-akmi-performance-page';
    if ($("#views-exposed-form-akmi-performance-page").length) {
        $(ap_views_id + " #edit-field-related-artists-nid-wrapper select").chosen({placeholder_text_multiple: "Select Artists"});
        $(ap_views_id + " ##edit-field-performance-year-tid-wrapper select").chosen({placeholder_text_multiple: "Select Year"});
        $(ap_views_id + " #edit-field-artist-country-origin-tid-wrapper select").chosen({placeholder_text_multiple: "Select Country"});
        $(ap_views_id + " #edit-field-artist-related-instruments-nid-wrapper select").chosen({placeholder_text_multiple: "Select Intruments"});
        //$(ap_views_id+" #edit-field-related-artists-nid-wrapper .chzn-choices").prepend("<option>Select Artists</option>");
        // $(ap_views_id+" #edit-field-performance-year-tid-wrapper select, "+ap_views_id+" #edit-field-artist-country-origin-tid-wrapper select, "+ap_views_id+" #edit-field-artist-related-instruments-nid-wrapper select").chosen();
    }
});

(function ($) {

  Drupal.behaviors.akdnCustom = {
    attach: function (context, settings) {
      var x, w;
      var breaks = {
        normal: 980,
        narrow: 740,
        curr: ''
      };
      var howMany = {
        normal: 3,
        narrow: 2,
        mobile: 1
      };
      w = $(window).width();
      if (w >= breaks.normal) {
        breaks.curr = 'normal';
      }
      else if (w < breaks.normal && w >= breaks.narrow) {
        breaks.curr = 'narrow';
      }
      else {
        breaks.curr = 'mobile';
      }

      function resizedw(){
        var width = $(window).width();
        var change = false;
        var toChange = '';
        //figure out which display we currently have && what the new display is
        if (width >= breaks.normal) {
          if (breaks.curr != 'normal') {
            change = true;
            toChange = 'normal';
          }
        }
        else if (width < breaks.normal && width >= breaks.narrow) {
          if (breaks.curr != 'narrow') {
            change = true;
            toChange = 'narrow';
          }
        }
        else {
          if (breaks.curr != 'mobile') {
            change = true;
            toChange = 'mobile';
          }
        }
        //console.log(toChange);
        if (change) {
        /*  var oldCl = 'jcarousel-skin-akdn';
          if (breaks.curr != 'normal') {
            oldCl += '-' + breaks.curr;
          }
          var newCl = 'jcarousel-skin-akdn';
          if (toChange != 'normal') {
            newCl += '-' + toChange;
          }
          $('#block-views-projects-block ul').removeClass(oldCl);
          $('#block-views-projects-block ul').addClass(newCl);
        */
          breaks.curr = toChange;
          var vis = howMany[toChange];

          var select = '';
          /*if ($('#block-views-projects-block .carousel').length > 0) {
            select = '#block-views-projects-block .carousel';
          } else if ($('.view-id-projects.view-display-id-block_3 .carousel').length > 0) {
            select = '.view-id-projects.view-display-id-block_3 .carousel';
          }*/
          /*if ($('.view-id-projects .carousel').length > 0) {
            select = '.view-id-projects .carousel';
          }
          var numProjects = $(select + ' li').length;
          //$('#block-views-projects-block .carousel').jcarousel('destroy');
          if (numProjects <= vis) {
            $(select).jcarousel({
              visible: vis,
              scroll: vis,
              //buttonNextHTML: null,
              //buttonPrevHTML: null
            });
          } else {
            $(select).jcarousel({
              visible: vis,
              scroll: vis,
              //buttonNextHTML: "<div></div>",
              //buttonPrevHTML: "<div></div>",
            });
          }
          $(select).jcarousel('reload');*/
          /*if ($('.view-id-projects.view-display-id-block_3 .carousel').length > 0) {
            $('.view-id-projects.view-display-id-block_3 .carousel').jcarousel({
              visible: vis,
              scroll: vis,
            });
            $('.view-id-projects.view-display-id-block_3 .carousel').jcarousel('reload');
          }*/
        }

      }

      $(window).resize(function() {
          clearTimeout(x);
          x = setTimeout(function() {
              resizedw();
          }, 100);
      });

      // Hide the submit button on the contact form when no body field is available.
      // We hook in to the settings that webform conditional is provididng.
      /*if ($('form#webform-client-form-4310').length){
        var showOn = Drupal.settings.webform_conditional.fields.subject.dependent_fields.message.monitor_field_value;
        $('form#webform-client-form-4310 #edit-submitted-subject').change(function(){
          if(jQuery.inArray($(this).val(), showOn) == -1){
            $('form#webform-client-form-4310 #edit-submit').show();
          }
          else {
            $('form#webform-client-form-4310 #edit-submit').hide();
          }

        });
      }*/

    },
    detach: function (context, settings) {

    }
  };

}(jQuery));

function accordian_click(param) {
  jQuery('.accordian-icon').removeClass('active');
 if (jQuery(param).parent().find('.according-related-heading').hasClass("collapse")) {
      jQuery('.accordian-icon').not(jQuery(param)).parent().find('.according-related-heading').removeClass("rel-extend");
      jQuery('.accordian-icon').not(jQuery(param)).parent().find('.according-related-heading').addClass("collapse");
      jQuery('.accordian-icon').not(jQuery(param)).removeClass('active');
      jQuery(param).parent().find('.according-related-heading').removeClass("collapse");
      jQuery(param).parent().find('.according-related-heading').addClass('rel-extend');
 }
 else{
  jQuery(param).parent().find('.according-related-heading').removeClass("rel-extend");
  jQuery(param).parent().find('.according-related-heading').addClass('collapse');
  jQuery(param).removeClass('active');
 }
 if (jQuery(param).parent().find('.accordian-main-body').hasClass("collapse")) {
    jQuery('.accordian-icon').not(jQuery(param)).parent().find('.accordian-main-body').removeClass("extend");
    jQuery('.accordian-icon').not(jQuery(param)).parent().find('.accordian-main-body').addClass('collapse');
    jQuery('.accordian-icon').not(jQuery(param)).parent().find('.according-related-heading').removeClass("rel-extend");
    jQuery('.accordian-icon').not(jQuery(param)).parent().find('.according-related-heading').addClass("collapse");
    jQuery(param).parent().find('.accordian-main-body').removeClass("collapse");
    jQuery(param).parent().find('.accordian-main-body').addClass('extend');
    jQuery(param).addClass('active');
 }
 else{
   jQuery(param).parent().find('.accordian-main-body').removeClass("extend");
   jQuery(param).parent().find('.accordian-main-body').addClass('collapse');
   jQuery(param).removeClass('active');
 }
}
jQuery('.accordian-image-rel-wrapper').each(function(){
if(!jQuery(this).children('.image').length > 0) {
 jQuery(this).addClass('hide');
}
});

// Show/hide twitter-instagram home page blocks
var twitter_block = jQuery('.home-page-twitter-pane');
var instagram_block = jQuery('.home-page-instagram-pane');
var img = twitter_block.find('img');
if (img.length) {
  twitter_block.show();
  instagram_block.hide();
}
else {
  twitter_block.hide();
  instagram_block.show();
}

// Hide Active Languge name
jQuery('.language-switcher-locale-url').find('.active').hide();

// Open 'In the media slide link in new tab'
jQuery('.slide.In').find("a").attr("target", "_blank");

