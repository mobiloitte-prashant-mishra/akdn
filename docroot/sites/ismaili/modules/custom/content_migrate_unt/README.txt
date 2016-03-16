content_migrate_unt_ is responsible for migrating data from Mysql source to Drupal 7.

content_migrate_unt_ supports migrating content from a Mysql source to Drupal 7 using the Migrate module. Import of the following
is supported:
1. Various node (article etc)

Dependencies:
-------------

The content_migrate_unt_ module is based on the awesome Migrate module -  http://drupal.org/project/migrate
The content_migrate_unt_ module requires the Migrate V2(6.x-2.0) module.

Note:
All imports/rollbacks/etc. are initiated by drush commands or the the interface provided.
You can visit interface at <your_site_url>?q=admin/content/migrate

To better understand the migrate module:
see the migrate module documentation(http://drupal.org/node/415260)
and the economist.com case study(http://drupal.org/node/915102).

Usage:
------

IMPORTANT: Set the source drupal database name and table prefix at <your_site_url>?q=admin/settings/mdl
Use "mckc_" as table prefix, since out Drupal5 db is using this prefix.
NOTE: If your current drupal 7 instance is using any prefix, use this prefix in the source database naming and in the setting only pass the database name excluding the prefix.
e.g. mdl6 is using prefix "mdl_"
so the source database name must be "mdl_your_dbname"
at <your_site_url>?q=admin/config/services/content_migrate_unt_source path only pas "your_dbname"


FOR Article:
1. For story migration run the command:
    drush mi mdlStoryNode
   For rollback of the migration:
    drush mr mdlStoryNode

	For comments migration
	drush mi mdlStoryComment



Note:: The steps for migration should be like below.
 1. migrate user
 2. migrate taxonomy
 3. migrate node and corresponding comment
