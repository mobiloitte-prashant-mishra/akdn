<?php
/**
 * @file
 * ak_panel_variants.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function ak_panel_variants_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'hub';
  $layout->admin_title = 'Hub';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Branding',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'container-12',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header',
        ),
        'parent' => 'main',
        'class' => 'container-12',
      ),
      'header' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'grid-12',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'preface_first',
          1 => 'preface_second',
        ),
        'parent' => 'main',
        'class' => 'container-24',
      ),
      'preface_first' => array(
        'type' => 'region',
        'title' => 'Preface First',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'grid-15 prefix-1',
      ),
      'preface_second' => array(
        'type' => 'region',
        'title' => 'Preface Second',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'grid-8',
      ),
    ),
  );
  $export['hub'] = $layout;

  return $export;
}
