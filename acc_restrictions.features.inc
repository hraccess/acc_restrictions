<?php
/**
 * @file
 * acc_restrictions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function acc_restrictions_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function acc_restrictions_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function acc_restrictions_node_info() {
  $items = array(
    'bureaucratic_requirement_within_' => array(
      'name' => t('Restrictions on movement within country'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
