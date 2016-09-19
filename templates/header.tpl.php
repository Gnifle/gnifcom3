<header id="header" role="header">

	<?php get_template_part( 'templates', 'menu' ); ?>
	
	<?php if( is_frontpage() ) {
		
		get_template_part( 'templates/partials', 'frontpage-greeting' );
		
	} ?>

</header>