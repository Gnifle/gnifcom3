<?php

include 'dir.php';
include 'includes/Helpers.inc';
include 'includes/PageManager.class.inc';
include 'includes/DBManager.class.inc';
include 'includes/Router.class.inc';

define( 'PAGE_PREFIX', 'Daniel Gnifle | ' );

$router         =   new Router();
$view           =   $router->get_view();
$db_manager     =   DBManager::Instance();
$db             =   $db_manager->get_connection();

//$sql    =   <<<SQL
//	SELECT *
//	FROM `test`
//SQL;
//
//
//if(!$result = $db->query($sql)){
//	die('There was an error running the query [' . $db->error . ']');
//}
//
//print 'Num: ' . $result->num_rows;

?>

<!DOCTYPE html>
<html lang="en">
	<head>
		<title><?php print PageManager::Title(); ?></title>
		<base href="/gnifcom3/">
		<?php include 'templates/head.tpl.php'; ?>
	</head>

	<?php PageManager::Build(); ?>

</html>