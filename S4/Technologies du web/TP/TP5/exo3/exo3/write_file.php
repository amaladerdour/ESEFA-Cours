<?php

  $file = fopen('resultats.txt', 'a');

  if (isset($_POST["nom"]) && isset($_POST["age"]) && isset($_POST["mail"]) && isset($_POST["don"])) {
    $nom = $_POST["nom"];
    $age = $_POST["age"];
    $mail = $_POST["mail"];
    $don = $_POST["don"];

    $line = $nom."|".$age."|".$mail."|".$don."\n";

    if(fwrite($file, $line) != false){
        print "Votre information sont bien enregistrer.<br>";
        print "<a href='formulaire.php'>Cliquer ici</a> pour ajouter d'autres information.<br>";
    }
  }

  fclose($file);

 ?>
