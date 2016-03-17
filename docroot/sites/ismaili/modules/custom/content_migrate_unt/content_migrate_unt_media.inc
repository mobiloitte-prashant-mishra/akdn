<?php

// $Id$
/**
 * @file
 * Manage Media
 */

/**
 * Media content migration.
 */
class MediaContentMigration extends BaseMigration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Media content migration');

    $this->map = new MigrateSQLMap($this->machineName,
                    array('mediaid' => array(
                            'type' => 'int',
                            'not null' => TRUE,
                            'description' => 'Media ID.',
                            'alias' => 'n'
                        )
                    ),
                    MigrateDestinationMedia::getKeySchema()
    );

    $source_fields = array(
        'mediaid' => t('Media ID'),
    );
    $query = db_select(CONTENT_MIGRATE_DATABASE_NAME . '.' . 'ismaili_media', 'n')
            ->fields('n', array('mediaid', 'mediatypeid', 'statusid', 'medianame', 'caption', 'roughcaption', 'source', 'imagetype', 'copyright', 'description', 'datetaken', 'dateadded', 'useradded', 'userapproved', 'externalurl', 'longcaption'
          ));
    $query->condition('n.userapproved', array(222,111), 'IN');

    $query->orderBy('n.mediaid', 'ASC');

    $this->source = new MigrateSourceSQL($query, $source_fields);
    $this->destination = new MigrateDestinationMedia('image');

    // The source images are in a local directory - specify the parent.
    $this->addFieldMapping('source_dir')
         ->defaultValue(variable_get('content_migrate_unt_media_path', 'http://www.theismaili.org/assets/3/'));
    // The 'value' of the media destination is mapped to the source field
    // representing the media itself - in this case, a filename relative to
    // source_dir.
    $this->addFieldMapping('value', 'mediaid' .'.jpg')
      ->defaultValue(FILE_EXISTS_REPLACE);;

    // Fields on the entity can be mapped in the usual way.
    $this->addFieldMapping('field_file_image_alt_text', 'caption');
    $this->addFieldMapping('field_file_image_title_text', 'caption');
    $this->addFieldMapping('caption', 'caption');
    $this->addFieldMapping('field_credit', 'copyright');
    $this->addFieldMapping('field_media_label', 'medianame');
    $this->addFieldMapping('field_rough_caption', 'roughcaption');
    $this->addFieldMapping('field_media_source', 'source');
    $this->addFieldMapping('field_media_description', 'description');
    $this->addFieldMapping('field_media_description:format')
      ->defaultValue('full_html');
    $this->addFieldMapping('field_date_taken', 'datetaken');
    $this->addFieldMapping('created', 'dateadded');

    $this->addFieldMapping('uid')
         ->defaultValue(1);
    if (module_exists('path')) {
      $this->addUnmigratedDestinations(array('path'));
    }
  }

  /**
   * process raw data here and place at their correct locations
   * @param stdClass $account
   * @param stdClass $row
   */
  public function prepare(stdClass $account, stdClass $row) {
    $account->value = $row->mediaid .'.jpg';
    if ($account->field_date_taken[LANGUAGE_NONE][0]['value'] <= 0) {
      $account->field_date_taken[LANGUAGE_NONE][0]['value'] = 1;
    }
    if ($account->created <= 0) {
      $account->created = 1;
    }
  }

  /**
   * Handle the post node create functionality
   * Adding attachment to the file and upload table
   * */
  public function complete(stdClass $node, stdClass $row) {
   
  }

}
