<?php
/**
 * @file
 * iis_content_types.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function iis_content_types_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-menu_rss:rss.xml
  $menu_links['menu-footer-menu_rss:rss.xml'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'rss.xml',
    'router_path' => 'rss.xml',
    'link_title' => 'RSS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_rss:rss.xml',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('RSS');


  return $menu_links;
}
