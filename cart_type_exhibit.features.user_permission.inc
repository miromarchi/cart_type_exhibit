<?php
/**
 * @file
 * cart_type_exhibit.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cart_type_exhibit_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create cart_exhibition content'.
  $permissions['create cart_exhibition content'] = array(
    'name' => 'create cart_exhibition content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any cart_exhibition content'.
  $permissions['delete any cart_exhibition content'] = array(
    'name' => 'delete any cart_exhibition content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own cart_exhibition content'.
  $permissions['delete own cart_exhibition content'] = array(
    'name' => 'delete own cart_exhibition content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any cart_exhibition content'.
  $permissions['edit any cart_exhibition content'] = array(
    'name' => 'edit any cart_exhibition content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own cart_exhibition content'.
  $permissions['edit own cart_exhibition content'] = array(
    'name' => 'edit own cart_exhibition content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
