<?php

/**
 * @file
 * A custom URL processor which works with Views exposed filters.
 */

/**
 * Extension of FacetapiUrlProcessor.
 */
class FacetapiUrlProcessorExposedFacets extends FacetapiUrlProcessorStandard {
  /**
   * Implements FacetapiUrlProcessor::fetchParams().
   *
   * Use $_GET as the source for facet data.
   */
  public function fetchParams() {
    $params = array();
    $filter_key = $this->filterKey;
    $enabled_facets = $this->adapter->getEnabledFacets();
    // Rewriting facet's format with only underscores which matches Views
    // exposed filters formatting
    foreach ($enabled_facets as $facetapi_alias => $array_values) {
      $enabled_facets[str_replace(':', '_', $facetapi_alias)]['field type'] = $enabled_facets[$facetapi_alias]['field type'];
      // Saving original facetapi alias to use when returning parameters for facetapi
      $enabled_facets[str_replace(':', '_', $facetapi_alias)]['facetapi alias'] = $facetapi_alias;
    }

    foreach ($_GET as $filter_alias => $filter_values) {
      if (is_array($filter_values)) {
        foreach ($filter_values as $pos => $value) {
          // If the field type for the facet is taxonomy term, then handle it differently
          if (isset($enabled_facets[$filter_alias]) && $enabled_facets[$filter_alias]['field type'] == 'taxonomy_term' && !strpos($value, "!")) {
            $params[$filter_key][$pos] = rawurlencode($enabled_facets[$filter_alias]['facetapi alias']) . ':' . $value;
          } else {
            // Saving parameters as they are when no need to make them match
            // with Views exposed filters
            $params[$filter_key][$pos] = $value;
          }
        }
      } else {
        $params[$filter_alias] = $filter_values;
      }
    }
    return $params;
  }

  /**
   * Implements FacetapiUrlProcessor::getQueryString().
   */
  public function getQueryString(array $facet, array $values, $active) {
    $qstring = $this->params;
    $active_items = $this->adapter->getActiveItems($facet);

    // Appends to qstring if inactive, removes if active.
    foreach ($values as $value) {
      if ($active && isset($active_items[$value])) {
        unset($qstring[$this->filterKey][$active_items[$value]['pos']]);
      }
      elseif (!$active) {
        $field_alias = rawurlencode($facet['field alias']);
        $qstring[$this->filterKey][] = $field_alias . ':' . $value;
      }
    }

    // Removes duplicates, resets array keys and returns query string.
    // @see http://drupal.org/node/1340528
    $qstring[$this->filterKey] = array_values(array_unique($qstring[$this->filterKey]));

    // We need to rewrite the query in the format which Views exposed filters use.
    $enabled_facets = $this->adapter->getEnabledFacets();
    $query = array();

    foreach ($qstring[$this->filterKey] as $pos => $filter_value) {
      // Inverted explode, field alias can have multiple colons,
      // but the last one is always value.
      $parts = array_map('strrev', explode(':', strrev($filter_value), 2));

      // Checking if the facet's field type is taxonomy term and making sure it's not a facet
      // for missing values (with a value of "!") and rewriting the output in views exposed
      // filters structure.
      if (isset($enabled_facets[rawurldecode($parts[1])]) && $enabled_facets[rawurldecode($parts[1])]['field type'] == 'taxonomy_term' && $parts[0] != '!') {
        // Removing the query part with filterKey
        unset($qstring[$this->filterKey][$pos]);
        // Rewriting facet URL using only underscores like Views exposed filters do.
        $parts[1] = rawurldecode($parts[1]);
        $parts[1] = str_replace(':', '_', $parts[1]);
        $qstring[$parts[1]][$pos] = $parts[0];
      } else {
        $qstring[$this->filterKey][$pos] = $filter_value;
      }
    }
    return $qstring;
  }
}
