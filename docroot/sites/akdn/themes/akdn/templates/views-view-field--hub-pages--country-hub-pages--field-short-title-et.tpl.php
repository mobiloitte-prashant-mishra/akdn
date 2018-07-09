<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>
<?php
global $language;
$row = $variables['row'];
$output = '';
$nid = '';

if ($row->_field_data['nid']['entity']->type == 'page') {
//  print_r($row); die;
  $field_short_title = $row->_field_data['nid']['entity']->field_short_title;
  //$title = $row->_field_data['nid']['entity']->field_short_title[key($field_short_title)][0]['value'];
  $title = $row->field_field_short_title_et[0]['raw']['value'];
  $nid =  $row->_field_data['nid']['entity']->nid;
  //$n_lang =  $row->_field_data['nid']['entity']['nid'];
}
if ($row->_field_data['nid']['entity']->type == 'hub_page') {
  $title_field = $row->_field_data['nid']['entity']->title_field;
  //$title = $row->_field_data['nid']['entity']->title_field[key($title_field)][0]['value'];
  $title = $row->field_field_short_title_et[0]['raw']['value'];
  $nid =  $row->_field_data['nid']['entity']->nid;
}
//$output .= '<div class = "hub_pages-title">';

//if ($title == 'Aga Khan Award for Architecture') {
if ($nid == 24891) {
  $output .= l($title, 'node/9576');
}
else {
  if ($nid == 24896) {
    $output .= l($title, 'node/22106');
  }
  else {
    $output .= l($title, 'node/' . $row->_field_data['nid']['entity']->nid);
  }
}
//$output .= '</div>';
print $output; ?>
