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
if ($row->{'_entity_properties'}['entity_type'] == 'In the media') {
  $exurl = $row->{'_entity_properties'}['entity object']->field_media_source[LANGUAGE_NONE][0]['url'];
  $output = l($output, $exurl, array(
    'html' => TRUE,
    'attributes' => array('target' => '_blank')
  ));
  $output .= l(t('More'), $exurl, array(
    'html' => TRUE,
    'attributes' => array('class' => array('akdn-solr-more-link'), 'target' => '_blank')
  ));
}
else {
  $output = l($output, 'node/' . $row->{'_entity_properties'}['search_api_id'], array('html' => TRUE));
  $output .= l(t('More'), 'node/' . $row->{'_entity_properties'}['search_api_id'], array(
    'html' => TRUE,
    'attributes' => array('class' => array('akdn-solr-more-link'))
  ));
}
print $output;
?>