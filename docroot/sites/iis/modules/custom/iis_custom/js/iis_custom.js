/**
 * @file
 * Custom js files
 */

jQuery(document).ready(function($) {

    // Toggle additions to site, News archives, events.
    // jQuery('#block-iis-custom-iis-news-page-left-block .item-list > h3').siblings().toggle("1000");
    jQuery('#block-iis-custom-iis-news-page-left-block .item-list > h3').click(function() {
        jQuery(this).siblings().toggle("1000");
        jQuery(this).toggleClass("expanded-menu");
    });

    //Toggle facets
    // jQuery('.region-sidebar-first .block-facetapi .block-title').siblings().toggle("1000");
    jQuery('.region-sidebar-first .block-title').click(function() {
        jQuery(this).siblings().toggle("1000");
        jQuery(this).toggleClass("expanded-menu");
    });

    // Toggle menus.
    // jQuery('.region-sidebar-first .menu__link').siblings().toggle("1000");
    jQuery('.region-sidebar-first .menu__link').click(function() {
        jQuery(this).siblings().toggle("1000");
        jQuery(this).toggleClass("expanded-menu");
    });

    // Toggle Sections in Learning Centre.
    jQuery('.view-header').next().toggle("1000");
    jQuery('.view-header').click(function() {
        jQuery(this).next().toggle("1000");
        jQuery(this).toggleClass("expanded-menu");
    });

    // Expand/Collapse
    jQuery('.collapse').click(function() {
        jQuery('.pane-multimedia  .view-content').slideUp().css('display', 'none');
        jQuery('.pane-learning-centre .view-content').slideUp().css('display', 'none');
    });
    jQuery('.expand').click(function() {
        jQuery('.pane-multimedia .view-content').slideDown().css('display', 'block');
        jQuery('.pane-learning-centre .view-content').slideDown().css('display', 'block');
    });

    // Toggle additions to site, News archives, events.
    jQuery('#block-iis-custom-iis-upcoming-prev-events .item-list').children('ul').css('display', 'none');
    jQuery('#block-iis-custom-iis-upcoming-prev-events .item-list > h3').click(function() {
        jQuery(this).next().toggle("1000");
        jQuery(this).parent().toggleClass("expanded-menu");
    });

    // Toggle for related link on top of the page.
    jQuery('#block-menu-menu-header-menu .is-expanded.expanded').children('ul').css('display', 'none');
    jQuery('#block-menu-menu-header-menu .is-expanded.expanded .menu__link').click(function() {
        jQuery(this).next().toggle("1000");
        jQuery(this).parent().toggleClass("expanded-menu");
    });

    //Responsive menu animation.
    jQuery('button.btn.tb-megamenu-button').click(function() {
        jQuery(this).toggleClass('clicked');
    });

});