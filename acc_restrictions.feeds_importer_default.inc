<?php
/**
 * @file
 * acc_restrictions.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function acc_restrictions_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'acc_restictions_csv_impoter';
  $feeds_importer->config = array(
    'name' => 'Access Restictions CSV Impoter',
    'description' => 'Import Access Restrictions from CVS file for Access Humanitarian module',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Date',
            'target' => 'field_date:start',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Access Constraint',
            'target' => 'field_access_constraint',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Purpose of the administrative request',
            'target' => 'field_incident_type_restriction:label',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Purpose of the administrative request GUID',
            'target' => 'field_incident_type_restriction',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Administrative request submited by',
            'target' => 'field_targetted_actor:label',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Administrative request submited by GUID',
            'target' => 'field_targetted_actor',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Geographical Location (Origin)',
            'target' => 'field_geographical_location_dest',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Geographical Location (Destination)',
            'target' => 'field_locations',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Below Admin 2 Level (Destination)',
            'target' => 'field_below_admin_2_level',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Submission Status',
            'target' => 'field_request_status',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'If denied/delayed, by whom',
            'target' => 'field_responsible_actor:label',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'If denied/delayed, by whom GUID',
            'target' => 'field_responsible_actor',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'How many days did it take to get an answer (positive/negative)?',
            'target' => 'field_how_many_days_did_it_take_',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Sector(s) affected',
            'target' => 'field_clusters',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Description/Remarks',
            'target' => 'body:et:en',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Impact Text',
            'target' => 'field_br_req_within_impact:field_br_req_within_country_impa:label',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'Impact Text GUID',
            'target' => 'field_br_req_within_impact:field_br_req_within_country_impa',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'Value',
            'target' => 'field_br_req_within_impact:field_value',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'bureaucratic_requirement_within_',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['acc_restictions_csv_impoter'] = $feeds_importer;

  return $export;
}
