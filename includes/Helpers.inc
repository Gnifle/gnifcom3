<?php

function print_p( $data ) {
	print '<pre>';
	print_r( $data );
	print '</pre>';
}
function p( $data ) { print_p( $data ); }

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

function get_skills() {
	
	$skillset   =   array(
		
		'html'  =>  array(
			'title'         =>  'HTML/HTML5',
			'slug'          =>  'HTML',
			'categories'    =>  array(
				'Webdesign',
				'Web Developement',
			),
		),
		
		'css'   =>  array(
			'title'         =>  'CSS/CSS3',
			'slug'          =>  'CSS',
			'categories'    =>  array(
				'Webdesign',
				'Web Developement',
			),
		),
		
		'js'    =>  array(
			'title'         =>  'Javascript',
			'slug'          =>  'JS',
			'categories'    =>  array(
				'Webdesign',
				'Web Developement',
			),
		),
		
		'php'    =>  array(
			'title'         =>  'PHP',
			'slug'          =>  'PHP',
			'categories'    =>  array(
				'Web Developement',
				'Programming',
			),
		),
		
		'python'    =>  array(
			'title'         =>  'Python',
			'slug'          =>  'Python',
			'categories'    =>  array(
				'Programming',
				'Scripting',
			),
		),
		
		'wordpress'     =>  array(
			'title'         =>  'WordPress',
			'slug'          =>  'WP',
			'categories'    =>  array(
				'Webdesign',
				'Web Developement',
				'CMS',
			),
		),
		
		'mysql'     =>  array(
			'title'         =>  'MySQL',
			'slug'          =>  'MySQL',
			'categories'    =>  array(
				'Programming',
				'Database',
			),
		),
		
	);
	
	return $skillset;
	
}