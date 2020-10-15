<?php
$nbr=5;
$somme= 0;
for($i=0;$i<=5;$i++){
   $somme+= $i;}
echo $somme."<br>";
#----------------
for($i=1;$i<=10 ;$i++){
	$mul= $i*8;
	echo "8 *".$i."= ".$mul."<br>";
}
#-------exercice 4--------
$tab= array("Ayoub","Hasna","Karim","Morad","Asmaa");

for($i=0;$i<count($tab) ;$i++){
	echo $tab[$i]."<br>";
}
	
?>