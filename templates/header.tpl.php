<header id="header" role="header">

	<div class="menuline">

		<?php get_template_part( 'templates/partials', 'header-logo' ); ?>

		<?php get_template_part( 'templates', 'menu' ); ?>

	</div>
	
	<?php if( is_frontpage() ) {
		
		get_template_part( 'templates/partials', 'frontpage-greeting' );
		
	} ?>

</header>