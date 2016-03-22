(function ($) {

  Drupal.behaviors.akdnTheme = {
    attach: function(context) {
      $('h1, h2, h3, h4, a', context).each(function(){
        var inside = $(this).html();
        $(this).html(inside.replace(/Aga Khan/g, 'Aga&nbsp;Khan'));
      })
      // var s = document.getElementById('section-content');
      //s.innerHTML = s.innerHTML.replace(/Aga Khan/g, 'Aga&nbsp;Khan');

      // Search for occurences of Aga Khan.
      $("body *", context).replaceText(/(aga) (khan)/gi, "$1 $2");

      // Move main image to 2nd paragraph on basic pages.
      if ($('body.node-type-page .field-name-image-colorbox-link', context).length > 0) {
        if ($('.field-name-body p', context).length > 1) {
          var main_image = $('body.node-type-page .field-name-image-colorbox-link', context);
          $('.field-name-body p:eq(1)', context).prepend(main_image);
        }
      }

      // Function for the mobile menu.
      //$('#block-menu-block-6').hide();
      $('.mobile-menu-link', context).click(function(event) {
        event.preventDefault();
        var block = $('#block-menu-block-6');
        if (block.hasClass('open')) {
          block.removeClass('open');
          $('ul li.tmp', block).remove();
        }
        else {
          $('ul', block).prepend('<li class="tmp"><a href="/">Home</a></li>');
          block.addClass('open');
        }
      });


      // Search form default text.
      $('#block-search-form .form-item-search-block-form input', context).each(function () {
        var input = $(this);
        var placeholder = "Search AKDN";
        if (!input.val()) {
          input.val(placeholder);
        }
        input.focus(function() {
          if (input.val() == placeholder) {
            input.val('');
          }
        });
        input.blur(function() {
          if (input.val() == '') {
            input.val(placeholder);
          }
        });
      });

      // Don't search for default search text.
      $('#search-block-form', context).submit(function() {
        var search_text = $(this).find('.form-text').val();
        if (search_text == 'Search AKDN') {
          $(this).find('.form-text').val('');
        }
      });

      // Add class to last item in press centre view.
      $('.view-press-center.view-display-id-block_2 .views-limit-grouping-group', context).eq(-1).addClass('last');
      //$(".view-id-projects .slide img").reflect({height:0.4, opacity:0.3});

      // Add touch capability to the project slider
      if ($('.view-id-projects .carousel li', context).length) {

        $('.view-id-projects .carousel li', context).swipe({
          swipeRight: function(event, direction, distance, duration, fingerCount) {
            $('div.jcarousel-prev', context).trigger('click');
          },
          swipeLeft: function(event, direction, distance, duration, fingerCount) {
            $('div.jcarousel-next', context).trigger('click');
          }
        });
      }

      if ($('.node-type-podcast #block-ds-extras-media').length) {
        $('.node-type-podcast .field-name-image-colorbox-link').addClass('podcast-has-video');
      }

      if ($('.media-image-wrapper .media-image-right').length) {
        $('.media-image-wrapper .media-image-right').parent('.media-image-wrapper').addClass('media-image-wrapper-right');
      }

      // Make sure e-mail links have domains attached to them.
      $('a[href^="mailto:"]', context).each(function() {
        var email = $(this).html();
        var re = /^(([^<>()[\]\\.,;:\s@\"]+(\.[^<>()[\]\\.,;:\s@\"]+)*)|(\".+\"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/;
        if (!re.test(email)) {
          $(this).replaceWith(email);
        }
      });

      /*if ($('.view-agencies.view-display-id-block_2 .views-table').length) {
        var last_row = $('.view-agencies.view-display-id-block_2 .views-table tbody tr:last');
        var odd_even_class = 'odd';
        if (last_row.hasClass('odd')) {
          odd_even_class = 'even';
        }
        last_row.removeClass('views-row-last');
        last_row.after('<tr class="'+odd_even_class+' views-row-last"><td class="views-field views-field-view-node views-align-left"><a href="/architecture">AKAA</a></td><td class="views-field views-field-title-field views-align-left"><a href="/architecture">Aga&nbsp;Khan Academies Architecture</a></td></tr>');
      }*/
      $(".site-name").lettering('words').children('span').lettering();


      //$("#views-exposed-form-akaa-projects-page input[name='body_value']").attr('placeholder','Enter Keyword');
        //toggle search box
        /*$('#akdn-search-forms .search_toggle').click(function(){
            $('#akdn-search-forms .form-item-search').toggle();
        });
        $('#akdn-search-forms .form-item-search').hide();*/

        // remove link frm footer titles
        $('.pane-geography-footer-menu h2.pane-title a').each(function(){
          $(this).removeAttr('href');
        });

        // geographies accordion functionality
        $('.location-links h2', context).once('footer-location-links').click(function(){
          if ($(this).children('.nolink').hasClass('active')) {
            $(this).children('.nolink').removeClass('active');
          }
          else {
            $('.location-links h2').children('.nolink').removeClass('active');
            $(this).children('.nolink').addClass('active');
          }
          $(this).next().slideToggle('fast');
          $('.location-links h2').next().not($(this).next()).slideUp('fast');
          $('.location-links h2').not($(this)).children('.nolink').removeClass('active');
        });

        $('.country_activity_link a', context).each(function() {
         var $this = $(this);
         var $rows = $this.closest('.country_activity_wrapper').find('.view-id-hub_pages .views-row');
         if ($rows.length) {
           $this.addClass('activity-icon-down');
         }
         else {
           $this.addClass('activity-icon-staright');
         }
        });

        $('.views-field-field-short-title .hub_pages-title', context).each(function() {
         var $this = $(this);
         var $rows = $this.closest('.views-field-field-short-title').next().find('.view-id-hub_pages .views-row');
         if ($rows.length) {
           $this.addClass('activity-icon-down');
           $this.find('a').removeAttr("href");
         }
         else {
           $this.addClass('activity-icon-staright');
         }
        });

        $('.views-field-field-hub-page-image', context).each(function() {
         var $this = $(this);
         var $rows = $this.next().next().find('.view-id-hub_pages .views-row');
         var $hreflink = $this.next().find('.hub_pages-title a').attr('href');
         if ($rows.length) {
           $this.addClass('activity-icon-down');
           $this.find('a:last').removeAttr("href");
         }
         else {
           $this.addClass('activity-icon-staright');
           $this.find('a:last').attr('href',$hreflink);
         }
        });

        // Areas of activity accordian
        $('.views-field-nothing-2 .country_activity_link', context).click(function(event){
          if ($(this).find('a').hasClass('activity-icon-down')) {
           $(this).toggleClass('active').prev().find('.view-content').slideToggle();
           event.preventDefault();
          }
        });
        // Areas of activity accordian
        $('.views-field-field-short-title .hub_pages-title', context).click(function(event){
          if ($(this).hasClass('activity-icon-down')) {
            $(this).closest('.views-field-field-short-title').next().find('.view-content').slideToggle();
            $(this).closest('.views-field-field-short-title').next().find('.country_activity_link').toggleClass('active');
           event.preventDefault();
          }
        });
         // Areas of activity accordian
        $('.views-field-field-hub-page-image', context).click(function(event){
          if ($(this).hasClass('activity-icon-down')) {
            $(this).next().next().find('.view-content').slideToggle();
            $(this).next().next().find('.country_activity_link').toggleClass('active');
           event.preventDefault();
          }
        });

        $('.views-field-nothing-2 .country_activity_title .view-content', context).hide();

        // add menu toggle button to html structure
        var menubtn  = "<li>"
                  + "<div class='menu-btn'>"
                  + "<span class='glyphicon glyphicon-menu-hamburger'></span>"
                  + "</div>"
                  + "</li>"
        if (!$('.akdn_main_body .top-navbar li .print_toggle', context).parents('ul').children().find('.menu-btn').length > 0) {
          $('.akdn_main_body .top-navbar li .print_toggle', context).parents('ul').append(menubtn);
        }
        function menubar() {

          // dropdown add span if on smaller screens
          if ($(window).width() < 992) {
            if (!$(".main-navbar", context).children().find('.menu:first').find(' > li > .nolink').children().hasClass("subnav")) {
              $(".main-navbar").children().find('.menu:first').find(' > li > .nolink').append('<span class="subnav"></span>')
            }
          } else {
            $(".main-navbar", context).children().find('.menu:first').find(' > li > .nolink').find(".subnav").remove();
          }

          // dropdown main hide show
          if ($(window).width() < 992) {
              $(".main-navbar", context).children().find('.menu').children('li').each(function () {
                  $(this, context).once('menu-sm').click(function (e) {
                      if ($(this).hasClass('active')) {
                          $(this).removeClass('active');
                          $(this).children('.menu').stop().slideUp().css('height', 'auto');
                          e.stopPropagation();
                      } else {
                          $(this).siblings().removeClass('active');
                          $(this).siblings().children('.menu').stop().slideUp().css('height', 'auto');
                          $(this).addClass('active');
                          $(this).children('.menu').stop().slideDown().css('height', 'auto');
                          e.stopPropagation();
                      }
                  });
              });
          }
        }

        // dropdown menu hide on resize
        $(window).resize(function(){
          if ($(window, context).width() > 992 && $(".main-navbar", context).children().find('.menu:first').children('li').children('.menu').length > 0) {
            $(".main-navbar", context).children().find('.menu:first').children('li').each(function () {
                $(this, context).children('.menu').hide();
                $(this, context).hover(function(){
                  $(this).children('.menu').show();
                },function(){
                  $(this, context).children('.menu').hide();
                });
            });
          } else {
            $(".main-navbar", context).children().find('.menu:first').children('li').each(function () {
              $(this).unbind('mouseenter').unbind('mouseleave');
            });
          }
        });

        // main navbar click event to show dropdown
          $(".menu-btn", context).click(function(e){
              // e.preventDefault();
              $(this, context).parents().find('.main-navbar').stop().slideToggle( 'fast', function(){
                  $(this).css('overflow','').css('height', 'auto');
               });
            // return false;
        });

        // remove text from carousel bullets
        $('.flex-control-nav').find('a').text('');

        //equalizer start
        $(window).load(function(){
          $('.akaa-akmi-body .grid-social-block').each(function() {
            $(this).addClass( "pane-facebook-feeds");
          });
          $('.pane-facebook-feeds', context).wrapAll( "<div class='social-block equalize' />");
          $('.pane-facebook-feeds').each(function() {
            $(this).addClass( "eq-col");
          });
        });
       //make social box equal height
        function equailzer() {
          $('.equalize', context).each(function(){
            $('.eq-col', context).height('auto');
              var highestBox = 0;
              $(this, context).find('.eq-col').each(function(){
                  if($(this).height() > highestBox){
                      highestBox = $(this).height();
                  }
              })
              $(this).find('.eq-col').height(highestBox);
          });
        }
        //equalizer end
        function carousel_equailzer() {
          var ww = $(window).width();
          if (ww < 768) {
            $('.whatsnew-right, .geography-page .hub-about-short-title').height('auto');
          } else if (768 < ww < 1199){
          var highestBox = $('.carousel-left .banner-slideshow-views > .view-content, .pane-featured-slideshow').height();
          $('.whatsnew-right, .geography-page .hub-about-short-title').height(highestBox);
          } else if ( ww > 1199){
          $('.whatsnew-right, .geography-page .hub-about-short-title').height(460);
          }
          else {
            $('.whatsnew-right, .geography-page .hub-about-short-title').height(460);
          }
        }
        function facts_equailzer() {
            var ww = $(window).width();
            $('.akdn-facts-block-row').height('auto');
            var maxHeight = -1;
            $('.akdn-facts-block-row', context).each(function() {
              $(this).height('auto');
             maxHeight = maxHeight > $(this).height() ? maxHeight : $(this).height();
            });
            $('.akdn-facts-block-row', context).each(function() {
              $(this).height('auto');
             $(this).height(maxHeight);
            });
            if (ww < 767) {
            $('.akdn-facts-block-row', context).each(function() {
              $(this).height('auto');
            });
          }
         }

        function listing_equailzer() {
          var ww = $(window).width();
          var maxHeight = -1;
          $('.publication-list-container .views-row, .page-search .view-solr-site-search .views-row, .what-we-do-inner-wrapper, .whatwedo-project-row, .akaa-press-centre-inner-wrapper', context).each(function() {
            $(this).height('auto');
            maxHeight = maxHeight > $(this).height() ? maxHeight : $(this).height();
          });
          $('.publication-list-container .views-row, .page-search .view-solr-site-search .views-row, .what-we-do-inner-wrapper, .whatwedo-project-row, .akaa-press-centre-inner-wrapper', context).each(function() {
            $(this).height('auto');
            $(this).height(maxHeight);
          });
          if (ww < 480) {
            $('.publication-list-container .views-row, .page-search .view-solr-site-search .views-row, .what-we-do-inner-wrapper, .whatwedo-project-row, .akaa-press-centre-inner-wrapper', context).each(function() {
              $(this).height('auto');
            });
          }
         }

        function aboutus_equailzer() {
          var ww = $(window).width();
          $('.akdn-basic-page-about-us [class*="panel-panel grid-"]').height('auto');
          $('.press-release-detail [class*="panel-panel grid-"]').height('auto');
          $('.section-content [class*="panel-panel grid-"]').height('auto');
            var maxHeight = -1;
          $('.akdn-basic-page-about-us [class*="panel-panel grid-"], .press-release-detail [class*="panel-panel grid-"], .section-content [class*="panel-panel grid-"]', context).each(function() {
            $(this).height('auto');
            maxHeight = maxHeight > $(this).height() ? maxHeight : $(this).height();
          });
          $('.akdn-basic-page-about-us [class*="panel-panel grid-"], .press-release-detail [class*="panel-panel grid-"], .section-content [class*="panel-panel grid-"]', context).each(function() {
            $(this).height('auto');
            $(this).height(maxHeight);
          });
          if (ww < 767) {
            $('.akdn-basic-page-about-us [class*="panel-panel grid-"], .press-release-detail [class*="panel-panel grid-"], .section-content [class*="panel-panel grid-"]', context).each(function() {
              $(this).height('auto');
            });
          }
        }

        function country_activity_title() {
          $('.country-activity-tile .hub-pages-row > .views-field-field-short-title').height('auto');
          var ww = $(window).width();
          var maxHeight = -1;
          $('.country-activity-tile .hub-pages-row > .views-field-field-short-title', context).each(function() {
            $(this).height('auto');
            maxHeight = maxHeight > $(this).height() ? maxHeight : $(this).height();
          });
          $('.country-activity-tile .hub-pages-row > .views-field-field-short-title', context).each(function() {
            $(this).height('auto');
            $(this).height(maxHeight);
          });
        }

        //icon valign
        function country_activity_icon_fix() {
          $('.country-activity-tile .hub-pages-row > .views-field-field-short-title', context).each(function() {
            var $this = $(this);
            var $height = $this.height() - 26;
            var $final_height = $height/2;
            $('.country_activity_link [class*="activity-icon-"]').css('bottom', + $final_height+'px');
          });
        }

        function country_activity() {
          $('.country-activity-tile .hub-pages-row').height('auto');
          var ww = $(window).width();
          var maxHeight = -1;
          $('.country-activity-tile .hub-pages-row', context).each(function() {
            $(this).height('auto');
            maxHeight = maxHeight > $(this).height() ? maxHeight : $(this).height();
          });
          $('.country-activity-tile .hub-pages-row', context).each(function() {
            $(this).height('auto');
            $(this).height(maxHeight);
          });
          if (ww < 767) {
            $('.country-activity-tile .hub-pages-row', context).each(function() {
              $(this).height('auto');
            });
          }
        }
        function menu_noborder() {
          var ww = $(window).width();
          if (ww > 992) {
            $('.main-navbar .no-border-bottom').parent('li').css('border-bottom-width', '0');
          } else {
            $('.main-navbar .no-border-bottom').parent('li').css('border-bottom-width', '1px');
          }
        }
        $(window).load(function(){
           equailzer();
           carousel_equailzer();
           facts_equailzer();
           listing_equailzer();
           aboutus_equailzer();
           country_activity_title();
           country_activity_icon_fix()
           country_activity();
           menubar() ;
          setTimeout(function() {
            carousel_equailzer();
            aboutus_equailzer();
          }, 3000);
           $('.pane-geography-footer-menu a').removeClass('active');
           var selectr = $('.pane-featured-slideshow').siblings('.pane-node-field-short-title');
           var selectr2 = $('.basic-page-slideshow').siblings('.pane-node-title-field');
           $(selectr).addClass('no_border');
           $(selectr2).addClass('no_border');
           menu_noborder();
        });
        $(window).resize(function(){
            equailzer();
            carousel_equailzer();
            facts_equailzer();
            listing_equailzer();
            aboutus_equailzer();
            country_activity_title();
            country_activity_icon_fix()
            country_activity();
            menubar() ;
            menu_noborder();
        });

        $(window).click(function(){
          var ww = $(window).width();
          //used to equalise on click actions
          if (ww > 767) {
            aboutus_equailzer();
          }
        });
        // breaking news check for image presence
        if($('.breaking-news-image .image img').length > 0){
          $('.breaking-news-main-wrapper').removeClass('no_img');
        } else {
          $('.breaking-news-main-wrapper').addClass('no_img');
        }

        // extend footer wrapper
        $(".akdn_main_body .footer-container", context).prepend("<div class='footer-left' />").append("<div class='footer-right' />");

        // extend footer container
        var ww = $(window).width();
        var footer_w = $('.footer-container').width();
        var set_w = ww - footer_w;
        var final_w = set_w / 2;
        var side_w = final_w;
        $('.akdn_main_body .footer-container .footer-left').width(final_w).css("left",-side_w+"px");
        $('.akdn_main_body .footer-container .footer-right').width(final_w).css("right",-side_w+"px");

        // extend footer container on resize
        $(window).resize(function() {
          var ww = $(window).width();
          var footer_w = $('.footer-container').width();
          var set_w = ww - footer_w;
          var final_w = set_w / 2;
          var side_w = final_w;
          $('.akdn_main_body .footer-container .footer-left').width(final_w).css("left",-side_w+"px");
          $('.akdn_main_body .footer-container .footer-right').width(final_w).css("right",-side_w+"px");
        });

        //add div to quicklinks/social wrapper
        $('#block-panels-mini-footer-menus .pane-menu-quick-links, #block-panels-mini-footer-menus .social-share-footer', context).wrapAll('<div class="quicklinks_social_block"></div>');

        //filter show/hide
        $('.page-press-centre .akdn-filter-wrapper, .page-search .akdn-filter-wrapper, .page-speech-quotes .akdn-filter-wrapper, .page-architecture-press-centre .akdn-filter-wrapper, .page-akmi-press-centre .akdn-filter-wrapper', context).wrapAll('<div class="akdn-filter-js-wrapper"></div>');
        $('.akdn-filter-js-wrapper', context).hide();
        $('.akdn-filter-show-hide h2').removeClass('active');
        $('.akdn-filter-show-hide', context).click(function(){
            $('.akdn-filter-js-wrapper', context).toggle();
            $('.akdn-filter-show-hide h2').toggleClass('active');
        });

        //Project Finder
        $('.akaa-projectfinder-wrapper .pane-title', context).once('project_finder').click(function(){
            $(this).siblings('.pane-content').find('.views-exposed-form').toggle();
            $(this).toggleClass('active');
        });
          //Project Finder
        $('.akaa-projectfinder-wrapper .block-title', context).once('project_finder').click(function(){
            $(this).siblings('.content').find('.views-exposed-form').toggle();
            $(this).toggleClass('active');
        });

        // add placeholders for filter inputs
        $('.form-type-date-popup.form-item-date-filter-from input.form-text').attr('placeholder','From');
        $('.form-type-date-popup.form-item-date-filter-to input.form-text').attr('placeholder','To');

        // search bar functionality
        if (!$('#edit-search').val() == 'search' || !$('#edit-search').val() == '') {
          $('#edit-search').css('border','1px solid #ccc');
        }
        else {
          $('#edit-search').css('border','1px solid transparent');
        }
        $( "#edit-search" ).blur(function() {
          if (!$('#edit-search').val() == 'search' || !$('#edit-search').val() == '') {
              $('#edit-search').css('border','1px solid #ccc');
            }
            else {
              $('#edit-search').css('border','1px solid transparent');
            }
        });
        //removing last comman from link
        $('.akdn-basic-page .field-type-link-field .field-item, .press-release-detail .field-type-link-field .field-item', context).each(function(){
            var txt = $(this).html().trim().slice(0,-1);
            $(this).html(txt);
        });
        // where we work two tile fix
        var ww = $(window).width();
        var hub_pg_row = $('.geography-page .pane-hub-pages .hub-pages-row');
        if(hub_pg_row.length == 2 && ww > 480) {
          hub_pg_row.addClass('block_half');
        } else if(hub_pg_row.length == 2 && ww < 480) {
          hub_pg_row.addClass('block_full');
        } else {
        }
        $(window).resize(function(){
          var ww = $(window).width();
          if(hub_pg_row.length == 2 && ww > 480) {
            hub_pg_row.addClass('block_half');
            hub_pg_row.removeClass('block_full');
          } else if(hub_pg_row.length == 2 && ww < 480) {
            hub_pg_row.addClass('block_full');
            hub_pg_row.removeClass('block_half');
          }
        });

    /* Accordion for AATD */
    var click_link = $('.read-more-link').parents('.grid-about-us-block_description-hhak');
    $(click_link).next('.default-should-be-hide').removeClass('shown').addClass('hidden');
    $(click_link).find('.related').removeClass('shown').addClass('hidden');
    $('.read-more-link', context).click(function(e) {
      e.preventDefault();
      if(!$(this).parents('.grid-about-us-block_description-hhak').next('.default-should-be-hide').hasClass('shown')) {
        $(click_link).next('.default-should-be-hide').removeClass('shown').addClass('hidden');
        $(click_link).find('.related').removeClass('shown').addClass('hidden');
        $(this).parents('.grid-about-us-block_description-hhak').next('.default-should-be-hide').removeClass('hidden').addClass('shown');
        $(this).parents('.grid-about-us-block_description-hhak').find('.related').removeClass('hidden').addClass('shown');
        aboutus_equailzer();
      } else {
        $(click_link).next('.default-should-be-hide').removeClass('shown').addClass('hidden');
        $(click_link).find('.related').removeClass('shown').addClass('hidden');
        aboutus_equailzer();
      }
    });
    /* *** */
    $(".all-activities-btn").click(function(){
        $(".all-activities-sidebar").toggle();
        $(this).toggleClass("bounce");
    });

    if(!$('.hub-page-rural-development').find('.field-content a').length > 0) {
      $('.hub-page-rural-development').addClass('hide');
    }
    /**/

    $('.quote-finder-wrap .views-row').not('.views-row-1').addClass('hide');
    $('.more-quotes').once('quotes_accordion').click(function() {
      if ($(this).hasClass('active')) {
        $(this).removeClass('active');
      }
      else {
        $('.more-quotes').removeClass('active');
        $(this).addClass('active');
      }
      $('.quote-finder-wrap .views-row.show').addClass('hide').removeClass('show');
      var parent = $(this).closest('[class*="row-toggle-"]');
      var arr = parent[0].className.toString().split(' ');
      var cls = arr[arr.length-1].toString();
      if ($(this).hasClass('active')) {
        $('.'+cls).not('.views-row-1').removeClass('hide').addClass('show');
      }
    });

    if($('.gallery-thumbs li').length < 4) {
      $('.gallery-thumbs li').css('margin-bottom','5px');
      $('.gallery-thumbs').css('padding', '0');
    }

    if($('.pane-featured-slideshow .slides li').length > 5) {
      $('.flex-control-nav').hide();
    }
    if($('.akaa-cycle-slideshow .slides li').length > 5) {
      $('.flex-control-nav').hide();
    }

  function plcholdr(){
    var placeholder = $('.akaa-projectfinder-wrapper .views-widget-filter-field_cycle_year_tid select');
      if(placeholder.val() == "All") {
       placeholder.addClass("plcholdr");
      }
      else {
       placeholder.removeClass("plcholdr")
      }
  }
  $(window).load(function() {
    plcholdr();
  });
  $('.akaa-projectfinder-wrapper .views-widget-filter-field_cycle_year_tid select', context).change(function () {
      if($(this).val() == "All") {
       $(this).addClass("plcholdr");
      }
      else {
       $(this).removeClass("plcholdr")
      }
  });

  //jQuery('.akaa-projectfinder-wrapper .views-reset-button').insertBefore('.akaa-projectfinder-wrapper .views-submit-button');

  $('.akaa-award-cycle-block .attachment .view-award-cycle .view-content, .akaa-award-cycle-block .attachment .info-akmi-block .view-content', context).hide();
  $('.akaa-award-cycle-block .attachment .view-award-cycle .view-content .views-row .field-content:empty, .akaa-award-cycle-block .attachment .info-akmi-block .view-content .views-row .field-content:empty', context).closest('.views-row').remove();
 
  // AKAA CYCLE CHECK ROW LENGTH
  $('.akaa-award-cycle-block', context).each(function() {
   var $this = $(this).children().find('.attachment .view-award-cycle');
   var $rows = $this.find('.view-content .views-row');
   if ($rows.length) {
     $this.find('.akaa-cycle-title').addClass('activity-icon-down').children('a').removeAttr("href");
     $this.find('.akaa-icon-title a').addClass('activity-icon-down').removeAttr("href");
     $(this).find('.akaa_cycle_image').addClass('activity-icon-down').children('a').removeAttr("href");
   }
   else {
     var a_href = $this.find('.akaa-cycle-title a').attr('href');
     $this.find('.akaa-cycle-title').addClass('activity-icon-staright');
     $this.find('.akaa-icon-title a').addClass('activity-icon-staright').attr('href',a_href);
     $(this).find('.akaa_cycle_image').addClass('activity-icon-staright').children('a').attr('href',a_href);
   }
  });

  // AKMI CHECK ROW LENGTH
  $('.akaa-award-cycle-block', context).each(function() {
   var $this = $(this).children().find('.attachment .info-akmi-block');
   var $rows = $this.find('.view-content .views-row');
   if ($rows.length) {
     $this.find('.akaa-cycle-title').addClass('activity-icon-down').children('a').removeAttr("href");
     $this.find('.akaa-icon-title a').addClass('activity-icon-down').removeAttr("href");
     $(this).find('.akaa_cycle_image').addClass('activity-icon-down').children('a').removeAttr("href");
   }
   else {
     var a_href = $this.find('.akaa-cycle-title a').attr('href');
     $this.find('.akaa-cycle-title').addClass('activity-icon-staright');
     $this.find('.akaa-icon-title a').addClass('activity-icon-staright').attr('href',a_href);
     $(this).find('.akaa_cycle_image').addClass('activity-icon-staright').children('a').attr('href',a_href);
   }
  });
  // AKAA CYCLE DROPDOWN
  $('.akaa-award-cycle-block .akaa-icon-title', context).once('akaa_cycle_icon').click(function(event){
    if ($(this).find('a').hasClass('activity-icon-down')) {
      $(this).toggleClass('active').closest('.view-footer').siblings('.view-content').slideToggle();
      event.preventDefault();
    }
  });
  // AKAA CYCLE DROPDOWN
  $('.akaa-award-cycle-block .akaa-cycle-title', context).once('akaa_cycle_title').click(function(event){
    if ($(this).hasClass('activity-icon-down')) {
      $(this).closest('.view-header').next('.view-content').slideToggle();
      $(this).closest('.view-header').siblings('.view-footer').find('.akaa-icon-title').toggleClass('active');
      event.preventDefault();
    }
  });
  // AKAA CYCLE DROPDOWN
  $('.akaa-award-cycle-block .akaa_cycle_image', context).once('akaa_cycle_image_processed').click(function(event){
    var $this = $(this).closest('.view-content').siblings('.attachment');
    if ($(this).hasClass('activity-icon-down')) {
      $this.find('.view-content').slideToggle();
      $this.find('.view-header').siblings('.view-footer').find('.akaa-icon-title').toggleClass('active');
      event.preventDefault();
    }
  });
  // akaa all award cycle btn
  $(".akaa-all-award-cycle-btn",context).once('akaa_all_cycle').click(function(){
      $(".akaa-all-award-cycle-wrapper").toggle();
      $(this).toggleClass("bounce");
  });


//added custom link publicatin image
        $('.node-type-publication .publications_file_url', context).hide();
        var pdf_url = jQuery('.node-type-publication .publications_file_url .field-item', context).html();
        $('.node-type-publication .publications_image_path .field-item a', context).attr('href', '');
        $('.node-type-publication .publications_image_path .field-item a', context).attr('href', pdf_url);
        $('.node-type-publication .publications_image_path .field-item a', context).attr('target', '_blank');

//mCustomScrollbar
    $(window).load(function(){
      $(".akdn-filter-js-wrapper .akdn-filter-wrapper .item-list").mCustomScrollbar({
        axis:"y",
        theme:"3d-dark"
      });
    });
    //wrapper for akdn-590 caption
    $('.media', context).each(function() {
      $(this).find('[class*="field-name-field-image-"]').wrapAll( "<div class='field-show-hide-block' />");
    });

    function akaa_award_cycle_title() {
      $('.akaa-award-cycle-block .attachment').height('auto');
      var ww = $(window).width();
      var maxHeight = -1;
      $('.akaa-award-cycle-block .attachment', context).each(function() {
        $(this).height('auto');
        maxHeight = maxHeight > $(this).height() ? maxHeight : $(this).height();
      });
      $('.akaa-award-cycle-block .attachment', context).each(function() {
        $(this).height('auto');
        $(this).height(maxHeight);
      });
    }

    //listing page vertical line equaliser
    function vertical_line_eq(){
      var ww = jQuery(window).width();
      var maxHeight = -1;
      jQuery('.in-media-container .in-media-block', context).each(function() {
          jQuery(this).height('auto');
          maxHeight = maxHeight > jQuery(this).height() ? maxHeight : jQuery(this).height();
      });
      jQuery('.in-media-container .in-media-block', context).each(function() {
          jQuery(this).height('auto');
          jQuery(this).height(maxHeight);
      });
    }

    //geography page grid equaliser
    function geo_grid_eq(){
      var ww = $(window).width();
      $('.geography-grid-equalise', context).height('auto');
        var maxHeight = -1;
      $('.geography-grid-equalise', context).each(function() {
        $(this).height('auto');
        maxHeight = maxHeight > $(this).height() ? maxHeight : $(this).height();
      });
      $('.geography-grid-equalise', context).each(function() {
        $(this).height('auto');
        $(this).height(maxHeight);
      });
      if (ww < 767) {
        $('.geography-grid-equalise', context).each(function() {
          $(this).height('auto');
        });
      }
    } 

    //remove extra div from wrapper from akaa cylce wrapper
    $(window).load(function(){
      $('.akaa-award-cycle-wrapper > p', context).remove();
      $('.akaa-award-cycle-wrapper .panel-separator', context).remove();

      //length of artists  
      jQuery('.related-artist').each(function() {
        var $this = jQuery(this);
        var heading_len = $this.find('.related-heading');
        var list_len = $this.find('ul');
        if(!heading_len.length > 0 && !list_len.length > 0) {
          $this.addClass('hidden_artist');
        }
      });
      akaa_award_cycle_title();
      //listing page vertical line equaliser
      vertical_line_eq();
      geo_grid_eq();
      //if whatwedo right does not exist
      if(!$('.geography-see-also .see-also-brochure, .geography-see-also .see-also-custom').length > 0) {
        $('.geography-see-also').addClass('hide');
        $('.geography-grid-equalise').removeClass('whatwedo-left').height('auto');
      }
      //Add more link to events
      var event_link = "akmi/events/2016";
      $('.akmi-homepage .akaa-award-cycle-wrapper .pane-akmi-events-views.akaa-award-cycle-block .attachment .view-content').append('<div class="views-row"><a href="' + event_link + '">More</a></div>');  

    });
    $(window).resize(function(){ 
      vertical_line_eq();
      geo_grid_eq();
    });

  // akmi all award cycle btn
  $(".akmi-all-performance-programme-btn",context).once('akmi_all_perf_prog').click(function(){
      $(this).find('.view-content').toggle();
      $(this).toggleClass("bounce");
  });

  // basic-page-custom-block-right check for content
  if($('.basic-page-custom-block-right .view-header').length > 0){
    $('.basic-page-custom-block-right').removeClass('no_tp_br');
  } else {
    $('.basic-page-custom-block-right').addClass('no_tp_br');
  }

  // Script to remove fb like comment box
  $('.fb-like iframe').once('fb_hidecomnt').addClass('fb_hidecomm');
  $(window).load(function() {
    if($('body').hasClass('front')){
      FB.Event.subscribe('edge.create',
          function(response) {
              //alert('You liked the URL: ' + response);
              $('.fb-like').find('iframe').removeClass('fb_hidecomm');
              setTimeout(function() {
                $('.fb-like').find('iframe').addClass('fb_hidecomm');
              }, 300);
          }
      );
    }
  });


  }
}

})(jQuery);
