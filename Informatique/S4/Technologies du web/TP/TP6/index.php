<?php require("tp6_fonctions.php"); ?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Site Web pour TP N°6</title>
</head>
<body>
    <h1>Site Web pour TP N°6</h1>
<div>
    <div id="id_div">
            <h2>Ajouter un client:</h2>
            <form action="index.php" method='post' id="form">
                <table>
                    <tr>
                        <td>ID</td>
                        <td><input type="number" name="id_client"></td>
                    </tr>
                    <tr>
                        <td>Nom</td>
                        <td><input type="text" name="nom_client"> </td>
                    </tr>
                    <tr>
                        <td>Prénom</td>
                        <td><input type="text" name="prenom_client"> </td>
                    </tr>
                    <tr>
                        <td>Ville</td>
                        <td><input type="text" name="ville_client"> </td>
                    </tr>
                    <tr>
                        <td><input type="submit" value="Ajouter"> </td>
                        <td><input type="reset" value="Vider les champs"></td>
                    </tr>
                </table>
            </form>
        
        <?php if(isset($_POST['id_client']) && isset($_POST['nom_client']) &&
        isset($_POST['prenom_client']) && isset($_POST['ville_client'])){
            $id_client = $_POST["id_client"];
            $nom = $_POST["nom_client"];
            $prenom = $_POST["prenom_client"];
            $ville = $_POST["ville_client"];
            ajout_client($id_client, $nom, $prenom, $ville);
        } ?>
        <hr>

        <h2>Supprimer un client</h2>
        <form action="index.php" method="get">
            ID: <input type="number" name="id_client" required>&nbsp;
            <input type="submit" value="Supprimer">
        </form>
        <?php if(isset($_GET["id_client"])){
            suppr_client($_GET["id_client"]);
        } ?>
        <hr>
        <div class="affiche">
        <?php affiche_noms_clients(); ?>
        </div>
    </div>
    <div id="id_div">
    <h2>Ajouter un produit:</h2>
    <form action="index.php" method='post' id="form">
        <table>
            <tr>
                <td>ID</td>
                <td><input type="number" name="id_produit"></td>
            </tr>
            <tr>
                <td>Nom</td>
                <td><input type="text" name="nom_produit"></td>
            </tr>
            <tr>
                <td>Prix</td>
                <td><input type="number" name="prix_produit"> </td>
            </tr>
            <tr>
                <td>Quantite</td>
                <td><input type="number" name="quantite_produit"> </td>
            </tr>
            <tr>
                <td><input type="submit" value="Ajouter"> </td>
                <td><input type="reset" value="Vider les champs"></td>
            </tr>
        </table>
    </form>
    <?php if(isset($_POST['id_produit']) && isset($_POST['nom_produit']) &&
    isset($_POST['prix_produit']) && isset($_POST['quantite_produit'])){
        $id_produit = $_POST["id_produit"];
        $nom = $_POST["nom_produit"];
        $prix = $_POST["prix_produit"];
        $quantite = $_POST["quantite_produit"];
        ajout_produit($id_produit, $nom, $prix, $quantite);
    } ?>
    <hr>

    <h2>Supprimer un produit</h2>
    <form action="index.php" method="get">
        ID: <input type="number" name="id_produit" required>&nbsp;
        <input type="submit" value="Supprimer">
    </form>
    <?php if(isset($_GET["id_produit"])){
        suppr_produit($_GET["id_produit"]);
    } ?>
    <hr>
    <div class="affiche">
    <?php affiche_produits(); ?> 
</div>
    </div>
    <div id="id_div">
        <h2>Ajouter une commande:</h2>
    <form action="index.php" method='post' id="form">
        <table>
            <tr>
                <td>ID</td>
                <td><input type="number" name="id_commande"></td>
            </tr>
            <tr>
                <td>ID produit</td>
                <td><input type="text" name="id_produitC"> </td>
            </tr>
            <tr>
                <td>ID clinet</td>
                <td><input type="text" name="id_clientC"> </td>
            </tr>
            <tr>
                <td>Quantite</td>
                <td><input type="text" name="quantite_commande"> </td>
            </tr>
            <tr>
                <td><input type="submit" value="Ajouter"> </td>
                <td><input type="reset" value="Vider les champs"></td>
            </tr>
        </table>
    </form>
    <?php if(isset($_POST['id_commande']) && isset($_POST['id_produitC']) &&
    isset($_POST['id_clientC']) && isset($_POST['quantite_commande'])){
        $id_commande = $_POST["id_commande"];
        $id_produit = $_POST["id_produitC"];
        $id_client = $_POST["id_clientC"];
        $quantite = $_POST["quantite_commande"];
        ajout_commande($id_commande, $id_produit, $id_client, $quantite);
    } ?>
    <hr>

    <h2>Supprimer une commande</h2>
    <form action="index.php" method="get">
        ID: <input type="number" name="id_commande" required>&nbsp;
        <input type="submit" value="Supprimer">
    </form>
    <?php if(isset($_GET["id_commande"])){
        suppr_commande($_GET["id_commande"]);
    } ?>
    <hr>
    <div class="affiche">
    <?php  affiche_commandes(); ?>
   </div>
</div>
</div>
</body>
</html>