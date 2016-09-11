<?php

final class DBManager {

	private static $instance;
	private $_connection;

	private $whitelist  =   array( '127.0.0.1', '::1' );
	private $_host      =   'gnifle.com.mysql';
	private $_username  =   'gnifle_com';
	private $_password  =   'qm9GjJbp';
	private $_db_name   =   'gnifle_com';

	public static function Instance() {

		if( self::$instance === null ) {
			self::$instance     =   new self();
		}
		return self::$instance;

	}

	private function __construct() {

		$is_local     =   in_array( $_SERVER['REMOTE_ADDR'], $this->whitelist );

		if( $is_local ) {
			$this->_host        =   'localhost';
			$this->_username    =   'root';
			$this->_password    =   '';
			$this->_db_name     =   'gnifle_com';
		}

		$this->_connection  =   new mysqli( $this->_host, $this->_username, $this->_password, $this->_db_name );

		if( mysqli_connect_error() ) {
			trigger_error( 'Failed to connect to MySQL: ' . mysqli_connect_error(), E_USER_ERROR );
		}

	}

	public function __wakeup() {
		throw new Exception("Cannot unserialize singleton");
	}

	private function __clone() {}

	public function get_connection() {
		return $this->_connection;
	}

}