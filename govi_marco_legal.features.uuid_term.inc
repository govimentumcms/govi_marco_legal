<?php
/**
 * @file
 * govi_marco_legal.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function govi_marco_legal_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Normas constitucionales',
    'description' => 'termino Normas constitucionales de la categoria Marco Legal Normatividad',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '12076149-f9eb-4e7e-a1f0-da8a7d462d5a',
    'vocabulary_machine_name' => 'marco_legal_normatividad',
  );
  $terms[] = array(
    'name' => 'Jurisprudencia',
    'description' => 'termino Jurisprudencia de la categoria Marco Legal Normatividad',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '287aa1b4-9a6a-4a87-a454-500fa1b23bd9',
    'vocabulary_machine_name' => 'marco_legal_normatividad',
  );
  $terms[] = array(
    'name' => 'Decretos',
    'description' => 'termino Decretos de la categoria Marco Legal Normatividad',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2b6758bd-41c6-4ae6-8843-4ffaa3419084',
    'vocabulary_machine_name' => 'marco_legal_normatividad',
  );
  $terms[] = array(
    'name' => 'Circulares',
    'description' => 'termino Circulares de la categoria Marco Legal Lineamientos',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '454b9614-dc51-4ef0-ba03-f2de8739f7be',
    'vocabulary_machine_name' => 'marco_legal_lineamientos',
  );
  $terms[] = array(
    'name' => 'Actas',
    'description' => 'termino Actas de la categoria Marco Legal Lineamientos',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '51ae634d-9241-4a52-8a42-fa583eff2c43',
    'vocabulary_machine_name' => 'marco_legal_lineamientos',
  );
  $terms[] = array(
    'name' => 'Conceptos',
    'description' => 'termino Conceptos de la categoria Marco Legal Lineamientos',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5546884b-883e-4432-abeb-e8fc2ffdcfe8',
    'vocabulary_machine_name' => 'marco_legal_lineamientos',
  );
  $terms[] = array(
    'name' => 'Resoluciones',
    'description' => 'termino Resoluciones de la categoria Marco Legal Normatividad',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5c651eee-b004-4074-9cd6-eb30ea4e6b23',
    'vocabulary_machine_name' => 'marco_legal_normatividad',
  );
  $terms[] = array(
    'name' => 'Tratados internacionales',
    'description' => 'termino Tratados internacionales de la categoria Marco Legal Normatividad',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5f09088b-b483-451f-8534-0ac4ba13f19f',
    'vocabulary_machine_name' => 'marco_legal_normatividad',
  );
  $terms[] = array(
    'name' => 'Normatividad',
    'description' => 'termino Normatividad de la categoria Marco Legal Clasificación',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7a3c3749-9294-4542-955b-f3ecab9c218d',
    'vocabulary_machine_name' => 'marco_legal_clasificacion',
  );
  $terms[] = array(
    'name' => 'Planes',
    'description' => 'termino Planes de la categoria Marco Legal Clasificación',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7db25df1-06df-4d65-999e-acb0131ff341',
    'vocabulary_machine_name' => 'marco_legal_clasificacion',
  );
  $terms[] = array(
    'name' => 'Directivas',
    'description' => 'termino Directivas de la categoria Marco Legal Normatividad',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '98f820c1-0a40-4d46-892c-2606d4f8ae32',
    'vocabulary_machine_name' => 'marco_legal_normatividad',
  );
  $terms[] = array(
    'name' => 'Acuerdos distritales',
    'description' => 'termino Acuerdos distritales de la categoria Marco Legal Normatividad',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'acdf8029-3924-4c27-8269-c0f6eeda979b',
    'vocabulary_machine_name' => 'marco_legal_normatividad',
  );
  $terms[] = array(
    'name' => 'Planes de desarrollo',
    'description' => 'termino Planes de desarrollo de la categoria Marco Legal Planes',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b0eae8e3-1a98-4fdf-883e-cba67576e635',
    'vocabulary_machine_name' => 'marco_legal_planes',
  );
  $terms[] = array(
    'name' => 'Lineamientos',
    'description' => 'termino Lineamientos de la categoria Marco Legal Clasificación',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e6a184da-909d-4c10-a912-c6e2ec94c896',
    'vocabulary_machine_name' => 'marco_legal_clasificacion',
  );
  $terms[] = array(
    'name' => 'Proyectos de inversión',
    'description' => 'termino Proyectos de inversión de la categoria Marco Legal Planes',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ef73904c-f698-4045-9a63-ceecbd837947',
    'vocabulary_machine_name' => 'marco_legal_planes',
  );
  $terms[] = array(
    'name' => 'Leyes',
    'description' => 'termino Leyes de la categoria Marco Legal Normatividad',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f640afde-1318-4260-81b2-04d8f10ba71f',
    'vocabulary_machine_name' => 'marco_legal_normatividad',
  );
  return $terms;
}
