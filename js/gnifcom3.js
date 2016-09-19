$( document ).ready( function() {

	$( '#header' ).parallax({
		imageSrc:   'img/layout/header-background.jpg'
	});
	
	$( '.menu .toggle' ).on( 'click', function() {
		$(this).toggleClass( 'active' );
	});

});