<?php
/**
 * @file
 * govi_marco_legal.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function govi_marco_legal_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'marco_legal_normatividad';
  $path_breadcrumb->name = 'Marco legal normatividad';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Marco Legal',
      1 => 'Normatividad',
      2 => '%node:title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'marco-legal/normatividad',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'marco_legal' => 'marco_legal',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['marco_legal_normatividad'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'marco_legal_normatividad_home';
  $path_breadcrumb->name = 'Marco Legal normatividad home';
  $path_breadcrumb->path = 'marco-legal/normatividad';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Marco Legal',
      1 => 'Normatividad',
    ),
    'paths' => array(
      0 => '<none>',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['marco_legal_normatividad_home'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'marco_legal_normatividad_terminos';
  $path_breadcrumb->name = 'Marco legal normatividad terminos';
  $path_breadcrumb->path = 'taxonomy/term/%term';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Marco Legal',
      1 => 'Normatividad',
      2 => '%term:name',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'marco-legal/normatividad',
      2 => '%term:url',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'term' => array(
        'position' => 2,
        'argument' => 'term',
        'settings' => array(
          'identifier' => 'Taxonomy term: ID',
          'input_form' => 'tid',
          'vids' => array(
            8 => '8',
            9 => '9',
            11 => '11',
            12 => '12',
            10 => 0,
            1 => 0,
            4 => 0,
            5 => 0,
            6 => 0,
            3 => 0,
            7 => 0,
            13 => 0,
            2 => 0,
          ),
          'breadcrumb' => 1,
          'transform' => 0,
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '11',
            8 => array(),
            10 => array(),
            9 => array(),
            11 => array(
              22 => '22',
              20 => '20',
              24 => '24',
              21 => '21',
              19 => '19',
              18 => '18',
              23 => '23',
              17 => '17',
            ),
            12 => array(),
            1 => array(),
            4 => array(),
            5 => array(),
            6 => array(),
            3 => array(),
            7 => array(),
            13 => array(),
            2 => array(),
          ),
          'context' => 'term',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['marco_legal_normatividad_terminos'] = $path_breadcrumb;

  return $export;
}
