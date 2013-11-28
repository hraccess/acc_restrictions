<?php
/**
 * @file
 * acc_restrictions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function acc_restrictions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'acc_restriction_on_movement_within_the_country';
  $view->description = '';
  $view->tag = 'Access';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Restrictions on movement within country';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    30037204 => '30037204',
    52310416 => '52310416',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'visualization';
  $handler->display->display_options['style_options']['type'] = 'bar';
  $handler->display->display_options['style_options']['fields'] = array(
    'field_request_status_1' => array(
      'enabled' => 1,
      'sort' => '0',
    ),
    'field_clusters' => array(
      'enabled' => 0,
    ),
    'field_request_status' => array(
      'enabled' => 0,
      'sort' => 'ASC',
    ),
  );
  $handler->display->display_options['style_options']['yAxis'] = array(
    'title' => 'Number of NOCs',
  );
  $handler->display->display_options['style_options']['xAxis'] = array(
    'labelField' => 'field_request_status',
    'invert' => 0,
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_targetted_actor_target_id']['id'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['relationships']['field_targetted_actor_target_id']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['relationships']['field_targetted_actor_target_id']['field'] = 'field_targetted_actor_target_id';
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_request_status']['id'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['fields']['field_request_status']['field'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['label'] = '';
  $handler->display->display_options['fields']['field_request_status']['element_label_colon'] = FALSE;
  /* Field: Field: Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['relationship'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['fields']['field_organization_type']['label'] = 'Org Type';
  $handler->display->display_options['fields']['field_organization_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_organization_type']['alter']['text'] = '[field_organization_type] [field_request_status]';
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_request_status_1']['id'] = 'field_request_status_1';
  $handler->display->display_options['fields']['field_request_status_1']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['fields']['field_request_status_1']['field'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_request_status_1']['label'] = '';
  $handler->display->display_options['fields']['field_request_status_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_request_status_1']['separator'] = ',';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field: Location (field_locations) */
  $handler->display->display_options['arguments']['field_locations_tid']['id'] = 'field_locations_tid';
  $handler->display->display_options['arguments']['field_locations_tid']['table'] = 'field_data_field_locations';
  $handler->display->display_options['arguments']['field_locations_tid']['field'] = 'field_locations_tid';
  $handler->display->display_options['arguments']['field_locations_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_locations_tid']['default_argument_type'] = 'global_filter_field';
  $handler->display->display_options['arguments']['field_locations_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_locations_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_locations_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Purpose of the administrative request (field_incident_type_restriction) */
  $handler->display->display_options['arguments']['field_incident_type_restriction_target_id']['id'] = 'field_incident_type_restriction_target_id';
  $handler->display->display_options['arguments']['field_incident_type_restriction_target_id']['table'] = 'field_data_field_incident_type_restriction';
  $handler->display->display_options['arguments']['field_incident_type_restriction_target_id']['field'] = 'field_incident_type_restriction_target_id';
  $handler->display->display_options['arguments']['field_incident_type_restriction_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_incident_type_restriction_target_id']['default_argument_type'] = 'global_filter_field';
  $handler->display->display_options['arguments']['field_incident_type_restriction_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_incident_type_restriction_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_incident_type_restriction_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Field: Clusters (field_clusters) */
  $handler->display->display_options['arguments']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['arguments']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['arguments']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['arguments']['field_clusters_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_clusters_tid']['default_argument_type'] = 'global_filter_field';
  $handler->display->display_options['arguments']['field_clusters_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_clusters_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_clusters_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Date of issunce -  start date (field_date) */
  $handler->display->display_options['arguments']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['arguments']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['arguments']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['arguments']['field_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_date_value']['default_argument_type'] = 'global_filter_field';
  $handler->display->display_options['arguments']['field_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_date_value']['summary_options']['items_per_page'] = '25';
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
    'bureaucratic_requirement_within_' => 'bureaucratic_requirement_within_',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Restrictions on movement within country */
  $handler = $view->new_display('page', 'Restrictions on movement within country', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Restrictions on movement within country';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Date of issunce */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'bureaucratic_requirement_within_' => 'bureaucratic_requirement_within_',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Title (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'access/restrictions';
  $handler->display->display_options['menu']['title'] = 'Restriction on movement';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: XLS */
  $handler = $view->new_display('views_data_export', 'XLS', 'views_data_export_burea_into');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Restrictions on movement within country';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['attach_text'] = 'Export to XLS';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Date of issunce */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Name of Village (Destination) */
  $handler->display->display_options['fields']['field_below_admin_2_level']['id'] = 'field_below_admin_2_level';
  $handler->display->display_options['fields']['field_below_admin_2_level']['table'] = 'field_data_field_below_admin_2_level';
  $handler->display->display_options['fields']['field_below_admin_2_level']['field'] = 'field_below_admin_2_level';
  $handler->display->display_options['fields']['field_below_admin_2_level']['label'] = 'Below Admin 2 Level (Destination)';
  /* Field: Content: Geographical Location (Origin) */
  $handler->display->display_options['fields']['field_geographical_location_dest']['id'] = 'field_geographical_location_dest';
  $handler->display->display_options['fields']['field_geographical_location_dest']['table'] = 'field_data_field_geographical_location_dest';
  $handler->display->display_options['fields']['field_geographical_location_dest']['field'] = 'field_geographical_location_dest';
  $handler->display->display_options['fields']['field_geographical_location_dest']['delta_offset'] = '0';
  /* Field: Content: How many days did it take to get an answer (positive/negative)? */
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['id'] = 'field_how_many_days_did_it_take_';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['table'] = 'field_data_field_how_many_days_did_it_take_';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['field'] = 'field_how_many_days_did_it_take_';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Issuing actor / agency */
  $handler->display->display_options['fields']['field_responsible_actor']['id'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['field'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['label'] = 'Resposible Actor';
  $handler->display->display_options['fields']['field_responsible_actor']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Impact of restriction on movement within the country */
  $handler->display->display_options['fields']['field_br_req_within_impact']['id'] = 'field_br_req_within_impact';
  $handler->display->display_options['fields']['field_br_req_within_impact']['table'] = 'field_data_field_br_req_within_impact';
  $handler->display->display_options['fields']['field_br_req_within_impact']['field'] = 'field_br_req_within_impact';
  $handler->display->display_options['fields']['field_br_req_within_impact']['label'] = 'Impact';
  $handler->display->display_options['fields']['field_br_req_within_impact']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_br_req_within_impact']['delta_offset'] = '0';
  /* Field: Content: Purpose of the administrative request */
  $handler->display->display_options['fields']['field_incident_type_restriction']['id'] = 'field_incident_type_restriction';
  $handler->display->display_options['fields']['field_incident_type_restriction']['table'] = 'field_data_field_incident_type_restriction';
  $handler->display->display_options['fields']['field_incident_type_restriction']['field'] = 'field_incident_type_restriction';
  $handler->display->display_options['fields']['field_incident_type_restriction']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_request_status']['id'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['fields']['field_request_status']['field'] = 'field_request_status';
  /* Field: Content: Submitted By */
  $handler->display->display_options['fields']['field_targetted_actor']['id'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['field'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['label'] = 'Targetted Organization';
  $handler->display->display_options['fields']['field_targetted_actor']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_targetted_actor']['delta_offset'] = '0';
  /* Field: Field: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['label'] = 'Geographical Location (Destination)';
  $handler->display->display_options['fields']['field_locations']['delta_offset'] = '0';
  /* Field: Field: Access Constraint */
  $handler->display->display_options['fields']['field_access_constraint']['id'] = 'field_access_constraint';
  $handler->display->display_options['fields']['field_access_constraint']['table'] = 'field_data_field_access_constraint';
  $handler->display->display_options['fields']['field_access_constraint']['field'] = 'field_access_constraint';
  /* Field: Field: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['label'] = 'Sector(s) affected';
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'bureaucratic_requirement_within_' => 'bureaucratic_requirement_within_',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Title (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'access/restriction_on_movement.xls';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Chart Restrictons by incident types */
  $handler = $view->new_display('block', 'Chart Restrictons by incident types', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Restrictions on movement by incident type';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'visualization';
  $handler->display->display_options['style_options']['type'] = 'bar';
  $handler->display->display_options['style_options']['fields'] = array(
    'field_incident_type_restriction' => array(
      'enabled' => 0,
      'sort' => '0',
    ),
    'field_incident_type_restriction_1' => array(
      'enabled' => 1,
      'sort' => 'DESC',
    ),
  );
  $handler->display->display_options['style_options']['yAxis'] = array(
    'title' => 'Number of incidents',
  );
  $handler->display->display_options['style_options']['xAxis'] = array(
    'labelField' => 'field_incident_type_restriction',
    'invert' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Purpose of the administrative request */
  $handler->display->display_options['fields']['field_incident_type_restriction']['id'] = 'field_incident_type_restriction';
  $handler->display->display_options['fields']['field_incident_type_restriction']['table'] = 'field_data_field_incident_type_restriction';
  $handler->display->display_options['fields']['field_incident_type_restriction']['field'] = 'field_incident_type_restriction';
  $handler->display->display_options['fields']['field_incident_type_restriction']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Purpose of the administrative request */
  $handler->display->display_options['fields']['field_incident_type_restriction_1']['id'] = 'field_incident_type_restriction_1';
  $handler->display->display_options['fields']['field_incident_type_restriction_1']['table'] = 'field_data_field_incident_type_restriction';
  $handler->display->display_options['fields']['field_incident_type_restriction_1']['field'] = 'field_incident_type_restriction';
  $handler->display->display_options['fields']['field_incident_type_restriction_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_incident_type_restriction_1']['label'] = 'Number of Incidents';
  $handler->display->display_options['fields']['field_incident_type_restriction_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['block_description'] = 'Chart Restrictons by incident types';

  /* Display: Restrictons by incident types */
  $handler = $view->new_display('block', 'Restrictons by incident types', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Restrictions on movement by incident type';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_incident_type_restriction' => 'field_incident_type_restriction',
    'field_incident_type_restriction_1' => 'field_incident_type_restriction_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_incident_type_restriction' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_incident_type_restriction_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Purpose of the administrative request */
  $handler->display->display_options['fields']['field_incident_type_restriction']['id'] = 'field_incident_type_restriction';
  $handler->display->display_options['fields']['field_incident_type_restriction']['table'] = 'field_data_field_incident_type_restriction';
  $handler->display->display_options['fields']['field_incident_type_restriction']['field'] = 'field_incident_type_restriction';
  $handler->display->display_options['fields']['field_incident_type_restriction']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Purpose of the administrative request */
  $handler->display->display_options['fields']['field_incident_type_restriction_1']['id'] = 'field_incident_type_restriction_1';
  $handler->display->display_options['fields']['field_incident_type_restriction_1']['table'] = 'field_data_field_incident_type_restriction';
  $handler->display->display_options['fields']['field_incident_type_restriction_1']['field'] = 'field_incident_type_restriction';
  $handler->display->display_options['fields']['field_incident_type_restriction_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_incident_type_restriction_1']['label'] = 'Number of Incidents';
  $handler->display->display_options['fields']['field_incident_type_restriction_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['block_description'] = 'Restrictons by incident types';

  /* Display: Chart Restrictons by location */
  $handler = $view->new_display('block', 'Chart Restrictons by location', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Restrictons by location';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'visualization';
  $handler->display->display_options['style_options']['type'] = 'bar';
  $handler->display->display_options['style_options']['fields'] = array(
    'field_locations' => array(
      'enabled' => 0,
    ),
    'field_locations_1' => array(
      'enabled' => 1,
      'sort' => 'DESC',
    ),
  );
  $handler->display->display_options['style_options']['yAxis'] = array(
    'title' => 'Number of incidents',
  );
  $handler->display->display_options['style_options']['xAxis'] = array(
    'labelField' => 'field_locations',
    'invert' => 1,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['delta_offset'] = '0';
  /* Field: Field: Location */
  $handler->display->display_options['fields']['field_locations_1']['id'] = 'field_locations_1';
  $handler->display->display_options['fields']['field_locations_1']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations_1']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_locations_1']['label'] = 'Number of incidents';
  $handler->display->display_options['fields']['field_locations_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'bureaucratic_requirement_within_' => 'bureaucratic_requirement_within_',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Chart Restrictons by location';

  /* Display: XLS Restrictons by incident types */
  $handler = $view->new_display('views_data_export', 'XLS Restrictons by incident types', 'restriction_by_sub_categories');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'XLS Restrictons by incident types';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_%display.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Purpose of the administrative request */
  $handler->display->display_options['fields']['field_incident_type_restriction']['id'] = 'field_incident_type_restriction';
  $handler->display->display_options['fields']['field_incident_type_restriction']['table'] = 'field_data_field_incident_type_restriction';
  $handler->display->display_options['fields']['field_incident_type_restriction']['field'] = 'field_incident_type_restriction';
  $handler->display->display_options['fields']['field_incident_type_restriction']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Purpose of the administrative request */
  $handler->display->display_options['fields']['field_incident_type_restriction_1']['id'] = 'field_incident_type_restriction_1';
  $handler->display->display_options['fields']['field_incident_type_restriction_1']['table'] = 'field_data_field_incident_type_restriction';
  $handler->display->display_options['fields']['field_incident_type_restriction_1']['field'] = 'field_incident_type_restriction';
  $handler->display->display_options['fields']['field_incident_type_restriction_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_incident_type_restriction_1']['label'] = 'Number of Incidents';
  $handler->display->display_options['fields']['field_incident_type_restriction_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'bureaucratic_requirement_within_' => 'bureaucratic_requirement_within_',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date of issunce -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date Between';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'access/restriction_by_inc_typ.xls';
  $handler->display->display_options['displays'] = array(
    'block_2' => 'block_2',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_3' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Restrictons by location */
  $handler = $view->new_display('block', 'Restrictons by location', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Restrictons by location';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_admin1_2' => 'field_admin1_2',
    'field_admin1_2_1' => 'field_admin1_2_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_admin1_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_admin1_2_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['delta_offset'] = '0';
  /* Field: Field: Location */
  $handler->display->display_options['fields']['field_locations_1']['id'] = 'field_locations_1';
  $handler->display->display_options['fields']['field_locations_1']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations_1']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_locations_1']['label'] = 'Number of incidents';
  $handler->display->display_options['fields']['field_locations_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'bureaucratic_requirement_within_' => 'bureaucratic_requirement_within_',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Restrictons by location';

  /* Display: XLS Chart Restrictons by Location */
  $handler = $view->new_display('views_data_export', 'XLS Chart Restrictons by Location', 'views_data_export_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Restrictions on movement by Location';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_%display.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_admin1_2']['id'] = 'field_admin1_2';
  $handler->display->display_options['fields']['field_admin1_2']['table'] = 'field_data_field_admin1_2';
  $handler->display->display_options['fields']['field_admin1_2']['field'] = 'field_admin1_2';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_admin1_2_1']['id'] = 'field_admin1_2_1';
  $handler->display->display_options['fields']['field_admin1_2_1']['table'] = 'field_data_field_admin1_2';
  $handler->display->display_options['fields']['field_admin1_2_1']['field'] = 'field_admin1_2';
  $handler->display->display_options['fields']['field_admin1_2_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_admin1_2_1']['label'] = 'Number of Incidents';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'bureaucratic_requirement_within_' => 'bureaucratic_requirement_within_',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date of issunce -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date Between';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'access/restriction_by_location.xls';
  $handler->display->display_options['displays'] = array(
    'block_4' => 'block_4',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Chart Restrictons by resposible actor */
  $handler = $view->new_display('block', 'Chart Restrictons by resposible actor', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Restrictons by resposible actor';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'visualization';
  $handler->display->display_options['style_options']['type'] = 'pie';
  $handler->display->display_options['style_options']['fields'] = array(
    'field_organization_type' => array(
      'enabled' => 0,
      'sort' => '0',
    ),
    'field_responsible_actor_1' => array(
      'enabled' => 1,
      'sort' => 'DESC',
    ),
  );
  $handler->display->display_options['style_options']['yAxis'] = array(
    'title' => 'Number of incidents',
  );
  $handler->display->display_options['style_options']['xAxis'] = array(
    'labelField' => 'field_organization_type',
    'invert' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_responsible_actor_target_id']['id'] = 'field_responsible_actor_target_id';
  $handler->display->display_options['relationships']['field_responsible_actor_target_id']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['relationships']['field_responsible_actor_target_id']['field'] = 'field_responsible_actor_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['relationship'] = 'field_responsible_actor_target_id';
  $handler->display->display_options['fields']['field_organization_type']['label'] = 'Org Type';
  /* Field: Content: Issuing actor / agency */
  $handler->display->display_options['fields']['field_responsible_actor_1']['id'] = 'field_responsible_actor_1';
  $handler->display->display_options['fields']['field_responsible_actor_1']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor_1']['field'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_responsible_actor_1']['label'] = 'Number of Incidents';
  $handler->display->display_options['fields']['field_responsible_actor_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'bureaucratic_requirement_within_' => 'bureaucratic_requirement_within_',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Chart Restrictons by resposible actor';

  /* Display: Restrictons by resposible actor */
  $handler = $view->new_display('block', 'Restrictons by resposible actor', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Restrictons by resposible actor';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_responsible_actor' => 'field_responsible_actor',
    'field_responsible_actor_1' => 'field_responsible_actor_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_responsible_actor' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_responsible_actor_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Issuing actor / agency */
  $handler->display->display_options['fields']['field_responsible_actor']['id'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['field'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['label'] = 'Allegedly responsible actor';
  $handler->display->display_options['fields']['field_responsible_actor']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Issuing actor / agency */
  $handler->display->display_options['fields']['field_responsible_actor_1']['id'] = 'field_responsible_actor_1';
  $handler->display->display_options['fields']['field_responsible_actor_1']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor_1']['field'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_responsible_actor_1']['label'] = 'Number of Incidents';
  $handler->display->display_options['fields']['field_responsible_actor_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'bureaucratic_requirement_within_' => 'bureaucratic_requirement_within_',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Restrictons by resposible actor';

  /* Display: XLS Restrictons by resposible actor */
  $handler = $view->new_display('views_data_export', 'XLS Restrictons by resposible actor', 'views_data_export_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'XLS Restrictons by resposible actor';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_%display.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_responsible_actor_target_id']['id'] = 'field_responsible_actor_target_id';
  $handler->display->display_options['relationships']['field_responsible_actor_target_id']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['relationships']['field_responsible_actor_target_id']['field'] = 'field_responsible_actor_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Issuing actor / agency */
  $handler->display->display_options['fields']['field_responsible_actor']['id'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['field'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Issuing actor / agency */
  $handler->display->display_options['fields']['field_responsible_actor_1']['id'] = 'field_responsible_actor_1';
  $handler->display->display_options['fields']['field_responsible_actor_1']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor_1']['field'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_responsible_actor_1']['label'] = 'Number of Incidents';
  $handler->display->display_options['fields']['field_responsible_actor_1']['separator'] = ', ';
  /* Field: Field: Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['relationship'] = 'field_responsible_actor_target_id';
  $handler->display->display_options['fields']['field_organization_type']['label'] = 'Org Type';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'bureaucratic_requirement_within_' => 'bureaucratic_requirement_within_',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date of issunce -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date Between';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'access/restriction_by_resp_actor.xls';
  $handler->display->display_options['displays'] = array(
    'block_6' => 'block_6',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Chart Restrictons by affected organization */
  $handler = $view->new_display('block', 'Chart Restrictons by affected organization', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Restrictons by affected organization';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'visualization';
  $handler->display->display_options['style_options']['type'] = 'bar';
  $handler->display->display_options['style_options']['fields'] = array(
    'field_organization_type' => array(
      'enabled' => 0,
      'sort' => '0',
    ),
    'field_targetted_actor_1' => array(
      'enabled' => 1,
      'sort' => 'DESC',
    ),
  );
  $handler->display->display_options['style_options']['yAxis'] = array(
    'title' => 'Number of incidents',
  );
  $handler->display->display_options['style_options']['xAxis'] = array(
    'labelField' => 'field_organization_type',
    'invert' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_targetted_actor_target_id']['id'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['relationships']['field_targetted_actor_target_id']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['relationships']['field_targetted_actor_target_id']['field'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['relationship'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['fields']['field_organization_type']['label'] = 'Org Type';
  /* Field: Content: Submitted By */
  $handler->display->display_options['fields']['field_targetted_actor_1']['id'] = 'field_targetted_actor_1';
  $handler->display->display_options['fields']['field_targetted_actor_1']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor_1']['field'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_targetted_actor_1']['label'] = 'Number of Incidents';
  $handler->display->display_options['fields']['field_targetted_actor_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'bureaucratic_requirement_within_' => 'bureaucratic_requirement_within_',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Chart Restrictons by affected organization';

  /* Display: Restrictons by affected organization */
  $handler = $view->new_display('block', 'Restrictons by affected organization', 'block_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Restrictons by affected organization';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_targetted_actor' => 'field_targetted_actor',
    'field_targetted_actor_1' => 'field_targetted_actor_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_targetted_actor' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_targetted_actor_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_targetted_actor_target_id']['id'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['relationships']['field_targetted_actor_target_id']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['relationships']['field_targetted_actor_target_id']['field'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Submitted By */
  $handler->display->display_options['fields']['field_targetted_actor']['id'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['field'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['label'] = 'Affected Organizations';
  $handler->display->display_options['fields']['field_targetted_actor']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_targetted_actor']['delta_offset'] = '0';
  /* Field: Content: Submitted By */
  $handler->display->display_options['fields']['field_targetted_actor_1']['id'] = 'field_targetted_actor_1';
  $handler->display->display_options['fields']['field_targetted_actor_1']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor_1']['field'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_targetted_actor_1']['label'] = 'Number of Incidents';
  $handler->display->display_options['fields']['field_targetted_actor_1']['separator'] = ', ';
  /* Field: Field: Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['relationship'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['fields']['field_organization_type']['label'] = 'Org Type';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Submitted By (field_targetted_actor) */
  $handler->display->display_options['sorts']['field_targetted_actor_target_id']['id'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['sorts']['field_targetted_actor_target_id']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['sorts']['field_targetted_actor_target_id']['field'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['sorts']['field_targetted_actor_target_id']['group_type'] = 'count';
  $handler->display->display_options['sorts']['field_targetted_actor_target_id']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'bureaucratic_requirement_within_' => 'bureaucratic_requirement_within_',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Restrictons by affected organization';

  /* Display: XLS Restrictons by affected organization */
  $handler = $view->new_display('views_data_export', 'XLS Restrictons by affected organization', 'restriction_by_aff_aff_org');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'XLS Restrictons by affected organization';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_%display.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Submitted By */
  $handler->display->display_options['fields']['field_targetted_actor']['id'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['field'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['label'] = 'Affected Organizations';
  $handler->display->display_options['fields']['field_targetted_actor']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_targetted_actor']['delta_offset'] = '0';
  /* Field: Content: Submitted By */
  $handler->display->display_options['fields']['field_targetted_actor_1']['id'] = 'field_targetted_actor_1';
  $handler->display->display_options['fields']['field_targetted_actor_1']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor_1']['field'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_targetted_actor_1']['label'] = 'Number of Incidents';
  $handler->display->display_options['fields']['field_targetted_actor_1']['separator'] = ', ';
  /* Field: Field: Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['relationship'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['fields']['field_organization_type']['label'] = 'Organization Type';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Submitted By (field_targetted_actor) */
  $handler->display->display_options['sorts']['field_targetted_actor_target_id']['id'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['sorts']['field_targetted_actor_target_id']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['sorts']['field_targetted_actor_target_id']['field'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['sorts']['field_targetted_actor_target_id']['group_type'] = 'count';
  $handler->display->display_options['sorts']['field_targetted_actor_target_id']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'bureaucratic_requirement_within_' => 'bureaucratic_requirement_within_',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date of issunce -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date Between';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'access/restriction_by_aff_org.xls';
  $handler->display->display_options['displays'] = array(
    'block_8' => 'block_8',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
    'block_6' => 0,
    'block_7' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Chart Restrictons by sectors */
  $handler = $view->new_display('block', 'Chart Restrictons by sectors', 'block_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Restrictons by sectors affected';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'visualization';
  $handler->display->display_options['style_options']['type'] = 'bar';
  $handler->display->display_options['style_options']['fields'] = array(
    'field_clusters' => array(
      'enabled' => 0,
    ),
    'field_clusters_1' => array(
      'enabled' => 1,
      'sort' => 'DESC',
    ),
  );
  $handler->display->display_options['style_options']['yAxis'] = array(
    'title' => 'Number of incidents',
  );
  $handler->display->display_options['style_options']['xAxis'] = array(
    'labelField' => 'field_clusters',
    'invert' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['label'] = 'Sectors/Clusters Affected';
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  /* Field: Field: Clusters */
  $handler->display->display_options['fields']['field_clusters_1']['id'] = 'field_clusters_1';
  $handler->display->display_options['fields']['field_clusters_1']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters_1']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_clusters_1']['label'] = 'Sectors/Clusters Affected';
  $handler->display->display_options['fields']['field_clusters_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'bureaucratic_requirement_within_' => 'bureaucratic_requirement_within_',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Chart Restrictons by sectors affected';

  /* Display: Restrictons by sectors */
  $handler = $view->new_display('block', 'Restrictons by sectors', 'block_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Restrictons by sectors affected';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_sectors' => 'field_sectors',
    'field_sectors_1' => 'field_sectors_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_sectors' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sectors_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['label'] = 'Sectors/Clusters Affected';
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  /* Field: Field: Clusters */
  $handler->display->display_options['fields']['field_clusters_1']['id'] = 'field_clusters_1';
  $handler->display->display_options['fields']['field_clusters_1']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters_1']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_clusters_1']['label'] = 'Number of incidents';
  $handler->display->display_options['fields']['field_clusters_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'bureaucratic_requirement_within_' => 'bureaucratic_requirement_within_',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Restrictons by sectors affected';

  /* Display: XLS Restrictons by sectors */
  $handler = $view->new_display('views_data_export', 'XLS Restrictons by sectors', 'restriction_by_aff_aff_sect');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'XLS Restrictons by sectors affected';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_%display.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['label'] = 'Sectors/Cluster Affected';
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  /* Field: Field: Clusters */
  $handler->display->display_options['fields']['field_clusters_1']['id'] = 'field_clusters_1';
  $handler->display->display_options['fields']['field_clusters_1']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters_1']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_clusters_1']['label'] = 'Number of incidents';
  $handler->display->display_options['fields']['field_clusters_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['path'] = 'access/restriction_by_aff_sect.xls';
  $handler->display->display_options['displays'] = array(
    'block_10' => 'block_10',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
    'block_6' => 0,
    'block_7' => 0,
    'block_8' => 0,
    'block_9' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Number of NOCs by Location and Status */
  $handler = $view->new_display('block', 'Number of NOCs by Location and Status', 'block_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Number of NOCs by Location and Status';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'visualization';
  $handler->display->display_options['style_options']['type'] = 'bar';
  $handler->display->display_options['style_options']['fields'] = array(
    'field_request_status' => array(
      'enabled' => 1,
      'sort' => '0',
    ),
    'field_request_status_1' => array(
      'enabled' => 0,
      'sort' => '0',
    ),
    'field_locations' => array(
      'enabled' => 0,
      'sort' => 'ASC',
    ),
  );
  $handler->display->display_options['style_options']['yAxis'] = array(
    'title' => 'Number of NOCs',
  );
  $handler->display->display_options['style_options']['xAxis'] = array(
    'labelField' => 'field_locations',
    'invert' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_request_status']['id'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['fields']['field_request_status']['field'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_request_status']['label'] = 'Number of incidents';
  $handler->display->display_options['fields']['field_request_status']['separator'] = ', ';
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_request_status_1']['id'] = 'field_request_status_1';
  $handler->display->display_options['fields']['field_request_status_1']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['fields']['field_request_status_1']['field'] = 'field_request_status';
  /* Field: Field: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_locations']['alter']['text'] = '[field_locations] [field_request_status_1]';
  $handler->display->display_options['fields']['field_locations']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_locations']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_locations']['multi_type'] = 'ol';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Location (field_locations) */
  $handler->display->display_options['sorts']['field_locations_tid']['id'] = 'field_locations_tid';
  $handler->display->display_options['sorts']['field_locations_tid']['table'] = 'field_data_field_locations';
  $handler->display->display_options['sorts']['field_locations_tid']['field'] = 'field_locations_tid';
  $handler->display->display_options['block_description'] = 'Restriction Number of access reports by Location and Status';

  /* Display: Number of NOCs by Org Type and Status */
  $handler = $view->new_display('block', 'Number of NOCs by Org Type and Status', 'block_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Number of reports by Org Type and Status';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'visualization';
  $handler->display->display_options['style_options']['type'] = 'bar';
  $handler->display->display_options['style_options']['fields'] = array(
    'field_request_status' => array(
      'enabled' => 0,
      'sort' => '0',
    ),
    'field_organization_type' => array(
      'enabled' => 0,
      'sort' => 'ASC',
    ),
    'field_request_status_1' => array(
      'enabled' => 1,
      'sort' => '0',
    ),
  );
  $handler->display->display_options['style_options']['yAxis'] = array(
    'title' => 'Number of NOCs',
  );
  $handler->display->display_options['style_options']['xAxis'] = array(
    'labelField' => 'field_organization_type',
    'invert' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_targetted_actor_target_id']['id'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['relationships']['field_targetted_actor_target_id']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['relationships']['field_targetted_actor_target_id']['field'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['block_description'] = 'Restriction Number of NOCs by Org Type and Status';

  /* Display: Number of access reports by status */
  $handler = $view->new_display('block', 'Number of access reports by status', 'block_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Number of access reports by status';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'visualization';
  $handler->display->display_options['style_options']['type'] = 'pie';
  $handler->display->display_options['style_options']['fields'] = array(
    'field_request_status' => array(
      'enabled' => 0,
      'sort' => 'ASC',
    ),
    'field_request_status_1' => array(
      'enabled' => 1,
      'sort' => '0',
    ),
  );
  $handler->display->display_options['style_options']['yAxis'] = array(
    'title' => '',
  );
  $handler->display->display_options['style_options']['xAxis'] = array(
    'labelField' => 'field_request_status',
    'invert' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_request_status']['id'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['fields']['field_request_status']['field'] = 'field_request_status';
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_request_status_1']['id'] = 'field_request_status_1';
  $handler->display->display_options['fields']['field_request_status_1']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['fields']['field_request_status_1']['field'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_request_status_1']['label'] = 'Number of NOCs';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['block_description'] = 'Restriction Number of access reports by status';

  /* Display: Number of access reports by sector and status */
  $handler = $view->new_display('block', 'Number of access reports by sector and status', 'block_14');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Number of access reports by sector and status';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_request_status_1']['id'] = 'field_request_status_1';
  $handler->display->display_options['fields']['field_request_status_1']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['fields']['field_request_status_1']['field'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_request_status_1']['label'] = 'Number of NOCs';
  /* Field: Field: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['label'] = 'Sectors';
  $handler->display->display_options['fields']['field_clusters']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_request_status']['id'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['fields']['field_request_status']['field'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_request_status']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_request_status']['alter']['text'] = '[field_clusters] [field_request_status-value]';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['block_description'] = 'Restriction Number of access reports by sector and status';

  /* Display: Average number of days to get an answer */
  $handler = $view->new_display('block', 'Average number of days to get an answer', 'block_15');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Average number of days to get an answer';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_request_status']['id'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['fields']['field_request_status']['field'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['label'] = '';
  $handler->display->display_options['fields']['field_request_status']['element_label_colon'] = FALSE;
  /* Field: Content: How many days did it take to get an answer (positive/negative)? */
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['id'] = 'field_how_many_days_did_it_take_';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['table'] = 'field_data_field_how_many_days_did_it_take_';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['field'] = 'field_how_many_days_did_it_take_';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['label'] = '';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['block_description'] = 'Restriction Average number of days to get an answer';

  /* Display: Min number of days to get an answer */
  $handler = $view->new_display('block', 'Min number of days to get an answer', 'block_16');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Min number of days to get an answer';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_request_status']['id'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['fields']['field_request_status']['field'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['label'] = '';
  $handler->display->display_options['fields']['field_request_status']['element_label_colon'] = FALSE;
  /* Field: Content: How many days did it take to get an answer (positive/negative)? */
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['id'] = 'field_how_many_days_did_it_take_';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['table'] = 'field_data_field_how_many_days_did_it_take_';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['field'] = 'field_how_many_days_did_it_take_';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['group_type'] = 'min';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['label'] = '';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['block_description'] = 'Restriction Min number of days to get an answer';

  /* Display: Max number of days to get an answer */
  $handler = $view->new_display('block', 'Max number of days to get an answer', 'block_17');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Max number of days to get an answer';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_request_status']['id'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['fields']['field_request_status']['field'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['label'] = '';
  $handler->display->display_options['fields']['field_request_status']['element_label_colon'] = FALSE;
  /* Field: Content: How many days did it take to get an answer (positive/negative)? */
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['id'] = 'field_how_many_days_did_it_take_';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['table'] = 'field_data_field_how_many_days_did_it_take_';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['field'] = 'field_how_many_days_did_it_take_';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['group_type'] = 'max';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['label'] = '';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['block_description'] = 'Restriction Max number of days to get an answer';

  /* Display: Number of reports by status of request and location */
  $handler = $view->new_display('block', 'Number of reports by status of request and location', 'block_19');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Number of access reports by status of request per location';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_pivot';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_locations' => 'field_locations',
    'field_request_status' => 'field_request_status',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_locations' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'field_request_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
  );
  $handler->display->display_options['style_options']['pivot_col'] = 'field_request_status';
  $handler->display->display_options['style_options']['pivot_row'] = 'field_locations';
  $handler->display->display_options['style_options']['pivot_mode_multi_values'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['alter']['text'] = '[field_locations] [field_request_status_1]';
  $handler->display->display_options['fields']['field_locations']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_locations']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_locations']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_locations']['multi_type'] = 'ol';
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_request_status']['id'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['fields']['field_request_status']['field'] = 'field_request_status';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Location (field_locations) */
  $handler->display->display_options['sorts']['field_locations_tid']['id'] = 'field_locations_tid';
  $handler->display->display_options['sorts']['field_locations_tid']['table'] = 'field_data_field_locations';
  $handler->display->display_options['sorts']['field_locations_tid']['field'] = 'field_locations_tid';
  $handler->display->display_options['block_description'] = 'Restriction Number of access reports by status of request per location';

  /* Display: Table Number of NOCs by Org Type and Status */
  $handler = $view->new_display('block', 'Table Number of NOCs by Org Type and Status', 'block_20');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Number of access reports by Org Type and Status';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_pivot';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_request_status' => 'field_request_status',
    'field_organization_type' => 'field_organization_type',
    'field_request_status_1' => 'field_request_status_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_request_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'field_organization_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'field_request_status_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
  );
  $handler->display->display_options['style_options']['pivot_col'] = 'field_request_status';
  $handler->display->display_options['style_options']['pivot_row'] = 'field_organization_type';
  $handler->display->display_options['style_options']['pivot_mode_multi_values'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_targetted_actor_target_id']['id'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['relationships']['field_targetted_actor_target_id']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['relationships']['field_targetted_actor_target_id']['field'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_request_status']['id'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['fields']['field_request_status']['field'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['label'] = '';
  $handler->display->display_options['fields']['field_request_status']['element_label_colon'] = FALSE;
  /* Field: Field: Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['relationship'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['fields']['field_organization_type']['label'] = 'Organization Type';
  $handler->display->display_options['fields']['field_organization_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_request_status_1']['id'] = 'field_request_status_1';
  $handler->display->display_options['fields']['field_request_status_1']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['fields']['field_request_status_1']['field'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_request_status_1']['label'] = '';
  $handler->display->display_options['fields']['field_request_status_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['block_description'] = 'Restriction Table Number of access reports by Org Type and Status';

  /* Display: Table Number of access reports by status */
  $handler = $view->new_display('block', 'Table Number of access reports by status', 'block_21');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Number of access reports by status';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_request_status' => 'field_request_status',
    'field_request_status_1' => 'field_request_status_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_request_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_request_status_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_request_status']['id'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['fields']['field_request_status']['field'] = 'field_request_status';
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_request_status_1']['id'] = 'field_request_status_1';
  $handler->display->display_options['fields']['field_request_status_1']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['fields']['field_request_status_1']['field'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_request_status_1']['label'] = 'Number of reports';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['block_description'] = 'Restriction Table Number of access reports by status';

  /* Display: Table Number of access reports by sector and status */
  $handler = $view->new_display('block', 'Table Number of access reports by sector and status', 'block_22');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Number of access reports by sector and status';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_pivot';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_request_status' => 'field_request_status',
    'field_request_status_1' => 'field_request_status_1',
    'field_clusters' => 'field_clusters',
    'field_request_status_2' => 'field_request_status_2',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_request_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'field_request_status_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'field_clusters' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'field_request_status_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
  );
  $handler->display->display_options['style_options']['pivot_col'] = 'field_request_status';
  $handler->display->display_options['style_options']['pivot_row'] = 'field_clusters';
  $handler->display->display_options['style_options']['pivot_mode_multi_values'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_request_status']['id'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['fields']['field_request_status']['field'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['label'] = '';
  $handler->display->display_options['fields']['field_request_status']['alter']['text'] = '[field_clusters] [field_request_status-value]';
  $handler->display->display_options['fields']['field_request_status']['element_label_colon'] = FALSE;
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_request_status_1']['id'] = 'field_request_status_1';
  $handler->display->display_options['fields']['field_request_status_1']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['fields']['field_request_status_1']['field'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_request_status_1']['label'] = '';
  $handler->display->display_options['fields']['field_request_status_1']['element_label_colon'] = FALSE;
  /* Field: Field: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['label'] = 'Sector';
  $handler->display->display_options['fields']['field_clusters']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_clusters']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clusters']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Clusters (field_clusters) */
  $handler->display->display_options['sorts']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['sorts']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['sorts']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['block_description'] = 'Restriction Table Number of access reports by sector and status';

  /* Display: Number of restriction reports per day */
  $handler = $view->new_display('block', 'Number of restriction reports per day', 'block_23');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Number of restriction on movement reports per day';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_request_status' => 'field_request_status',
    'field_organization_type' => 'field_organization_type',
    'field_request_status_1' => 'field_request_status_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_request_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_request_status_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date of issunce */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'access_short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['block_description'] = 'Restriction Number of reports per day';

  /* Display: Chart Number of reports per day */
  $handler = $view->new_display('block', 'Chart Number of reports per day', 'block_24');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Number of reports per day';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'visualization';
  $handler->display->display_options['style_options']['fields'] = array(
    'field_date' => array(
      'enabled' => 0,
      'sort' => '0',
    ),
    'title' => array(
      'enabled' => 1,
      'sort' => '0',
    ),
  );
  $handler->display->display_options['style_options']['yAxis'] = array(
    'title' => '',
  );
  $handler->display->display_options['style_options']['xAxis'] = array(
    'labelField' => 'field_date',
    'invert' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date of issunce */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'access_short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_description'] = 'Restriction Chart Number of reports per day';

  /* Display: XLS Number of restrictions per day */
  $handler = $view->new_display('views_data_export', 'XLS Number of restrictions per day', 'views_data_export_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'XLS Number of restrictions per day';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date of issunce */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'access_short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = 'Number of reports';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date of issunce -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'access/num_res_rep_day.xls';
  $handler->display->display_options['displays'] = array(
    'block_23' => 'block_23',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
    'block_6' => 0,
    'block_7' => 0,
    'block_8' => 0,
    'block_9' => 0,
    'block_10' => 0,
    'block_11' => 0,
    'block_12' => 0,
    'block_13' => 0,
    'block_14' => 0,
    'block_15' => 0,
    'block_16' => 0,
    'block_17' => 0,
    'block_18' => 0,
    'block_19' => 0,
    'block_20' => 0,
    'block_21' => 0,
    'block_22' => 0,
    'block_24' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Action Taken Restriction on movement within the country */
  $handler = $view->new_display('block', 'Action Taken Restriction on movement within the country', 'block_25');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Action Taken Restriction on movement within the country';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_request_status' => 'field_request_status',
    'field_organization_type' => 'field_organization_type',
    'field_request_status_1' => 'field_request_status_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_request_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_request_status_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Action Taken Policy (field_acc_action_taken) */
  $handler->display->display_options['relationships']['field_acc_action_taken_value']['id'] = 'field_acc_action_taken_value';
  $handler->display->display_options['relationships']['field_acc_action_taken_value']['table'] = 'field_data_field_acc_action_taken';
  $handler->display->display_options['relationships']['field_acc_action_taken_value']['field'] = 'field_acc_action_taken_value';
  $handler->display->display_options['relationships']['field_acc_action_taken_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Type of administrative procedure submitted */
  $handler->display->display_options['fields']['field_incident_type_impediment']['id'] = 'field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment']['table'] = 'field_data_field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment']['field'] = 'field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: Action taken date */
  $handler->display->display_options['fields']['field_action_taken_date']['id'] = 'field_action_taken_date';
  $handler->display->display_options['fields']['field_action_taken_date']['table'] = 'field_data_field_action_taken_date';
  $handler->display->display_options['fields']['field_action_taken_date']['field'] = 'field_action_taken_date';
  $handler->display->display_options['fields']['field_action_taken_date']['relationship'] = 'field_acc_action_taken_value';
  /* Field: Field collection item: Action taken type */
  $handler->display->display_options['fields']['field_action_taken_type']['id'] = 'field_action_taken_type';
  $handler->display->display_options['fields']['field_action_taken_type']['table'] = 'field_data_field_action_taken_type';
  $handler->display->display_options['fields']['field_action_taken_type']['field'] = 'field_action_taken_type';
  $handler->display->display_options['fields']['field_action_taken_type']['relationship'] = 'field_acc_action_taken_value';
  $handler->display->display_options['fields']['field_action_taken_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field collection item: Action taken description */
  $handler->display->display_options['fields']['field_action_taken_description']['id'] = 'field_action_taken_description';
  $handler->display->display_options['fields']['field_action_taken_description']['table'] = 'field_data_field_action_taken_description';
  $handler->display->display_options['fields']['field_action_taken_description']['field'] = 'field_action_taken_description';
  $handler->display->display_options['fields']['field_action_taken_description']['relationship'] = 'field_acc_action_taken_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'bureaucratic_requirement_within_' => 'bureaucratic_requirement_within_',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Action taken type (field_action_taken_type) */
  $handler->display->display_options['filters']['field_action_taken_type_tid']['id'] = 'field_action_taken_type_tid';
  $handler->display->display_options['filters']['field_action_taken_type_tid']['table'] = 'field_data_field_action_taken_type';
  $handler->display->display_options['filters']['field_action_taken_type_tid']['field'] = 'field_action_taken_type_tid';
  $handler->display->display_options['filters']['field_action_taken_type_tid']['relationship'] = 'field_acc_action_taken_value';
  $handler->display->display_options['filters']['field_action_taken_type_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_action_taken_type_tid']['value'] = '';
  $handler->display->display_options['filters']['field_action_taken_type_tid']['vocabulary'] = 'acc_action_taken_type';
  $handler->display->display_options['block_description'] = 'Action Taken Restriction on movement within the country';

  /* Display: XLS Action taken Restrictions on movement within country */
  $handler = $view->new_display('views_data_export', 'XLS Action taken Restrictions on movement within country', 'views_data_export_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'XLS Action taken Restrictions on movement within country';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Action Taken Policy (field_acc_action_taken) */
  $handler->display->display_options['relationships']['field_acc_action_taken_value']['id'] = 'field_acc_action_taken_value';
  $handler->display->display_options['relationships']['field_acc_action_taken_value']['table'] = 'field_data_field_acc_action_taken';
  $handler->display->display_options['relationships']['field_acc_action_taken_value']['field'] = 'field_acc_action_taken_value';
  $handler->display->display_options['relationships']['field_acc_action_taken_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Type of administrative procedure submitted */
  $handler->display->display_options['fields']['field_incident_type_impediment']['id'] = 'field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment']['table'] = 'field_data_field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment']['field'] = 'field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: Action taken date */
  $handler->display->display_options['fields']['field_action_taken_date']['id'] = 'field_action_taken_date';
  $handler->display->display_options['fields']['field_action_taken_date']['table'] = 'field_data_field_action_taken_date';
  $handler->display->display_options['fields']['field_action_taken_date']['field'] = 'field_action_taken_date';
  $handler->display->display_options['fields']['field_action_taken_date']['relationship'] = 'field_acc_action_taken_value';
  /* Field: Field collection item: Action taken type */
  $handler->display->display_options['fields']['field_action_taken_type']['id'] = 'field_action_taken_type';
  $handler->display->display_options['fields']['field_action_taken_type']['table'] = 'field_data_field_action_taken_type';
  $handler->display->display_options['fields']['field_action_taken_type']['field'] = 'field_action_taken_type';
  /* Field: Field collection item: Action taken description */
  $handler->display->display_options['fields']['field_action_taken_description']['id'] = 'field_action_taken_description';
  $handler->display->display_options['fields']['field_action_taken_description']['table'] = 'field_data_field_action_taken_description';
  $handler->display->display_options['fields']['field_action_taken_description']['field'] = 'field_action_taken_description';
  $handler->display->display_options['fields']['field_action_taken_description']['relationship'] = 'field_acc_action_taken_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'bureaucratic_requirement_within_' => 'bureaucratic_requirement_within_',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Action taken type (field_action_taken_type) */
  $handler->display->display_options['filters']['field_action_taken_type_tid']['id'] = 'field_action_taken_type_tid';
  $handler->display->display_options['filters']['field_action_taken_type_tid']['table'] = 'field_data_field_action_taken_type';
  $handler->display->display_options['filters']['field_action_taken_type_tid']['field'] = 'field_action_taken_type_tid';
  $handler->display->display_options['filters']['field_action_taken_type_tid']['relationship'] = 'field_acc_action_taken_value';
  $handler->display->display_options['filters']['field_action_taken_type_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_action_taken_type_tid']['value'] = '';
  $handler->display->display_options['filters']['field_action_taken_type_tid']['vocabulary'] = 'acc_action_taken_type';
  $handler->display->display_options['path'] = 'action_taken_restriction.xls';
  $handler->display->display_options['displays'] = array(
    'block_25' => 'block_25',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
    'block_6' => 0,
    'block_7' => 0,
    'block_8' => 0,
    'block_9' => 0,
    'block_10' => 0,
    'block_11' => 0,
    'block_12' => 0,
    'block_13' => 0,
    'block_14' => 0,
    'block_15' => 0,
    'block_16' => 0,
    'block_17' => 0,
    'block_18' => 0,
    'block_19' => 0,
    'block_20' => 0,
    'block_21' => 0,
    'block_22' => 0,
    'block_23' => 0,
    'block_24' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Average days to get an answer by org type */
  $handler = $view->new_display('block', 'Average days to get an answer by org type', 'block_18');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Average number of days to get an answer to the request submitted (by type of organization)';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_pivot';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_request_status' => 'field_request_status',
    'field_organization_type' => 'field_organization_type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_request_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'field_organization_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
  );
  $handler->display->display_options['style_options']['pivot_col'] = 'field_request_status';
  $handler->display->display_options['style_options']['pivot_row'] = 'field_organization_type';
  $handler->display->display_options['style_options']['pivot_mode_multi_values'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_request_status']['id'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['fields']['field_request_status']['field'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['label'] = '';
  $handler->display->display_options['fields']['field_request_status']['element_label_colon'] = FALSE;
  /* Field: Field: Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['relationship'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['fields']['field_organization_type']['label'] = 'Organization Type';
  $handler->display->display_options['fields']['field_organization_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_organization_type']['alter']['text'] = '[field_organization_type] [field_request_status]';
  $handler->display->display_options['fields']['field_organization_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: How many days did it take to get an answer (positive/negative)? */
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['id'] = 'field_how_many_days_did_it_take_';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['table'] = 'field_data_field_how_many_days_did_it_take_';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['field'] = 'field_how_many_days_did_it_take_';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['label'] = '';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['block_description'] = 'Restriction Average number of days to get an answer to the request submitted (by type of organization)';

  /* Display: Average days to answer to the request by sector */
  $handler = $view->new_display('block', 'Average days to answer to the request by sector', 'block_26');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Average number of days to get an answer to the request submitted (by sector)';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_pivot';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_how_many_days_did_it_take_' => 'field_how_many_days_did_it_take_',
    'field_request_status' => 'field_request_status',
    'field_clusters' => 'field_clusters',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_how_many_days_did_it_take_' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'field_request_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
    'field_clusters' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'pivot_row_extra' => 0,
    ),
  );
  $handler->display->display_options['style_options']['pivot_col'] = 'field_request_status';
  $handler->display->display_options['style_options']['pivot_row'] = 'field_clusters';
  $handler->display->display_options['style_options']['pivot_mode_multi_values'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: How many days did it take to get an answer (positive/negative)? */
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['id'] = 'field_how_many_days_did_it_take_';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['table'] = 'field_data_field_how_many_days_did_it_take_';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['field'] = 'field_how_many_days_did_it_take_';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['label'] = '';
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_how_many_days_did_it_take_']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_request_status']['id'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['fields']['field_request_status']['field'] = 'field_request_status';
  /* Field: Field: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  $handler->display->display_options['block_description'] = 'Restriction Average number of days to get an answer to the request submitted (by sector)';
  $translatables['acc_restriction_on_movement_within_the_country'] = array(
    t('Master'),
    t('Restrictions on movement within country'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Taxonomy term entity referenced from field_targetted_actor'),
    t('Org Type'),
    t('[field_organization_type] [field_request_status]'),
    t('All'),
    t('Title'),
    t('Description'),
    t('Date of issunce'),
    t('XLS'),
    t('Below Admin 2 Level (Destination)'),
    t('Geographical Location (Origin)'),
    t('How many days did it take to get an answer (positive/negative)?'),
    t('Resposible Actor'),
    t('Impact'),
    t('Purpose of the administrative request'),
    t('Submission Status'),
    t('Targetted Organization'),
    t('Geographical Location (Destination)'),
    t('Access Constraint'),
    t('Sector(s) affected'),
    t('Chart Restrictons by incident types'),
    t('Restrictions on movement by incident type'),
    t('Number of Incidents'),
    t('Restrictons by incident types'),
    t('Chart Restrictons by location'),
    t('Restrictons by location'),
    t('Location'),
    t('Number of incidents'),
    t('XLS Restrictons by incident types'),
    t('Date Between'),
    t('XLS Chart Restrictons by Location'),
    t('Restrictions on movement by Location'),
    t('Broken handler field_data_field_admin1_2.field_admin1_2'),
    t('Chart Restrictons by resposible actor'),
    t('Restrictons by resposible actor'),
    t('Taxonomy term entity referenced from field_responsible_actor'),
    t('Allegedly responsible actor'),
    t('XLS Restrictons by resposible actor'),
    t('Issuing actor / agency'),
    t('Chart Restrictons by affected organization'),
    t('Restrictons by affected organization'),
    t('Affected Organizations'),
    t('XLS Restrictons by affected organization'),
    t('Organization Type'),
    t('Chart Restrictons by sectors'),
    t('Restrictons by sectors affected'),
    t('Sectors/Clusters Affected'),
    t('Chart Restrictons by sectors affected'),
    t('Restrictons by sectors'),
    t('XLS Restrictons by sectors'),
    t('XLS Restrictons by sectors affected'),
    t('Sectors/Cluster Affected'),
    t('Number of NOCs by Location and Status'),
    t('[field_locations] [field_request_status_1]'),
    t('Restriction Number of access reports by Location and Status'),
    t('Number of NOCs by Org Type and Status'),
    t('Number of reports by Org Type and Status'),
    t('Restriction Number of NOCs by Org Type and Status'),
    t('Number of access reports by status'),
    t('Number of NOCs'),
    t('Restriction Number of access reports by status'),
    t('Number of access reports by sector and status'),
    t('Sectors'),
    t('[field_clusters] [field_request_status-value]'),
    t('Restriction Number of access reports by sector and status'),
    t('Average number of days to get an answer'),
    t('Restriction Average number of days to get an answer'),
    t('Min number of days to get an answer'),
    t('Restriction Min number of days to get an answer'),
    t('Max number of days to get an answer'),
    t('Restriction Max number of days to get an answer'),
    t('Number of reports by status of request and location'),
    t('Number of access reports by status of request per location'),
    t('Restriction Number of access reports by status of request per location'),
    t('Table Number of NOCs by Org Type and Status'),
    t('Number of access reports by Org Type and Status'),
    t('Restriction Table Number of access reports by Org Type and Status'),
    t('Table Number of access reports by status'),
    t('Number of reports'),
    t('Restriction Table Number of access reports by status'),
    t('Table Number of access reports by sector and status'),
    t('Sector'),
    t('Restriction Table Number of access reports by sector and status'),
    t('Number of restriction reports per day'),
    t('Number of restriction on movement reports per day'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Date'),
    t('Restriction Number of reports per day'),
    t('Chart Number of reports per day'),
    t('Number of reports per day'),
    t('Restriction Chart Number of reports per day'),
    t('XLS Number of restrictions per day'),
    t('Action Taken Restriction on movement within the country'),
    t('field collection item from field_acc_action_taken'),
    t('Type of administrative procedure submitted'),
    t('Action taken date'),
    t('Action taken type'),
    t('Action taken description'),
    t('XLS Action taken Restrictions on movement within country'),
    t('Average days to get an answer by org type'),
    t('Average number of days to get an answer to the request submitted (by type of organization)'),
    t('Restriction Average number of days to get an answer to the request submitted (by type of organization)'),
    t('Average days to answer to the request by sector'),
    t('Average number of days to get an answer to the request submitted (by sector)'),
    t('Clusters'),
    t('Restriction Average number of days to get an answer to the request submitted (by sector)'),
  );
  $export['acc_restriction_on_movement_within_the_country'] = $view;

  return $export;
}
