jQuery( document ).ready(function() {
// jQuery('#edit-field-microsite-und > option[value=1]').click(function(){
// 	jQuery('#edit-field-primary-category-und').hide();
//   alert("The paragraph was clicked.");
// });
jQuery('#edit-field-microsite-und').change(function(){
   if(jQuery(this).val() ==1){
     jQuery('#edit-field-primary-category-und optgroup[label|=The Ismaili] option').show();
     jQuery('#edit-field-primary-category-und optgroup[label|=Ismaili Centres] option').hide();
     jQuery('#edit-field-primary-category-und optgroup[label|=Nutrition Centre] option').hide();
     jQuery('#edit-field-primary-category-und optgroup[label|=Golden Jubilee] option').hide();
   }
    else if(jQuery(this).val() ==11){
          jQuery('#edit-field-primary-category-und optgroup[label|=The Ismaili] option').hide();
     jQuery('#edit-field-primary-category-und optgroup[label|=Ismaili Centres] option').show();
     jQuery('#edit-field-primary-category-und optgroup[label|=Nutrition Centre] option').hide();
     jQuery('#edit-field-primary-category-und optgroup[label|=Golden Jubilee] option').hide();

   } 
    else if(jQuery(this).val() ==6){
         jQuery('#edit-field-primary-category-und optgroup[label|=The Ismaili] option').hide();
     jQuery('#edit-field-primary-category-und optgroup[label|=Ismaili Centres] option').hide();
     jQuery('#edit-field-primary-category-und optgroup[label|=Nutrition Centre] option').show();
     jQuery('#edit-field-primary-category-und optgroup[label|=Golden Jubilee] option').hide();

   } 
      else if(jQuery(this).val() ==16){
         jQuery('#edit-field-primary-category-und optgroup[label|=The Ismaili] option').hide();
     jQuery('#edit-field-primary-category-und optgroup[label|=Ismaili Centres] option').hide();
     jQuery('#edit-field-primary-category-und optgroup[label|=Nutrition Centre] option').hide();
     jQuery('#edit-field-primary-category-und optgroup[label|=Golden Jubilee] option').show();

   }  

   else {
   	jQuery('#edit-field-primary-category-und optgroup[label|=The Ismaili] option').show();
     jQuery('#edit-field-primary-category-und optgroup[label|=Ismaili Centres] option').show();
     jQuery('#edit-field-primary-category-und optgroup[label|=Nutrition Centre] option').show();
     jQuery('#edit-field-primary-category-und optgroup[label|=Golden Jubilee] option').show();
   }
});
});

// if(jQuery('.block-locale ul li a' ).hasClass('active')) {
// 	('.hide-motiff').addClass('hide');}