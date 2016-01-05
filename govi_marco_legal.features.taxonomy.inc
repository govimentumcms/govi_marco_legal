<?php
/**
 * @file
 * govi_marco_legal.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function govi_marco_legal_taxonomy_default_vocabularies() {
  return array(
    'marco_legal_lugares_expedicion' => array(
      'name' => 'Marco Legal lugares expedición',
      'machine_name' => 'marco_legal_lugares_expedicion',
      'description' => 'Lista de terminos para categorizar las entidades o lugares de expedición de normas, lineamientos, planes y políticas',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'normatividad_tipos' => array(
      'name' => 'Marco Legal Tipos de Documento',
      'machine_name' => 'normatividad_tipos',
      'description' => 'Lista de terminos para categorizar los tipos de documento del marco legal',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
