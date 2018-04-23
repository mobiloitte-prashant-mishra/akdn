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

$count  = count($view->result);
if ($count == 2) {
  $image_uri = reset($row->_field_data['nid']['entity']->field_hub_page_image)[0]['uri'];

  $accordian_image = array(
    'style_name' => 'area_of_activities_two_activies',
    'path' => $image_uri,
    'width' => '',
    'height' => '',
  );
  $img = theme('image_style', $accordian_image);

  print l($img, 'node/'.$row->nid, array('html' => TRUE));
}
else {
$image_uri = reset($row->_field_data['nid']['entity']->field_hub_page_image)[0]['uri'];

  $accordian_image = array(
    'style_name' => 'social_sharing_image',
    'path' => $image_uri,
    'width' => '',
    'height' => '',
  );
  $img = theme('image_style', $accordian_image);

  if ($row->_field_data['nid']['entity']->title == 'Aga Khan Award for Architecture') {
    $link = 'architecture';
  }
  elseif ($row->_field_data['nid']['entity']->title == 'Aga Khan Music Initiative') {
    $link = 'akmi';
  }
  else {
    $link = 'node/'.$row->nid;
  }
  print l($img, $link, array('html' => TRUE));
}

?>
