<?php
/**
 * @file
 * cart_type_exhibit.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cart_type_exhibit_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cart_links|node|cart_exhibition|form';
  $field_group->group_name = 'group_cart_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cart_exhibition';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabsgroup';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '22',
    'children' => array(
      0 => 'field_cart_links_web',
      1 => 'field_cart_facebook_link',
      2 => 'field_cart_twitter_link',
      3 => 'field_cart_google_link',
      4 => 'field_cart_flickr_link',
      5 => 'field_cart_instagram_link',
      6 => 'field_cart_youtube_link',
      7 => 'field_cart_blog_link',
      8 => 'field_cart_rss_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cart-links field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_cart_links|node|cart_exhibition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cart_what|node|cart_exhibition|default';
  $field_group->group_name = 'group_cart_what';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cart_exhibition';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'What',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_cart_exhibit_type',
      2 => 'field_cart_main_exhibit',
      3 => 'field_cart_media_types',
      4 => 'field_cart_catalog',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'What',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'what',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_cart_what|node|cart_exhibition|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cart_what|node|cart_exhibition|form';
  $field_group->group_name = 'group_cart_what';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cart_exhibition';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabsgroup';
  $field_group->data = array(
    'label' => 'What',
    'weight' => '21',
    'children' => array(
      0 => 'body',
      1 => 'field_cart_exhibit_type',
      2 => 'field_cart_main_exhibit',
      3 => 'field_cart_media_types',
      4 => 'field_cart_catalog',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cart-what field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_cart_what|node|cart_exhibition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cart_when|node|cart_exhibition|default';
  $field_group->group_name = 'group_cart_when';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cart_exhibition';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'When',
    'weight' => '0',
    'children' => array(
      0 => 'field_cart_date',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'When',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'when',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_cart_when|node|cart_exhibition|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cart_when|node|cart_exhibition|form';
  $field_group->group_name = 'group_cart_when';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cart_exhibition';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabsgroup';
  $field_group->data = array(
    'label' => 'When',
    'weight' => '18',
    'children' => array(
      0 => 'field_cart_date',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cart-when field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_cart_when|node|cart_exhibition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cart_where|node|cart_exhibition|default';
  $field_group->group_name = 'group_cart_where';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cart_exhibition';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Where',
    'weight' => '1',
    'children' => array(
      0 => 'field_cart_venue',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Where',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'where',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_cart_where|node|cart_exhibition|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cart_where|node|cart_exhibition|form';
  $field_group->group_name = 'group_cart_where';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cart_exhibition';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabsgroup';
  $field_group->data = array(
    'label' => 'Where',
    'weight' => '19',
    'children' => array(
      0 => 'field_cart_venue',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cart-where field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_cart_where|node|cart_exhibition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cart_who|node|cart_exhibition|default';
  $field_group->group_name = 'group_cart_who';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cart_exhibition';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Who',
    'weight' => '2',
    'children' => array(
      0 => 'field_cart_artist',
      1 => 'field_cart_curator',
      2 => 'field_cart_sponsor',
      3 => 'field_cart_organizator',
      4 => 'field_cart_artist_other',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Who',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'who',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_cart_who|node|cart_exhibition|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cart_who|node|cart_exhibition|form';
  $field_group->group_name = 'group_cart_who';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cart_exhibition';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabsgroup';
  $field_group->data = array(
    'label' => 'Who',
    'weight' => '20',
    'children' => array(
      0 => 'field_cart_artist',
      1 => 'field_cart_curator',
      2 => 'field_cart_sponsor',
      3 => 'field_cart_organizator',
      4 => 'field_cart_artist_other',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cart-who field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_cart_who|node|cart_exhibition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabsgroup|node|cart_exhibition|form';
  $field_group->group_name = 'group_tabsgroup';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cart_exhibition';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs group',
    'weight' => '4',
    'children' => array(
      0 => 'group_cart_who',
      1 => 'group_cart_what',
      2 => 'group_cart_where',
      3 => 'group_cart_when',
      4 => 'group_cart_links',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-tabsgroup field-group-tabs',
      ),
    ),
  );
  $export['group_tabsgroup|node|cart_exhibition|form'] = $field_group;

  return $export;
}
