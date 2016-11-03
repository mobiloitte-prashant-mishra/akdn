<?php
/**
 * @file
 * newsletter_social_content.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function newsletter_social_content_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mailchimp_campaign_links';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'simplenews' => 'simplenews',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'user' => array(
      'values' => array(
        'site admin' => 'site admin',
        'super admin' => 'super admin',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'scs_mailchimp_creation-mailchimp_campaign_links' => array(
          'module' => 'scs_mailchimp_creation',
          'delta' => 'mailchimp_campaign_links',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['mailchimp_campaign_links'] = $context;

  return $export;
}
