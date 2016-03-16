<?php
/**
 * @file
 * f_newsletter.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function f_newsletter_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-context-menu.
  $menus['menu-context-menu'] = array(
    'menu_name' => 'menu-context-menu',
    'title' => 'Recent Content',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Recent Content');


  return $menus;
}
