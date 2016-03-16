/**
 * @file
 * Javascript file for subscription page.
 */

jQuery(document).ready(function($) {
    jQuery("#edit-submitted-subscription-settings-1").change(function() { 
	if (this.checked) {
	    jQuery("#edit-submitted-subscriber-email-newsletter-selection-565").prop('checked', true); 
	} 
	else { 
	    jQuery("#edit-submitted-subscriber-email-newsletter-selection-565").prop('checked', false); 
	} 
    });
    jQuery("#edit-submitted-subscription-settings-2").change(function() { 
	if (this.checked) {
	    jQuery("#edit-submitted-subscriber-email-newsletter-selection-566").prop('checked', true); 
	} 
	else { 
	    jQuery("#edit-submitted-subscriber-email-newsletter-selection-566").prop('checked', false); 
	} 
    });
    jQuery("#edit-submitted-subscription-settings-3").change(function() { 
	if (this.checked) {
	    jQuery("#edit-submitted-subscriber-email-newsletter-selection-567").prop('checked', true); 
	} 
	else { 
	    jQuery("#edit-submitted-subscriber-email-newsletter-selection-567").prop('checked', false); 
	} 
    });
    jQuery("#edit-submitted-subscription-settings-4").change(function() { 
	if (this.checked) {
	    jQuery("#edit-submitted-subscriber-email-newsletter-selection-568").prop('checked', true); 
	} 
	else { 
	    jQuery("#edit-submitted-subscriber-email-newsletter-selection-568").prop('checked', false); 
	} 
    });
});
