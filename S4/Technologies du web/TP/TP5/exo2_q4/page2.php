<?php if (isset($_POST['nom']) && isset($_POST['prenom']) && isset($_POST['age']) &&isset($_POST['sexe'])) {

  $nom = $_POST['nom'];
  $prenom = $_POST['prenom'];
  $age = $_POST['age'];
  $sexe = $_POST['sexe'];

  print "Nom: $nom<br>";
  print "Prenom: $prenom<br>";
  print "Age: $age<br>";
  print "Sexe: $sexe<br>";

}?>
