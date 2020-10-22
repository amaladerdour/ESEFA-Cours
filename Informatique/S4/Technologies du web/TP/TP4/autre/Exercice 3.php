<!DOCTYPE html>
<html>
<?php
$nbre=6;
echo "La premiere question: <br/>";
for ($i=1; $i <= $nbre; $i++) { 
	echo ("$i .<br/>");
}
echo "<br/> La deuxieme question : <br/>";
$i=0;
do {	
	$résultat=8*$i; 
	echo ("8 x $i = $résultat <br/>");
	$i++;
}while( $i<= 10);
?>
</html>