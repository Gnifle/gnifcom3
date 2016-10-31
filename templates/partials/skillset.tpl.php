<?php

$skillset                   =   get_skills();
$default_expanded_skill     =   RAND( 0, count( $skillset ) - 1 );
p( $default_expanded_skill );

?>

<?php if( $skillset ) : ?>

	<div class="skill-view">
		
		<div class="skill-active-view">
			Active
		</div>
		
		<div class="skill-container">
	
			<?php foreach ( $skillset as $skill ) : ?>
			
			<div class="skill">
				
				<h3><?php print $skill['title']; ?></h3>
				
			</div>
			
			<?php endforeach; ?>
			
		</div>
		
	</div>

<?php endif; ?>