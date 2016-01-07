<?php
/**
 * @file
 * govi_marco_legal.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function govi_marco_legal_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'marco_legal_normatividad';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Marco Legal Normatividad';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Marco Legal Normatividad';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_legal_normatividad',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Descripción */
  $handler->display->display_options['fields']['field_legal_descripcion']['id'] = 'field_legal_descripcion';
  $handler->display->display_options['fields']['field_legal_descripcion']['table'] = 'field_data_field_legal_descripcion';
  $handler->display->display_options['fields']['field_legal_descripcion']['field'] = 'field_legal_descripcion';
  $handler->display->display_options['fields']['field_legal_descripcion']['element_label_colon'] = FALSE;
  /* Field: Content: Enlace */
  $handler->display->display_options['fields']['field_legal_enlace']['id'] = 'field_legal_enlace';
  $handler->display->display_options['fields']['field_legal_enlace']['table'] = 'field_data_field_legal_enlace';
  $handler->display->display_options['fields']['field_legal_enlace']['field'] = 'field_legal_enlace';
  $handler->display->display_options['fields']['field_legal_enlace']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_legal_enlace']['click_sort_column'] = 'url';
  /* Field: Content: Archivo adjunto */
  $handler->display->display_options['fields']['field_legal_adjunto']['id'] = 'field_legal_adjunto';
  $handler->display->display_options['fields']['field_legal_adjunto']['table'] = 'field_data_field_legal_adjunto';
  $handler->display->display_options['fields']['field_legal_adjunto']['field'] = 'field_legal_adjunto';
  $handler->display->display_options['fields']['field_legal_adjunto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_legal_adjunto']['click_sort_column'] = 'fid';
  /* Field: Content: Clasificación del marco legal */
  $handler->display->display_options['fields']['field_legal_clasificacion']['id'] = 'field_legal_clasificacion';
  $handler->display->display_options['fields']['field_legal_clasificacion']['table'] = 'field_data_field_legal_clasificacion';
  $handler->display->display_options['fields']['field_legal_clasificacion']['field'] = 'field_legal_clasificacion';
  $handler->display->display_options['fields']['field_legal_clasificacion']['label'] = 'Clasificación';
  $handler->display->display_options['fields']['field_legal_clasificacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_legal_clasificacion']['element_label_colon'] = FALSE;
  /* Field: Content: Entidad que expide la norma */
  $handler->display->display_options['fields']['field_legal_lugar_expedicion']['id'] = 'field_legal_lugar_expedicion';
  $handler->display->display_options['fields']['field_legal_lugar_expedicion']['table'] = 'field_data_field_legal_lugar_expedicion';
  $handler->display->display_options['fields']['field_legal_lugar_expedicion']['field'] = 'field_legal_lugar_expedicion';
  $handler->display->display_options['fields']['field_legal_lugar_expedicion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_legal_lugar_expedicion']['element_label_colon'] = FALSE;
  /* Field: Content: Fecha de expedición de la norma */
  $handler->display->display_options['fields']['field_legal_expedicion']['id'] = 'field_legal_expedicion';
  $handler->display->display_options['fields']['field_legal_expedicion']['table'] = 'field_data_field_legal_expedicion';
  $handler->display->display_options['fields']['field_legal_expedicion']['field'] = 'field_legal_expedicion';
  $handler->display->display_options['fields']['field_legal_expedicion']['label'] = '';
  $handler->display->display_options['fields']['field_legal_expedicion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_legal_expedicion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_legal_expedicion']['settings'] = array(
    'format_type' => 'anho',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Tipo de recurso */
  $handler->display->display_options['fields']['field_legal_recurso']['id'] = 'field_legal_recurso';
  $handler->display->display_options['fields']['field_legal_recurso']['table'] = 'field_data_field_legal_recurso';
  $handler->display->display_options['fields']['field_legal_recurso']['field'] = 'field_legal_recurso';
  $handler->display->display_options['fields']['field_legal_recurso']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_legal_recurso']['element_label_colon'] = FALSE;
  /* Field: Content: Tipos de normatividad */
  $handler->display->display_options['fields']['field_legal_normatividad']['id'] = 'field_legal_normatividad';
  $handler->display->display_options['fields']['field_legal_normatividad']['table'] = 'field_data_field_legal_normatividad';
  $handler->display->display_options['fields']['field_legal_normatividad']['field'] = 'field_legal_normatividad';
  $handler->display->display_options['fields']['field_legal_normatividad']['label'] = '';
  $handler->display->display_options['fields']['field_legal_normatividad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_legal_normatividad']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'marco_legal' => 'marco_legal',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    14 => '14',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'marco_legal_clasificacion';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'marco-legal/normatividad';
  $translatables['marco_legal_normatividad'] = array(
    t('Master'),
    t('Marco Legal Normatividad'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Nombre'),
    t('Descripción'),
    t('Enlace'),
    t('Archivo adjunto'),
    t('Clasificación'),
    t('Entidad que expide la norma'),
    t('Tipo de recurso'),
    t('Page'),
  );
  $export['marco_legal_normatividad'] = $view;

  return $export;
}
