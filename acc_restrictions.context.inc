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
  $context->name = 'acc_restrictions';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'access/dashboard/factsheet-restriction-movement' => 'access/dashboard/factsheet-restriction-movement',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-c3e6836714a5059fd48c532317df00ba' => array(
          'module' => 'views',
          'delta' => 'c3e6836714a5059fd48c532317df00ba',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-e90b6dda7b91619086523e2d65c749e2' => array(
          'module' => 'views',
          'delta' => 'e90b6dda7b91619086523e2d65c749e2',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-e7d13e097bba6489964e77a07d351220' => array(
          'module' => 'views',
          'delta' => 'e7d13e097bba6489964e77a07d351220',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-15fa67f382ee037c39445044ffc7178d' => array(
          'module' => 'views',
          'delta' => '15fa67f382ee037c39445044ffc7178d',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-af00c5f370726104086133334bee6643' => array(
          'module' => 'views',
          'delta' => 'af00c5f370726104086133334bee6643',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-9e140c1a85629cb0b51be5e072f08dbb' => array(
          'module' => 'views',
          'delta' => '9e140c1a85629cb0b51be5e072f08dbb',
          'region' => 'content',
          'weight' => '-5',
        ),
        'views-b083607033a5429102067fc65e6f1ce9' => array(
          'module' => 'views',
          'delta' => 'b083607033a5429102067fc65e6f1ce9',
          'region' => 'content',
          'weight' => '-4',
        ),
        'views-80061fd00edb194cd151363ae6bd4e27' => array(
          'module' => 'views',
          'delta' => '80061fd00edb194cd151363ae6bd4e27',
          'region' => 'content',
          'weight' => '-3',
        ),
        'views-a950d9945560d9e9d95d22236adcb4d8' => array(
          'module' => 'views',
          'delta' => 'a950d9945560d9e9d95d22236adcb4d8',
          'region' => 'content',
          'weight' => '-2',
        ),
        'views-536ed474aba73b74d4424bbc98c0d276' => array(
          'module' => 'views',
          'delta' => '536ed474aba73b74d4424bbc98c0d276',
          'region' => 'content',
          'weight' => '-1',
        ),
        'views-eb6998e206aaf6d404828939469e9168' => array(
          'module' => 'views',
          'delta' => 'eb6998e206aaf6d404828939469e9168',
          'region' => 'content',
          'weight' => '0',
        ),
        'views-e6c55a22ca85ae931ac13cc695d7f8c9' => array(
          'module' => 'views',
          'delta' => 'e6c55a22ca85ae931ac13cc695d7f8c9',
          'region' => 'content',
          'weight' => '1',
        ),
        'views-e3dd393c7e7e1bcb5b8388e5443be72d' => array(
          'module' => 'views',
          'delta' => 'e3dd393c7e7e1bcb5b8388e5443be72d',
          'region' => 'content',
          'weight' => '2',
        ),
        'views-d4dfcbce223e874c139e665e0474dc83' => array(
          'module' => 'views',
          'delta' => 'd4dfcbce223e874c139e665e0474dc83',
          'region' => 'content',
          'weight' => '3',
        ),
        'views-f967e835fda1b410f10889e959de752c' => array(
          'module' => 'views',
          'delta' => 'f967e835fda1b410f10889e959de752c',
          'region' => 'content',
          'weight' => '4',
        ),
        'views-647e81e17e72364d296508a4f68e4d4e' => array(
          'module' => 'views',
          'delta' => '647e81e17e72364d296508a4f68e4d4e',
          'region' => 'content',
          'weight' => '5',
        ),
        'boxes-acc_access_links' => array(
          'module' => 'boxes',
          'delta' => 'acc_access_links',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'global_filter-global_filter_5' => array(
          'module' => 'global_filter',
          'delta' => 'global_filter_5',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'bean-filter-reset---clusters' => array(
          'module' => 'bean',
          'delta' => 'filter-reset---clusters',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'global_filter-global_filter_3' => array(
          'module' => 'global_filter',
          'delta' => 'global_filter_3',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'bean-filter-reset---incident-date' => array(
          'module' => 'bean',
          'delta' => 'filter-reset---incident-date',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'global_filter-global_filter_2' => array(
          'module' => 'global_filter',
          'delta' => 'global_filter_2',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
        'bean-filter-reset---location' => array(
          'module' => 'bean',
          'delta' => 'filter-reset---location',
          'region' => 'sidebar_second',
          'weight' => '-4',
        ),
        'global_filter-global_filter_4' => array(
          'module' => 'global_filter',
          'delta' => 'global_filter_4',
          'region' => 'sidebar_second',
          'weight' => '-3',
        ),
        'bean-filter-reset---clusters-0' => array(
          'module' => 'bean',
          'delta' => 'filter-reset---clusters-0',
          'region' => 'sidebar_second',
          'weight' => '-2',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['acc_restrictions'] = $context;

  return $export;
}
