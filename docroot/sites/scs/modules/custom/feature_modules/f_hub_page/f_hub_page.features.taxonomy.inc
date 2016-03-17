<?php
/**
 * @file
 * f_hub_page.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function f_hub_page_taxonomy_default_vocabularies() {
  return array(
    'focus_areas' => array(
      'name' => 'Thematic Areas',
      'machine_name' => 'focus_areas',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
