<?php
/**
 * @file
 * acc_restrictions.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function acc_restrictions_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'access_restrictions';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'dashboard/factsheet-restriction-movement' => 'dashboard/factsheet-restriction-movement',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-2c10ec9918bdd62fa856549ead996f80' => array(
          'module' => 'views',
          'delta' => '2c10ec9918bdd62fa856549ead996f80',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-5f32c01a0063a8466af0a8b6ef387d9c' => array(
          'module' => 'views',
          'delta' => '5f32c01a0063a8466af0a8b6ef387d9c',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-dc01ee93c5dded2d3de95970a84e5e1b' => array(
          'module' => 'views',
          'delta' => 'dc01ee93c5dded2d3de95970a84e5e1b',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-ff572ea2fd4a59a6cc27ea1ea84cbe81' => array(
          'module' => 'views',
          'delta' => 'ff572ea2fd4a59a6cc27ea1ea84cbe81',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-191d7492b25f33155572debd40237547' => array(
          'module' => 'views',
          'delta' => '191d7492b25f33155572debd40237547',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-a8302d53fb2ece4d5a3e007e89c83e8a' => array(
          'module' => 'views',
          'delta' => 'a8302d53fb2ece4d5a3e007e89c83e8a',
          'region' => 'content',
          'weight' => '-5',
        ),
        'views-494abdbadec95c6ea2423e4c0eee160c' => array(
          'module' => 'views',
          'delta' => '494abdbadec95c6ea2423e4c0eee160c',
          'region' => 'content',
          'weight' => '-4',
        ),
        'views-46ec27e1841bc1062a4b59f7f3663450' => array(
          'module' => 'views',
          'delta' => '46ec27e1841bc1062a4b59f7f3663450',
          'region' => 'content',
          'weight' => '-3',
        ),
        'views-5d4bb2ea63e9bcfb3514b655555a0997' => array(
          'module' => 'views',
          'delta' => '5d4bb2ea63e9bcfb3514b655555a0997',
          'region' => 'content',
          'weight' => '-2',
        ),
        'views-912805059473c4a6d092073825c9f5ba' => array(
          'module' => 'views',
          'delta' => '912805059473c4a6d092073825c9f5ba',
          'region' => 'content',
          'weight' => '-1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['access_restrictions'] = $context;

  return $export;
}
