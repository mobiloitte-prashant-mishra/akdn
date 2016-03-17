<?php

/**
 * Fetches data via HTTP.
 */
class FeedsNodequeueFetcher extends FeedsHTTPFetcher {

  /**
   * Override parent::configDefaults().
   */
  public function configDefaults() {
    return array(
      'auto_detect_feeds' => FALSE,
      'use_pubsubhubbub' => FALSE,
      'designated_hub' => '',
      'request_timeout' => NULL,
      'endpoint_name' => '',
      'queue_name' => '',
    );
  }

  /**
   * Override parent::configForm().
   */
  public function configForm(&$form_state) {
    $form = array();
    $form['auto_detect_feeds'] = array(
      '#type' => 'checkbox',
      '#title' => t('Auto detect feeds'),
      '#description' => t('If the supplied URL does not point to a feed but an HTML document, attempt to extract a feed URL from the document.'),
      '#default_value' => $this->config['auto_detect_feeds'],
    );
    $form['use_pubsubhubbub'] = array(
      '#type' => 'checkbox',
      '#title' => t('Use PubSubHubbub'),
      '#description' => t('Attempt to use a <a href="http://en.wikipedia.org/wiki/PubSubHubbub">PubSubHubbub</a> subscription if available.'),
      '#default_value' => $this->config['use_pubsubhubbub'],
    );
    $form['designated_hub'] = array(
      '#type' => 'textfield',
      '#title' => t('Designated hub'),
      '#description' => t('Enter the URL of a designated PubSubHubbub hub (e. g. superfeedr.com). If given, this hub will be used instead of the hub specified in the actual feed.'),
      '#default_value' => $this->config['designated_hub'],
      '#dependency' => array(
        'edit-use-pubsubhubbub' => array(1),
      ),
    );

    // Per importer override of global http request timeout setting.
    $form['request_timeout'] = array(
     '#type' => 'textfield',
     '#title' => t('Request timeout'),
     '#description' => t('Timeout in seconds to wait for an HTTP get request to finish.</br>' .
                         '<b>Note:</b> this setting will override the global setting.</br>' .
                         'When left empty, the global value is used.'),
     '#default_value' => $this->config['request_timeout'],
     '#element_validate' => array('element_validate_integer_positive'),
     '#maxlength' => 3,
     '#size'=> 30,
    );

    $form['endpoint_name'] = array(
      '#type' => 'textfield',
      '#title' => t('Endpoint name'),
      '#description' => t('Name of service endpoint.'),
      '#default_value' => $this->config['endpoint_name'],
    );

    $form['queue_name'] = array(
      '#type' => 'textfield',
      '#title' => t('Queue name'),
      '#description' => t('Name of queue which will be cleared.'),
      '#default_value' => $this->config['queue_name'],
    );

    return $form;
  }

  /**
   * Expose source form.
   */
  public function sourceForm($source_config) {
    $form = array();
    $form['source'] = array(
      '#type' => 'textfield',
      '#title' => t('URL'),
      '#description' => t('Enter a feed URL.'),
      '#default_value' => isset($source_config['source']) ? $source_config['source'] : '',
      '#maxlength' => NULL,
      '#required' => TRUE,
    );

    $form['endpoint_name'] = array(
      '#type' => 'textfield',
      '#title' => t('Endpoint name'),
      '#description' => t('Name of service endpoint.'),
      '#default_value' => isset($source_config['endpoint_name']) ? $source_config['endpoint_name'] : '',
      '#required' => TRUE,
    );

    $form['queue_name'] = array(
      '#type' => 'textfield',
      '#title' => t('Queue name'),
      '#description' => t('Name of queue which will be cleared.'),
      '#default_value' => isset($source_config['queue_name']) ? $source_config['queue_name'] : '',
      '#required' => TRUE,
    );

    return $form;
  }
}
