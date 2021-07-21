<?php

function new_module_with_admin_streams_page_contents() {
  $new_module_with_admin_streams_markup = '';
  $new_module_with_admin_streams_markup .= '<p>';
  $new_module_with_admin_streams_markup .= 'Прямые онлайн видеотрансляции на шахматные темы.';
  $new_module_with_admin_streams_markup .= '</p>';

  $output['new_module_with_admin_streams_markup'] = [
    '#type' => 'markup',
    '#markup' => $new_module_with_admin_streams_markup,
  ];

  return $output;
}
