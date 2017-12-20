<?php
/**
 * @file
 * aka_panels_custom_layout.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function aka_panels_custom_layout_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'academy';
  $layout->admin_title = 'Academy';
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
        'title' => 'Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'top',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 2,
          1 => 3,
        ),
        'parent' => 'main',
        'class' => 'main-row',
      ),
      2 => array(
        'type' => 'column',
        'width' => '39.995482803286265',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 4,
          1 => 5,
        ),
        'class' => 'left',
      ),
      3 => array(
        'type' => 'column',
        'width' => '60.004517196713735',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 6,
        ),
        'class' => 'right',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'topleft_right',
        ),
        'parent' => '2',
        'class' => 'top-left-row',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'topleft-left',
        'width' => '50',
        'width_type' => '%',
        'parent' => '4',
        'class' => 'left',
      ),
      'topleft_right' => array(
        'type' => 'region',
        'title' => 'topleft_right',
        'width' => '50',
        'width_type' => '%',
        'parent' => '4',
        'class' => 'topleft-right',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom_left',
        ),
        'parent' => '2',
        'class' => 'bottomleft',
      ),
      'bottom_left' => array(
        'type' => 'region',
        'title' => 'Bottom left',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => 'bottomleft',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center_center',
          1 => 'center_right',
        ),
        'parent' => '3',
        'class' => 'center',
      ),
      'center_center' => array(
        'type' => 'region',
        'title' => 'center-center',
        'width' => '66.66996185799223',
        'width_type' => '%',
        'parent' => '6',
        'class' => 'center-center',
      ),
      'center_right' => array(
        'type' => 'region',
        'title' => 'Center right',
        'width' => '33.33003814200777',
        'width_type' => '%',
        'parent' => '6',
        'class' => 'center-right',
      ),
    ),
  );
  $export['academy'] = $layout;

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'section';
  $layout->admin_title = 'section';
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
          0 => 1,
          1 => 'main-row',
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'center',
          2 => 'right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '26.00009335037374',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'home_center',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top',
        ),
        'parent' => 'main',
        'class' => 'Top',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'home_left',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => '23.99990664962626',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'home_right',
      ),
      'top' => array(
        'type' => 'region',
        'title' => 'Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom',
        ),
        'parent' => 'main',
        'class' => 'Bottom',
      ),
      'bottom' => array(
        'type' => 'region',
        'title' => 'Bottom',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'footer',
      ),
    ),
  );
  $export['section'] = $layout;

  return $export;
}
