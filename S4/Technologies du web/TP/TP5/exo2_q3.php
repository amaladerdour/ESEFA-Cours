<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <meta charset="utf-8">
    <title>exercice 2 - question 3</title>
  </head>
  <body>
    <!-- Question 3 -->
    <form action="exo2_q3.php" method="POST">
      <table>
        <tr>
          <td>Nom</td>
          <td><input type="text" name="nom"> </td>
        </tr>
        <tr>
          <td>Prénom</td>
          <td><input type="text" name="prenom"> </td>
        </tr>
        <tr>
          <td>Age</td>
          <td><select name="age">
            <?php for ($i=15; $i < 60; $i++) {
              print "<option value='$i'>$i</option>";
            } ?>
          </select> </td>
        </tr>
        <tr>
          <td>Sexe</td>
          <td>
            <input type="radio" name="sexe" value="masculin"> Masculin
            <input type="radio" name="sexe" value="feminin"> Feminin
          </td>
        </tr>
        <tr>
          <td>Email</td>
          <td><input type="email" name="email"> </td>
        </tr>
        <tr>
          <td>Tel</td>
          <td><input type="number" name="tel"> </td>
        </tr>
        <tr>
          <td>Adresse</td>
          <td><textarea name="adresse"> </textarea> </td>
        </tr>
      </table>
      <input type="submit" value="Envoyer">
    </form>
    <hr>
    <?php

    if (isset($_POST['nom']) && isset($_POST['prenom']) && isset($_POST['age']) && isset($_POST['sexe']) &&
    isset($_POST['email']) && isset($_POST['tel']) && isset($_POST['adresse'])) {

      $nom = $_POST['nom'];
      $prenom = $_POST['prenom'];
      $age = $_POST['age'];
      $sexe = $_POST['sexe'];
      $email = $_POST['email'];
      $tel = $_POST['tel'];
      $adresse = $_POST['adresse'];

      print "Nom:   $nom<br>";
      print "Prenom:   $prenom<br>";
      print "Age:   $age<br>";
      print "Sexe:   $sexe<br>";
      print "Email:   $email<br>";
      print "Tel:   $tel<br>";
      print "Adresse:   $adresse";

    }

     ?>
  </body>
</html>
