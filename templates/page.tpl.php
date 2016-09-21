<?php

global $view;

?>

<div id="page">

	<?php get_template_part( 'templates', 'header', true ); ?>

	<div id="content">
	
		<?php get_template_part( 'templates', $view->template ); ?>
	
	</div>

	<?php get_template_part( 'templates', 'footer', true ); ?>

</div>