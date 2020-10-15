<?php

if (isset($_GET['nom']) && isset($_GET['prenom']) && isset($_GET['age']) && isset($_GET['sexe']) &&
isset($_GET['email']) && isset($_GET['tel']) && isset($_GET['adresse'])) {

  $nom = $_GET['nom'];
  $prenom = $_GET['prenom'];
  $age = $_GET['age'];
  $sexe = $_GET['sexe'];
  $email = $_GET['email'];
  $tel = $_GET['tel'];
  $adresse = $_GET['adresse'];

  print "Nom:   $nom<br>";
  print "Prenom:   $prenom<br>";
  print "Age:   $age<br>";
  print "Sexe:   $sexe<br>";
  print "Email:   $email<br>";
  print "Tel:   $tel<br>";
  print "Adresse:   $adresse";

}

 ?>
