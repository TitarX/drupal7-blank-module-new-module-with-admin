<?php

function new_module_with_admin_access_by_role($access_roles) {
  global $user;

  foreach ($access_roles as $access_role) {
    if (in_array($access_role, $user->roles)) {
      return TRUE;
      break;
    }
  }

  return FALSE;
}
