/*By default Making the menus collapsible*/
jQuery(window).load(function()
{
  jQuery('.block-title').addClass('active');
  jQuery('.facetapi-facetapi-checkbox-links').hide();

  if(jQuery('.facetapi-checkbox').is(':checked')){
    jQuery(this+':checked').parents('.facetapi-facetapi-checkbox-links').show();
    jQuery(this+':checked').parents('.block-facetapi').find('.block-title').removeClass('active');
  }

  jQuery('.item-list h3').addClass('active');
  jQuery("ol").slideToggle(1);

// this code make the article type checkbox clickable
jQuery(".facetapi-checkbox").click( function(){
  var filter_text = jQuery(this).parent().text();
 if(filter_text.indexOf('Press release') !== -1 || filter_text.indexOf('In the media') !== -1) {
 		var search_link_redirect = jQuery(this).next().attr('href'); console.log(search_link_redirect);
     location.href = search_link_redirect;
     }
  });

//End
});


jQuery(document).ready(function() {

  jQuery('.item-list-empty-block').hide();
  jQuery('.node-article .field-name-field-media-source-url a').attr("target", "_blank");

	jQuery(".nav .block-menu").prepend("<div class='toggle'></div>") ;

	jQuery('.toggle').click(function() {
    	jQuery(this).next('ul').slideToggle('500');
  	});
	jQuery(".region-header .search-box-contact").after("<div class='search-switch'>Contact Search</div>") ;
	jQuery(".region-header .search-box-contact").after("<div class='search-box-switch'>Search Site Content</div>") ;

	jQuery('.search-switch').click(function() {
	    jQuery('.search-box').hide();
	    jQuery('.search-box-contact').show();
 		jQuery('.search-switch').css('color','#f2edde');
 		jQuery('.search-box-switch').css('color','#b49759');

	    jQuery('.search-box-switch').click(function() {
    		jQuery('.search-box-contact').hide();
    		jQuery('.search-box').show();
    		jQuery('.search-box-switch').css('color','#f2edde');
    		jQuery('.search-switch').css('color','#b49759');
    	});
 	});

  jQuery('.filter-block h2').click(function(e) {
    e.preventDefault();
    if (jQuery(this).hasClass('active')) {
      jQuery(this).removeClass('active');
      jQuery(this).parents('.filter-block').find('.facetapi-facetapi-checkbox-links').slideDown();
      return false;
    } else {
      jQuery(this).addClass('active');
      jQuery(this).parents('.filter-block').find('.facetapi-facetapi-checkbox-links').slideUp();
      return false;
    }
  });

  jQuery(".quote-finder h3").click(function()
  {

    if(jQuery('.quote-finder h3').hasClass("active"))
    {

      jQuery('.quote-finder h3').removeClass("active");
      jQuery("ol").slideToggle(-1);

    }
    else
    {

      jQuery('.quote-finder h3').addClass("active");
      jQuery("ol").slideToggle(1);

    }

  });

  /*Individual pages theming part*/

// var link = window.location.href.split('/');
// var first_block = jQuery('.block-facetapi').first();
if(jQuery('.kc-reset-filters').length>0){
 var filter = jQuery('.kc-reset-filters');
 jQuery('.kc-reset-filters').remove();
 filter.prependTo(jQuery('.filter-reset-append'));
}

/*Jquery for Removing the after content in List of languages*/
if(jQuery(".language-switcher-locale-url li").last().children().text() == ""){
  jQuery(".language-switcher-locale-url li.first a").addClass('unseprtr');
}

/**Jquery Theming part ends**/
// Script for displaying More quotations on quote finder
jQuery('.page-quote-finder .views-row-1').siblings().css('display', 'none');
jQuery('.page-quote-finder .views-row-1').siblings('h3').css('display', 'block');
jQuery('.more-quotes').click(function() {
 var moreQuotes = jQuery(this).find('span:first').attr('class');
 jQuery('.' + moreQuotes).css('display', 'block');
});

/* hide More Quotations link if there is only one Quotations */
jQuery(".view-id-solr_quote_finder .view-grouping-content").each(function(){
  var check = jQuery(this).find('div.views-row:nth-child(3)').length;
  if(check == 0){
    jQuery(this).find('.more-quotes').hide();
  }
});
    //append facete after first li of content type
/*   
 jQuery('.article-type-facets').hide();
    var article_type_facets = jQuery('#facetapi-facet-search-apidefault-node-index-block-field-article-cat').html();
    jQuery('#facetapi-facet-search-apidefault-node-index-block-type li:eq(1)').after(article_type_facets);
*/
    //Bullet points for a single value attribute named News
    jQuery('.related-news a').prepend('<li class=\"toggled\"></li>');

    // Removing blank paragraph tags which is somehow poping up in Field description section.
    jQuery('.views-field-description').find('p:empty').remove()
  });


