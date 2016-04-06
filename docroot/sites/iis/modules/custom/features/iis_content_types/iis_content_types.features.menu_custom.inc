<?php
/**
 * @file
 * iis_content_types.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function iis_content_types_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer Menu',
    'description' => 'Footer menus containing additional details of the site like Terms of Use, Privacy Policy.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer Menu');
  t('Footer menus containing additional details of the site like Terms of Use, Privacy Policy.');


  return $menus;
}
