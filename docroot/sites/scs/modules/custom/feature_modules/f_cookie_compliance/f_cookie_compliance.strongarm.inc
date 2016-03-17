<?php
/**
 * @file
 * f_cookie_compliance.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function f_cookie_compliance_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_en';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 1,
    'popup_position' => 0,
    'popup_info' => array(
      'value' => '<h2>We use cookies on this site to enhance your user experience</h2><p>By clicking any link on this page you are giving your consent for us to set cookies.</p>',
      'format' => 'full_html',
    ),
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 0,
    'popup_agreed' => array(
      'value' => '<h2>Thank you for accepting cookies</h2><p>You can now hide this message or find out more about cookies.</p>',
      'format' => 'full_html',
    ),
    'popup_link' => 'about-cookies',
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => '3b3b3b',
    'popup_text_hex' => 'ffffff',
  );
  $export['eu_cookie_compliance_en'] = $strongarm;

  return $export;
}
