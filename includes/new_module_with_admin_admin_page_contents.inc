<?php

function new_module_with_admin_admin_page_contents() {
  $new_module_with_admin_admin_markup = '';
  $new_module_with_admin_admin_markup .= '<p>';
  $new_module_with_admin_admin_markup .= 'Прямые онлайн видеотрансляции на шахматные темы.';
  $new_module_with_admin_admin_markup .= '</p>';

  $output['new_module_with_admin_admin_markup'] = [
    '#type' => 'markup',
    '#markup' => $new_module_with_admin_admin_markup,
  ];

  return $output;
}
