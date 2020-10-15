<?php if(isset($_POST['email']) && isset($_POST['tel']) && isset($_POST['adresse'])) {
  $email = $_POST['email'];
  $tel = $_POST['tel'];
  $adresse = $_POST['adresse'];

  print "Email: $email<br>";
  print "Tel: $tel<br>";
  print "Adresse: $adresse<br>";
}?>
