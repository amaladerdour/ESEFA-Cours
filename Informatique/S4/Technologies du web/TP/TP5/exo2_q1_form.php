<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <meta charset="utf-8">
    <title>exercice 2</title>
  </head>
  <body>
    <!-- Question 1 -->
    <form action="exo2_q1.php" method="GET">
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
  </body>
</html>
