<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function dynamic_backgrounds_contribute_user_default_permissions() {
  $permissions = array();

  // Exported permission: override dynamic_backgrounds_contribute promote to front page option
  $permissions['override dynamic_backgrounds_contribute promote to front page option'] = array(
    'name' => 'override dynamic_backgrounds_contribute promote to front page option',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: override dynamic_backgrounds_contribute published option
  $permissions['override dynamic_backgrounds_contribute published option'] = array(
    'name' => 'override dynamic_backgrounds_contribute published option',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  return $permissions;
}
