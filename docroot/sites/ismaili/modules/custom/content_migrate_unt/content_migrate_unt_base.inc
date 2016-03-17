<?php

// $Id: content_migrate_unt_base.inc, 2014/04/07 1:06:41 fri Exp $

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
    $this->query = db_select(CONTENT_MIGRATE_DATABASE_NAME . '.' . 'ismaili_contentitem', 'n')
        ->fields('n', array('contentid', 'parentid', 'depth', 'lineage', 'statusid', 'redirectid', 'softredirectid', 'redirecturl', 'displayorder', 'templateid', 'showsitemap', 'showmenu', 'dateadded', 'dateupdated', 'datepublished', 'useradded', 'userupdated', 'intflag1', 'intflag2', 'intflag3', 'intflag4', 'intflag5', 'intflag6', 'intflag7', 'intflag8', 'intflag9', 'intflag10', 'strflag1', 'strflag2', 'strflag3', 'strflag4', 'strflag5', 'isrestricted', 'datewritten', 'author', 'contentheading', 'contentsummary', 'metatag', 'metadescription', 'contenttext', 'rated', 'raters', 'categoryid', 'contenttypeid', 'promotionlevel', 'mediaid', 'contentintro', 'seriesid'
      ));
    $this->query->condition('n.statusid', '999999', '!=');
 
    // Get image related info (fid)
    $this->query->leftJoin( 'migrate_map_mediacontent', 'mc', 'n.mediaid=mc.sourceid1');
    $this->query->fields('mc', array('destid1'));

    $this->query->leftJoin( 'file_managed', 'fm', 'mc.destid1=fm.fid');
    $this->query->fields('fm', array('fid'));


    // Get image related info (caption,copyright etc)
    $this->query->leftJoin(CONTENT_MIGRATE_DATABASE_NAME . '.' . 'ismaili_media', 'm', 'n.mediaid=m.mediaid');
    $this->query->fields('m', array('caption', 'roughcaption', 'source', 'copyright', 'description', 'medianame'));


    $this->site_url = variable_get('content_migrate_unt_org_base_url', 'http://iis.ac.uk');
    $this->recipe_tid = variable_get('content_migrate_unt_recipe_tid', '1071');
    // Get category mapping
    $default_category = "1,1,TheIsmaili.org;2,6,Nutrition Centre;3,16,Golden Jubilee;6,11,Ismaili Centre;7,,Learning Centre;8,,ISC;";
    $category = variable_get('content_migrate_unt_category_mapping', $default_category);
    $cat_arr = explode(";", $category);
    $this->category_mapping = array();
    foreach($cat_arr as $pos =>$data) {
      $data_arr = explode(",", $data);
      if (!isset($data_arr[0])) {
        continue;
      }
      $key = $data_arr[0];
      $tid = (isset($data_arr[1])) ? $data_arr[1] : '';
      $name = (isset($data_arr[2])) ? $data_arr[2] : '';
      if (empty($tid)) {
        continue;
      }
      $this->category_mapping[$key]['tid'] = $tid;
      $this->category_mapping[$key]['name'] = $name;
    }

    // Get category mapping
    $nutrient_category = "1,,Calories;2,,Protein;3,8126,Fat;4,8161,Saturated Fat;5,,Carbohydrate;6,8166,Sugar;7,,Fibre;8,8171,Salt;";
    $nutrient_category = variable_get('content_migrate_unt_nutrient_mapping', $nutrient_category);
    $cat_arr = explode(";", $nutrient_category);
    $this->nutrient_mapping = array();
    foreach($cat_arr as $pos => $data) {
      $data_arr = explode(",", $data);
      if (!isset($data_arr[0])) {
        continue;
      }
      $key = $data_arr[0];
      $nid = (isset($data_arr[1])) ? $data_arr[1] : '';
      $name = (isset($data_arr[2])) ? $data_arr[2] : '';
      if (empty($nid)) {
        continue;
      }
      $this->nutrient_mapping[$key]['nid'] = $nid;
      $this->nutrient_mapping[$key]['name'] = $name;
    }

    // Get category mapping
    $article_type = "1,8961,Internal;2,8966,External;4,8976,Twish;5,8981,Stub;8,8971,Special;9,1136,Festival;";
    $article_category = variable_get('content_migrate_unt_article_type_mapping', $article_type);
    $cat_arr = explode(";", $article_category);
    $this->article_mapping = array();
    foreach($cat_arr as $pos => $data) {
      $data_arr = explode(",", $data);
      if (!isset($data_arr[0])) {
        continue;
      }
      $key = $data_arr[0];
      $nid = (isset($data_arr[1])) ? $data_arr[1] : '';
      $name = (isset($data_arr[2])) ? $data_arr[2] : '';
      if (empty($nid)) {
        continue;
      }
      $this->article_mapping[$key]['tid'] = $nid;
      $this->article_mapping[$key]['name'] = $name;
    }

    // Series Mapping
    $series_type = "519,9056,field_primary_category;";
    $series_category = variable_get('content_migrate_unt_series_mapping', $series_type);
    $series_arr = explode(";", $series_category);
    $this->series_mapping = array();
    foreach($series_arr as $pos => $data) {
      $data_arr = explode(",", $data);
      if (!isset($data_arr[0])) {
        continue;
      }
      $key = $data_arr[0];
      $nid = (isset($data_arr[1])) ? $data_arr[1] : '';
      $name = (isset($data_arr[2])) ? $data_arr[2] : '';
      if (empty($nid)) {
        continue;
      }
      $this->series_mapping[$key]['tid'] = $nid;
      $this->series_mapping[$key]['name'] = $name;
    }
  }


}
