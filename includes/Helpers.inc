<?php

function print_p( $data ) {
	print '<pre>';
	print_r( $data );
	print '</pre>';
}

function get_template_part( $directory, $template, $once = false ) {

	if( $once ) {
		include_once $directory . '/' . $template . '.tpl.php';
	} else {
		include $directory . '/' . $template . '.tpl.php';
	}
}