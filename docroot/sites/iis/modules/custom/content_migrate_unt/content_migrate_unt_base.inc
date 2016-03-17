<?php

// $Id: content_migrate_unt_base.inc, 2013/08/08 1:06:41 thu Exp $

/**
 * @file
 * Defines the base class for all the migrations.
 */

/**
 *
 * All migration settings are defined here.
 *
 */
abstract class BaseMigration extends Migration {

  public function __construct() {
    // Always call the parent constructor first for basic setup
    parent::__construct();
    $this->team = array(
        new MigrateTeamMember('Chandra Shekhar', 'chandra@srijan.in', t('Migrate Owner')),
    );
    // @TODO: Depreciate this (siteUrl); not drupal naming convention
    $this->siteUrl = variable_get('content_migrate_unt_org_base_url', 'http://iis.ac.uk');

    $this->site_url = variable_get('content_migrate_unt_org_base_url', 'http://iis.ac.uk');
    $this->uids = array('4', '5', '6', '101', '102', '103', '104', '161', '1406', '1407', '5616', '20561', '20617', '20618', '20637', '21035');

    $this->map = new MigrateSQLMap($this->machineName,
                    array('nid' => array(
                            'type' => 'int',
                            'not null' => TRUE,
                            'description' => 'node NID.',
                            'alias' => 'n'
                        )
                    ),
                    MigrateDestinationNode::getKeySchema()
    );

    $this->query = db_select(CONTENT_MIGRATE_DATABASE_NAME . '.' . 'srijan_custom_node', 'n')
      ->fields('n', array('nid', 'type', 'author', 'data', 'created', 'changed',
        'field_1', 'field_2', 'field_3'));
    $this->query->condition('n.field_1', array('failed'), '<>'); //skip un-compiled nodes

    if (!variable_get('content_migrate_unt_migrate_testing')) {
      $link = l(t('Please click here to Set Created timestamp for testing of migration'), 'admin/config/services/content_migrate_unt_source');
      drupal_set_message(filter_xss($link), 'status', FALSE);
    }

    //Implemented for testing of migration
    if (variable_get('content_migrate_unt_migrate_testing')) {
      $test_timestamp = variable_get('content_migrate_unt_test_timestamp', 0);
      $this->query->condition('n.created', $test_timestamp, '>');
      $link = l(t('Please click here to remove testing configuation after migration tests are done'), 'admin/config/services/content_migrate_unt_source');
      drupal_set_message(filter_xss($link), 'status', FALSE);
    }

    if (variable_get('content_migrate_unt_cms_content')) {
      $this->query->leftJoin(CONTENT_MIGRATE_DATABASE_NAME . '.' . 'srijan_custom_cms_content', 's', 'n.nid = s.nid');
      $this->query->fields('s', array('status'));
    }

    $this->source_fields = array(
        'nid' => t('Node ID'),
    );

    // map source lang with drupal language
    $this->source_lang = array('1' => 'en', '2' => 'fr', '3' => 'ar', '4' => 'fa', '5' => 'ru');

    // Learing article taxonomy tid
    $this->learning_article_tid = variable_get('content_migrate_unt_learning_article_tid', 112);
    $this->author_people_tid = variable_get('content_migrate_unt_author_people_tid', 580);
    $this->staff_people_tid = variable_get('content_migrate_unt_staff_people_tid', 579);
    $this->na_newsletter_tid = variable_get('content_migrate_unt_newsletter_na_tid', 601);
  }

 /**
   * Get image
   * @param type $image_uri
   * @param type $title
   * @return type
   */
  public function cmcn_get_image_icon($image_uri, $title = '', $image_cache = 'club_current_badge') {
    $image = theme('image_style', array(
        'style_name' => $image_cache,
        'path' => $image_uri,
        'attributes' => array(
            'class' => $image_cache
        ),
        'width' => NULL,
        'height' => NULL,
        'alt' => $title,
        'title' => $title,
            )
    );
    return $image;
  }
}
