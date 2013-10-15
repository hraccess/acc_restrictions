<?php
/**
 * @file
 * acc_restrictions.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function acc_restrictions_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'acc_restictions_csv_impoter-administrative_request_submited_by-explode';
  $feeds_tamper->importer = 'acc_restictions_csv_impoter';
  $feeds_tamper->source = 'Administrative request submited by';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['acc_restictions_csv_impoter-administrative_request_submited_by-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'acc_restictions_csv_impoter-administrative_request_submited_by_guid-explode';
  $feeds_tamper->importer = 'acc_restictions_csv_impoter';
  $feeds_tamper->source = 'Administrative request submited by GUID';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['acc_restictions_csv_impoter-administrative_request_submited_by_guid-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'acc_restictions_csv_impoter-impact_text-explode';
  $feeds_tamper->importer = 'acc_restictions_csv_impoter';
  $feeds_tamper->source = 'Impact Text';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['acc_restictions_csv_impoter-impact_text-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'acc_restictions_csv_impoter-impact_text_guid-explode';
  $feeds_tamper->importer = 'acc_restictions_csv_impoter';
  $feeds_tamper->source = 'Impact Text GUID';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['acc_restictions_csv_impoter-impact_text_guid-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'acc_restictions_csv_impoter-sector_s__affected-explode';
  $feeds_tamper->importer = 'acc_restictions_csv_impoter';
  $feeds_tamper->source = 'Sector(s) affected';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['acc_restictions_csv_impoter-sector_s__affected-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'acc_restictions_csv_impoter-value-explode';
  $feeds_tamper->importer = 'acc_restictions_csv_impoter';
  $feeds_tamper->source = 'Value';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['acc_restictions_csv_impoter-value-explode'] = $feeds_tamper;

  return $export;
}
