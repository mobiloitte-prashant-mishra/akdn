/**
 * @file
 * A JavaScript file for the theme.
 *
 * This file is for responsive menu.
 */

//resposive menu.
jQuery(document).ready(function() {
	var wi = jQuery(window).width();
	if (wi <= 640) {
		jQuery(".ismail-menu").append("<a></a>");
		jQuery(".ismail-menu > a").addClass("nav-trigger");
		jQuery(".ismail-menu .nav-trigger").prev().css("display", "none");

		var div = jQuery('.nav-trigger');
			if (div.length > 1) {
				div.not(':last').remove()
			}
		jQuery(".ismail-menu .nav-trigger").click(function() {
			jQuery(this).prev().toggle("1000");
		});	
	}
	jQuery(window).resize(function() {
		var wi = jQuery(window).width();
		if (wi <= 640) {
			jQuery(".ismail-menu").append("<a></a>");
			jQuery(".ismail-menu > a").addClass("nav-trigger");
			jQuery(".ismail-menu .nav-trigger").prev().css("display", "none");
				var div = jQuery('.nav-trigger');
				if (div.length > 1) {
					div.not(':last').remove()
				}
			jQuery(".ismail-menu .nav-trigger").click(function() {
				jQuery(this).prev().toggle("1000");
			});
		}
	});
	if (wi <= 640) {
		jQuery(".pane-menu-menu-ismaili-centre-menu").append("<a></a>");
		jQuery(".pane-menu-menu-ismaili-centre-menu > a").addClass("nav-trigger");
		jQuery(".pane-menu-menu-ismaili-centre-menu .nav-trigger").prev().css("display", "none");
			var div = jQuery('.nav-trigger');
			if (div.length > 1) {
				div.not(':last').remove()
			}
		jQuery(".pane-menu-menu-ismaili-centre-menu .nav-trigger").click(function() {
			jQuery(this).prev().toggle("1000");
		});	
	}
	jQuery(window).resize(function() {
		var wi = jQuery(window).width();
		if (wi <= 640) {
			jQuery(".pane-menu-menu-ismaili-centre-menu").append("<a></a>");
			jQuery(".pane-menu-menu-ismaili-centre-menu > a").addClass("nav-trigger");
			jQuery(".pane-menu-menu-ismaili-centre-menu .nav-trigger").prev().css("display", "none");
				var div = jQuery('.nav-trigger');
				if (div.length > 1) {
					div.not(':last').remove()
				}
			jQuery(".pane-menu-menu-ismaili-centre-menu .nav-trigger").click(function() {
				jQuery(this).prev().toggle("1000");
			});
		}
		
	});

	var div = jQuery('.nav-trigger');
	if (div.length > 1) {
		div.not(':last').remove()
	}
});