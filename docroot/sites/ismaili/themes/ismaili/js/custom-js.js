jQuery(document).ready(function() {
  jQuery('.search-filters .item-list .facetapi-limit-link').text(function(i, oldText) {
    return oldText === 'Show more' ? 'More' : oldText;
  });

  jQuery('.print_paper').click(function() {
     window.print();
});

  jQuery( ".form-item-submitted-subscription-settings-3 label.option" ).prepend( '<span class="form-required"> * </span>' );

  var index = 0;
  var skip = 1;
  var titles = jQuery('tr.nutrient_field_tooltip td');
  jQuery('.nutrition-nutritional-table th').each(function() {
    if(skip) { skip=0; return; }
    jQuery(this).attr('title', jQuery(titles[index]).attr('title'));
    index++;
  });

  jQuery("img").each(function() {
    jQuery(this).attr("title", jQuery(this).attr("alt"));
  });

 jQuery("img").each(function() {
    jQuery(this).parents('a.colorbox-inline').attr("title", jQuery(this).attr("title"));
 });
jQuery("img").each(function() {
    jQuery(this).parents('a.init-colorbox-processed').attr("title", jQuery(this).attr("title"));
 });
  /*jQuery(".colorbox-inline").colorbox({
        width:'800px',
        height:'600px'
     });*/


    /*Jquery to remove the exta spacing on a specific page*/
   jQuery('.views-field-field-ingredients .first.last').find('div').remove('div:last-child');

    /*Jquery for removing red section based on the condition*/
   if (jQuery('.views-field-field-urgent-health-info-revision-id').text().length <= 10 )
    {

      jQuery('.views-field-field-urgent-health-info-revision-id').hide();
    }

    else if(jQuery('.views-field-field-urgent-health-info-revision-id').text().length > 10 )
    {

      jQuery('.views-field-field-urgent-health-info-revision-id').css('display','block ');
    }

    /*Jquery for removing green section based on the condition*/
    if ( jQuery('.views-field-field-healthy-hints-revision-id').text().length <= 25)
    {
      jQuery('.views-field-field-healthy-hints-revision-id').hide();
    }

    else if( jQuery('.views-field-field-healthy-hints-revision-id').text().length > 25)
    {
      jQuery('.views-field-field-healthy-hints-revision-id').css('display','block ');
    }


// jQuery('.inner-upcoming-events .views-row').each(function(){
// if(jQuery(this).index()>=3){
// jQuery(this).remove();
// } });

// jQuery('.pane-views-newsstage-block .views-row').each(function(){
// if(jQuery(this).index() >= 3){
// jQuery('.inner-upcoming-events .views-row').each(function(){
// jQuery('.inner-upcoming-events').css('display','none');
//  });
// } });
// // jQuery('.pane-views-newsstage-block .views-row, .inner-upcoming-events .views-row').each(function(){
// // if(jQuery('this,.views-row').length > 4){
// // jQuery('this,.views-row').remove();
// // }
// //  });

// jQuery('.pane-views-newsstage-block .views-row').each(function(){
// rt = jQuery(this).attr('class').split('Is-rowClass-');
// });

// jQuery('.inner-upcoming-events .views-row').each(function(){ br = jQuery('.views-row').find(rt[1]).css('display','none');
// });

function remove_duplicate_rows() {
  var commonclasses = [];
  jQuery('[class*="Is-rowClass-"]').each(function() {
    var arr = jQuery(this)[0].className.toString().split(' ');
    commonclasses.push(arr[arr.length-1].toString());
  });

  commonclasses = unique(commonclasses);
  commonclasses.forEach(function(element, index, array) {
    var commonrows = jQuery('.'+element);
    commonrows.each(function(index) {
      if (index>0) {
        jQuery('.views-row-4').css('border-bottom',0); //To remove the extra grey bottom line afte every fourth element
        jQuery(this).remove();
      }
    });
  });
}

function unique(array) {
  return array.filter(function(el, index, arr) {
    return index == arr.indexOf(el);
  });
}

function remove_extra_rows() {
  var rows = jQuery('.view-id-search.view-display-id-block_1 .views-row, .view-id-latest_news.view-display-id-block .views-row');
  var length = rows.length;
  rows.each(function(index) {
    if (index>3) {
      jQuery('.views-row-4').css('border-bottom',0); //To remove the extra grey bottom line afte every fourth element
      jQuery(this).remove();
    }
  });
}

function hide_empty_news_view() {
  var recent_view = jQuery('.view-id-search.view-display-id-block_1');
  var recent_rows = recent_view.find('.views-row');
  if (recent_rows.length) {
    recent_view.closest('.pane-block').show();
  }
  else {
  //  recent_view.closest('.pane-block').hide();
    jQuery('.pane-views-search-block-1 .pane-title').hide();
    jQuery('.pane-views-search-block-1 .view-content').hide();
  }

if(jQuery('.view-latest-news').length){
  jQuery('.pane-views-search-block-1 .pane-title').hide();
}

}

remove_duplicate_rows();
setTimeout(remove_extra_rows,50);
setTimeout(hide_empty_news_view,80);


/*Is-667 issue*/
 jQuery(".image-full").contents().filter(function () {
       return this.nodeType != 1;
   }).replaceWith("");
jQuery('.image-full').children('.img-tag').hide();
jQuery('.view-articles-slideshow').find('.field-name-field-rough-caption').hide();
/*********/
});



(function ($) {

  Drupal.behaviors.ismaili_custom_theme = {
    attach: function (context, settings) {
        $("img").each(function() {
        $(this).parents('a.colorbox-inline').attr("title", $(this).attr("title"));
      });

       $("#cboxLoadedContent img").css("margin-top","0");
    }
  };

}(jQuery));
