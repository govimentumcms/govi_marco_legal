<?php
/**
 * @file
 * govi_marco_legal.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function govi_marco_legal_conditional_fields_default_fields() {
  $items = array();

  $items["node:marco_legal:0"] = array(
    'entity' => 'node',
    'bundle' => 'marco_legal',
    'dependent' => 'field_legal_adjunto',
    'dependee' => 'field_legal_recurso',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 400,
      ),
      'element_view' => array(
        1 => 1,
        2 => 2,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => 1,
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => 1,
          3 => 0,
        ),
        2 => array(
          1 => 1,
          3 => 0,
        ),
        3 => array(
          1 => 1,
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value_form' => 'archivo',
      'value' => array(
        0 => array(
          'value' => 'archivo',
        ),
      ),
      'values' => array(),
    ),
  );

  $items["node:marco_legal:1"] = array(
    'entity' => 'node',
    'bundle' => 'marco_legal',
    'dependent' => 'field_legal_enlace',
    'dependee' => 'field_legal_recurso',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 400,
      ),
      'element_view' => array(
        1 => 1,
        2 => 2,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => 1,
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => 1,
          3 => 0,
        ),
        2 => array(
          1 => 1,
          3 => 0,
        ),
        3 => array(
          1 => 1,
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value_form' => 'enlace',
      'value' => array(
        0 => array(
          'value' => 'enlace',
        ),
      ),
      'values' => array(),
    ),
  );

  return $items;
}
