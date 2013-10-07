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
        'views-00d5c0ab470575c45bfd225d78a542e8' => array(
          'module' => 'views',
          'delta' => '00d5c0ab470575c45bfd225d78a542e8',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-497e7d426d138d16a776ecebc5125859' => array(
          'module' => 'views',
          'delta' => '497e7d426d138d16a776ecebc5125859',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-9930952b7686ab35128a106739011c9a' => array(
          'module' => 'views',
          'delta' => '9930952b7686ab35128a106739011c9a',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-b1b7ca8d2554ce0bd3ddf2e5925fc183' => array(
          'module' => 'views',
          'delta' => 'b1b7ca8d2554ce0bd3ddf2e5925fc183',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-ba4c69c3814434a6380fa0d983ed2663' => array(
          'module' => 'views',
          'delta' => 'ba4c69c3814434a6380fa0d983ed2663',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-3e73fd9e9bf62da4a3fa2aa029fd5710' => array(
          'module' => 'views',
          'delta' => '3e73fd9e9bf62da4a3fa2aa029fd5710',
          'region' => 'content',
          'weight' => '-5',
        ),
        'views-ad9a57096b740b9cc6f2dd2fa8a947d8' => array(
          'module' => 'views',
          'delta' => 'ad9a57096b740b9cc6f2dd2fa8a947d8',
          'region' => 'content',
          'weight' => '-4',
        ),
        'views-26c7433cb042d78abf359d48e23212cc' => array(
          'module' => 'views',
          'delta' => '26c7433cb042d78abf359d48e23212cc',
          'region' => 'content',
          'weight' => '-3',
        ),
        'views-9f6b592ed4012aeb3e9249e7c55b92bf' => array(
          'module' => 'views',
          'delta' => '9f6b592ed4012aeb3e9249e7c55b92bf',
          'region' => 'content',
          'weight' => '-2',
        ),
        'views-17f63ca052fe17d028bc6082b90e3f45' => array(
          'module' => 'views',
          'delta' => '17f63ca052fe17d028bc6082b90e3f45',
          'region' => 'content',
          'weight' => '-1',
        ),
        'views-a950d9945560d9e9d95d22236adcb4d8' => array(
          'module' => 'views',
          'delta' => 'a950d9945560d9e9d95d22236adcb4d8',
          'region' => 'content',
          'weight' => '0',
        ),
        'views-e7d13e097bba6489964e77a07d351220' => array(
          'module' => 'views',
          'delta' => 'e7d13e097bba6489964e77a07d351220',
          'region' => 'content',
          'weight' => '1',
        ),
        'views-c3e6836714a5059fd48c532317df00ba' => array(
          'module' => 'views',
          'delta' => 'c3e6836714a5059fd48c532317df00ba',
          'region' => 'content',
          'weight' => '2',
        ),
        'views-af00c5f370726104086133334bee6643' => array(
          'module' => 'views',
          'delta' => 'af00c5f370726104086133334bee6643',
          'region' => 'content',
          'weight' => '3',
        ),
        'views-eb6998e206aaf6d404828939469e9168' => array(
          'module' => 'views',
          'delta' => 'eb6998e206aaf6d404828939469e9168',
          'region' => 'content',
          'weight' => '4',
        ),
        'views-e3dd393c7e7e1bcb5b8388e5443be72d' => array(
          'module' => 'views',
          'delta' => 'e3dd393c7e7e1bcb5b8388e5443be72d',
          'region' => 'content',
          'weight' => '5',
        ),
        'views-e6c55a22ca85ae931ac13cc695d7f8c9' => array(
          'module' => 'views',
          'delta' => 'e6c55a22ca85ae931ac13cc695d7f8c9',
          'region' => 'content',
          'weight' => '6',
        ),
        'views-d4dfcbce223e874c139e665e0474dc83' => array(
          'module' => 'views',
          'delta' => 'd4dfcbce223e874c139e665e0474dc83',
          'region' => 'content',
          'weight' => '7',
        ),
        'views-536ed474aba73b74d4424bbc98c0d276' => array(
          'module' => 'views',
          'delta' => '536ed474aba73b74d4424bbc98c0d276',
          'region' => 'content',
          'weight' => '8',
        ),
        'views-15fa67f382ee037c39445044ffc7178d' => array(
          'module' => 'views',
          'delta' => '15fa67f382ee037c39445044ffc7178d',
          'region' => 'content',
          'weight' => '9',
        ),
        'views-e90b6dda7b91619086523e2d65c749e2' => array(
          'module' => 'views',
          'delta' => 'e90b6dda7b91619086523e2d65c749e2',
          'region' => 'content',
          'weight' => '10',
        ),
        'views-9e140c1a85629cb0b51be5e072f08dbb' => array(
          'module' => 'views',
          'delta' => '9e140c1a85629cb0b51be5e072f08dbb',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['acc_restrictions'] = $context;

  return $export;
}
