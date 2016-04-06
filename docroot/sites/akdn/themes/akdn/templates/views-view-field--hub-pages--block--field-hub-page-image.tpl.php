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
if ($row->field_field_short_title[0]['rendered']['#markup'] == 'Aga Khan Award for Architecture') {
  print l($output, 'node/9576', array('html' => TRUE));
}
elseif ($row->field_field_short_title[0]['rendered']['#markup'] == 'Aga Khan Music Initiative') {
  print l($output, 'node/22106', array('html' => TRUE));
}
else {
  print l($output, $row->nid, array('html' => TRUE));
}
?>