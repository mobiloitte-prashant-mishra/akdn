jQuery( document ).ready(function() {


/**
*Uncomment below part when you want to enable request to traslate feature
*/
// if(!(jQuery('.block-locale .en span' ).hasClass('locale-untranslated'))){
// 	jQuery('.flag-outer-bookmarks').hide();
//   	  } 


// if(!(jQuery('.block-locale .fr span' ).hasClass('locale-untranslated'))){
//   	  jQuery('.flag-outer-bookmarks3').hide();
//   	  } 
  	  

// if(!(jQuery('.block-locale .ru span' ).hasClass('locale-untranslated'))){
//   	  jQuery('.flag-outer-bookmarks1').hide();
//   	  } 
  	  
// if(!(jQuery('.block-locale .fa span' ).hasClass('locale-untranslated'))){
//   	  jQuery('.flag-outer-bookmarks2').hide();
//   	  } 

// if(!(jQuery('.block-locale .ar span' ).hasClass('locale-untranslated'))){
//   	 jQuery('.flag-outer-bookmarks4').hide();
//   	  }  	

if(jQuery('#block-locale-language ul li span' ).hasClass('locale-untranslated')){
  jQuery('#block-locale-language ul li span').parent().hide();    
      } 

});                                