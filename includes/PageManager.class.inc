<?php

class PageManager {

	public static function Build() {

		global $view;

		?>

		<body class="<?php print $view->template; ?>">

			<?php get_template_part( 'templates', 'page' ); ?>

		</body>

		<?php

	}

	public static function Title() {

		global $view;

		$page_title =   '';

		if( !isset( $view->prefix_title ) ) {

			$page_title .= PAGE_PREFIX;

		} elseif( $view->prefix_title != 0 ) {

			$page_title .= PAGE_PREFIX;

		}

		$page_title .=  $view->title;

		return $page_title;

	}
	
}