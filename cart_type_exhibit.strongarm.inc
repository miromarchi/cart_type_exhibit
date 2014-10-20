<?php
/**
 * @file
 * cart_type_exhibit.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cart_type_exhibit_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_cart_exhibition';
  $strongarm->value = 0;
  $export['comment_anonymous_cart_exhibition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_cart_exhibition';
  $strongarm->value = '1';
  $export['comment_cart_exhibition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_cart_exhibition';
  $strongarm->value = 1;
  $export['comment_default_mode_cart_exhibition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_cart_exhibition';
  $strongarm->value = '50';
  $export['comment_default_per_page_cart_exhibition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_cart_exhibition';
  $strongarm->value = 1;
  $export['comment_form_location_cart_exhibition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_cart_exhibition';
  $strongarm->value = '1';
  $export['comment_preview_cart_exhibition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_cart_exhibition';
  $strongarm->value = 1;
  $export['comment_subject_field_cart_exhibition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_complete_cart_exhibition';
  $strongarm->value = '1';
  $export['content_complete_cart_exhibition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_complete_fields_cart_exhibition';
  $strongarm->value = array(
    0 => 'title',
    1 => 'body',
    2 => 'field_cart_artist',
    3 => 'field_cart_curator',
    4 => 'field_cart_date',
    5 => 'field_cart_exhibit_type',
    6 => 'field_cart_image',
    7 => 'field_cart_media_types',
    8 => 'field_cart_venue',
  );
  $export['content_complete_fields_cart_exhibition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__cart_exhibition';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'cart_vmode_minimal' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'cart_vmode_curator' => array(
        'custom_settings' => FALSE,
      ),
      'cart_vmode_sponsor' => array(
        'custom_settings' => FALSE,
      ),
      'cart_vmode_publisher' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'feeds' => array(
          'weight' => '6',
        ),
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__cart_exhibition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_cart_exhibition';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_cart_exhibition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_cart_exhibition';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_cart_exhibition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_cart_exhibition';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
    2 => 'revision',
  );
  $export['node_options_cart_exhibition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_cart_exhibition';
  $strongarm->value = '1';
  $export['node_preview_cart_exhibition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_cart_exhibition';
  $strongarm->value = 0;
  $export['node_submitted_cart_exhibition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_cart_exhibition';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'cart_vmode_minimal' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_cart_exhibition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:cart_exhibition_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:30:"panelizer_node:cart_exhibition";s:23:"allowed_layout_settings";a:9:{s:8:"flexible";b:1;s:25:"threecol_33_34_33_stacked";b:1;s:14:"twocol_stacked";b:1;s:6:"onecol";b:1;s:25:"threecol_25_50_25_stacked";b:1;s:17:"threecol_33_34_33";b:1;s:17:"threecol_25_50_25";b:1;s:13:"twocol_bricks";b:1;s:6:"twocol";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:cart_exhibition_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:cart_exhibition_allowed_layouts_default';
  $strongarm->value = 1;
  $export['panelizer_node:cart_exhibition_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:cart_exhibition_allowed_types_default';
  $strongarm->value = 1;
  $export['panelizer_node:cart_exhibition_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:cart_exhibition_default';
  $strongarm->value = array(
    'entity_form_field' => 'entity_form_field',
    'entity_field_extra' => 'entity_field_extra',
    'entity_field' => 'entity_field',
    'token' => 'token',
    'block' => 'block',
    'custom' => 'custom',
    'entity_view' => 'entity_view',
    'flag_link' => 'flag_link',
    'views' => 'views',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panelizer_node:cart_exhibition_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_cart_exhibition_pattern';
  $strongarm->value = 'exhibitions/[node:title]';
  $export['pathauto_node_cart_exhibition_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_cart_exhibition';
  $strongarm->value = array();
  $export['simplify_nodes_cart_exhibition'] = $strongarm;

  return $export;
}
