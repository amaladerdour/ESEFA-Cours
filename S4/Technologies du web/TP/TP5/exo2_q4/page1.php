<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <meta charset="utf-8">
    <title></title>
  </head>
  <body>
    <?php if (isset($_POST['nom']) && isset($_POST['prenom']) && isset($_POST['age']) &&
    isset($_POST['sexe']) && isset($_POST['email']) && isset($_POST['tel']) && isset($_POST['adresse'])) {
      $nom = $_POST['nom'];
      $prenom = $_POST['prenom'];
      $age = $_POST['age'];
      $sexe = $_POST['sexe'];
      $email = $_POST['email'];
      $tel = $_POST['tel'];
      $adresse = $_POST['adresse'];
    }?>
    <form action="page2.php" method="post">
      <input type="text" name="nom" value="<?php print $nom; ?>" hidden>
      <input type="text" name="prenom" value="<?php echo $prenom; ?>" hidden>
      <input type="number" name="age" value="<?php echo $age; ?>" hidden>
      <input type="text" name="sexe" value="<?php echo $sexe; ?>" hidden>
      <input type="submit" value="Votre état civil">
    </form>
    <br>
    <form action="page3.php" method="post">
      <input type="email" name="email" value="<?php echo $email; ?>" hidden>
      <input type="text" name="tel" value="<?php echo $tel; ?>" hidden>
      <input type="text" name="adresse" value="<?php echo $adresse; ?>" hidden>
      <input type="submit" value="Vos coordonnées">
    </form>
  </body>
</html>
