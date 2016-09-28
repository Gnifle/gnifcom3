$( document ).ready( function() {

	/**
	 * Add Parallax effect to header
	 */
	$( '#header' ).parallax({
		imageSrc:   'img/layout/header-background.jpg'
	});

	/**
	 * Add handler for menu toggle
	 */
	$( '.menu .toggle' ).on( 'click', function() {
		$(this).toggleClass( 'active' );
	});

	/**
	 * Make every submenu 3 px wider than initially to make room for
	 * border-right transition effect.
	 */
	$( '.sub-container' ).each( function() {
		$(this).css( 'width', ( $(this).width() + 3 ) + 'px' );
	});

});