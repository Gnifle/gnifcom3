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

function is_frontpage() {
	
	global $view;
	
	if( property_exists( $view, 'is_frontpage' ) && $view->is_frontpage ) {
		return true;
	}
	return false;
	
}

function is_localhost() {
	
	$whitelist  =   array( '127.0.0.1', '::1' );
	
	return in_array( $_SERVER['REMOTE_ADDR'], $whitelist );
	
}