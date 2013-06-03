<?php
/**
 * @file
 * acc_restrictions.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function acc_restrictions_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_bureaucratic_requirement_within_';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_bureaucratic_requirement_within_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_bureaucratic_requirement_within_';
  $strongarm->value = '[node:field_date] [node:field_incident_type_restriction] [node:field_targetted_actor]';
  $export['auto_entitylabel_pattern_node_bureaucratic_requirement_within_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_bureaucratic_requirement_within_';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_bureaucratic_requirement_within_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_bureaucratic_requirement_within_';
  $strongarm->value = 0;
  $export['comment_anonymous_bureaucratic_requirement_within_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_bureaucratic_requirement_within_';
  $strongarm->value = '0';
  $export['comment_bureaucratic_requirement_within_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_bureaucratic_requirement_within_';
  $strongarm->value = 1;
  $export['comment_default_mode_bureaucratic_requirement_within_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_bureaucratic_requirement_within_';
  $strongarm->value = '50';
  $export['comment_default_per_page_bureaucratic_requirement_within_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_bureaucratic_requirement_within_';
  $strongarm->value = 0;
  $export['comment_form_location_bureaucratic_requirement_within_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_bureaucratic_requirement_within_';
  $strongarm->value = '0';
  $export['comment_preview_bureaucratic_requirement_within_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_bureaucratic_requirement_within_';
  $strongarm->value = 0;
  $export['comment_subject_field_bureaucratic_requirement_within_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__bureaucratic_requirement_within_';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '15',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__bureaucratic_requirement_within_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_bureaucratic_requirement_within_';
  $strongarm->value = '0';
  $export['language_content_type_bureaucratic_requirement_within_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_bureaucratic_requirement_within_';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_bureaucratic_requirement_within_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_bureaucratic_requirement_within_';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_bureaucratic_requirement_within_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_bureaucratic_requirement_within_';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_bureaucratic_requirement_within_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_bureaucratic_requirement_within_';
  $strongarm->value = '0';
  $export['node_preview_bureaucratic_requirement_within_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_bureaucratic_requirement_within_';
  $strongarm->value = 1;
  $export['node_submitted_bureaucratic_requirement_within_'] = $strongarm;

  return $export;
}
