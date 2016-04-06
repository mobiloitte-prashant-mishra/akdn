<?php
/**
 * @file
 * akdn_akaa_akmi_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function akdn_akaa_akmi_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function akdn_akaa_akmi_types_node_info() {
  $items = array(
    'akmi_cd_dvd' => array(
      'name' => t('AKMI CD/DVD'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('CD/DVD Title'),
      'help' => '',
    ),
    'akmi_event' => array(
      'name' => t('AKMI Events'),
      'base' => 'node_content',
      'description' => t('This Content Type will be used to create AKMI events'),
      'has_title' => '1',
      'title_label' => t('Event Title'),
      'help' => '',
    ),
    'akmi_instrument' => array(
      'name' => t('AKMI Instrument'),
      'base' => 'node_content',
      'description' => t('This content type is used to build content for Instruments.'),
      'has_title' => '1',
      'title_label' => t('Instrument Name'),
      'help' => '',
    ),
    'akmi_performance' => array(
      'name' => t('AKMI Performance'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'architecture_project' => array(
      'name' => t('Architecture Project'),
      'base' => 'node_content',
      'description' => t('A notable project.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'award_cycle' => array(
      'name' => t('Award Cycle'),
      'base' => 'node_content',
      'description' => t('An award cycle for the Aga Khan Award for Architecture.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'breaking_news' => array(
      'name' => t('Breaking News'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'custom_content' => array(
      'name' => t('Custom Page'),
      'base' => 'node_content',
      'description' => t('This is used to create customize independent pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'custom_header_block' => array(
      'name' => t('Custom  header Block'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'fact_sheet' => array(
      'name' => t('Fact Sheet'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Fact Sheet name'),
      'help' => '',
    ),
    'facts_block' => array(
      'name' => t('Facts Block'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'featured_content' => array(
      'name' => t('Banner Item'),
      'base' => 'node_content',
      'description' => t('This content type can be used in order to promote items in a rotating banner.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => t('A Person of note; used for biographical details. A person is usually related to a Speech or Event. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
