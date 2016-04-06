//By nit
//



jQuery(document).ready(function() {
	//console.log(jQuery(".facetapi-facet-fat-light li:eq(0) a").attr("href"));
	var first = jQuery(".facetapi-facet-fat-light li:eq(0) a").attr("href");
	var second = jQuery(".facetapi-facet-fat-light li:eq(1) a").attr("href");
	var third = jQuery(".facetapi-facet-fat-light li:eq(2) a").attr("href");
	console.log(third);
	// jQuery(".facetapi-facet-fat-light li:eq(0) a").attr("href", "/ismaili/nutrition/recipes?f[0]=fat_light%3Al");
	// jQuery(".facetapi-facet-fat-light li:eq(1) a").attr("href", "/ismaili/nutrition/recipes?f[0]=fat_light%3Al&f[1]=fat_light%3Am");
	// jQuery(".facetapi-facet-fat-light li:eq(2) a").attr("href", "/ismaili/nutrition/recipes?f[0]=fat_light%3Al&f[1]=fat_light%3Am&f[2]=fat_light%3Ah");
});