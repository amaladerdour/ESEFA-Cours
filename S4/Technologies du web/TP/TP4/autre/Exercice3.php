<?php
	$prix_table=150;
	$prix_armoire=50;
	$nombre=10;
	$prix_HT_total_armoire=$prix_armoire*$nombre;
	echo "Le prix HT total des 10 armoires est : $prix_HT_total_armoire <br/>";
	if ($prix_armoire<$prix_table) {
		echo "Le prix eleve est : $prix_table";}
	elseif ($prix_armoire>$prix_table) {
		echo "Le prix eleve est : $prix_armoire";}
	elseif ($prix_armoire=$prix_table) {
		echo "Les deux prix sont égales";}
?>