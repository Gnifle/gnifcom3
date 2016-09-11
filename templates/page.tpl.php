<?php

global $view;

?>

<div id="page">

	<?php get_template_part( 'templates', 'header', true ); ?>

	<?php get_template_part( 'templates', $view->template ); ?>

	<?php get_template_part( 'templates', 'footer', true ); ?>

</div>