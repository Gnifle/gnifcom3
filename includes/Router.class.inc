<?php

/**
 * @link https://raw.githubusercontent.com/brandonwamboldt/simple-php-router/master/router.lib.php
 */
include 'lib/router.lib.php';

class Router {

	private $router;
	private $view;

	public function __construct() {
		$this->view     =   new stdClass();

		$this->router   =   new Igniter\Router;

		$this->router->route( '', array( $this, 'frontpage' ) );
		
		$this->router->route( '/about', array( $this, 'about' ) );

		$this->router->default_route( array( $this, 'show_404' ) );

		$this->router->execute();
	}

	public function frontpage( $params ) {
		$this->view->template       =   'frontpage';
		$this->view->args           =   $params;
		$this->view->title          =   'Portfolio';
		$this->view->is_frontpage   =   true;
	}

	public function about( $params ) {
		$this->view->template       =   'about';
		$this->view->args           =   $params;
		$this->view->title          =   'About';
	}

	public function show_404( $params ) {
		$this->view->template       =   '404';
		$this->view->args           =   $params;
		$this->view->title          =   'Sorry, this page was not found :(';
		$this->view->prefix_title   =   0;
	}

	public function get_view() {
		return $this->view;
	}

}