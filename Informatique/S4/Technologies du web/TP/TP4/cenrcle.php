<?php
   $R=4;
   define("pi", 3.14);
   $solution= $R * $R * pi ;
   echo $solution ."<br>";
   #---------------------------------
   $nom = "AMAL";
   echo " $nom";
   $naissance= "2000";
   echo "Bonjour ".$nom."vous avez ".(2020-$naissance)."<br>";
   #-----Exercice 2 -------------
   $prix_table=150;
   $prix_armoire=50;
   $nombre=10;
   $prix= $nombre * $prix_armoire;
   echo "le prix: ".$prix."<br>";

   if($prix_armoire > $prix_table){
     echo"prix armoire est elvee <br>";
   }elseif($prix_table == $prix_armoire){
     echo "les deux prix sont egaux";
   }else
   echo "le prix table est le plus eleve";

 ?>