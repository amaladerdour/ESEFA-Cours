<?php
#fonction de la connexion à la base de données
	function connexion($host, $login, $motdepasse){
		$dbname = 'db_mgf';
		$conn = mysqli_connect($host, $login, $motdepasse, $dbname);
		if (!$conn) {
			die("Oooops!!! Vous avez un erreur de connexion à la base de données: " . mysqli_connect_error());
		}
		return $conn;
	}

#les fonctions d'insertion des données dans la base de données
	function ajout_produit($id_produit, $nom, $prix, $quantite){
		$conn = connexion('localhost', 'root', '');
		$sql = "INSERT INTO produit(id_produit, nom, prix, quantite) 
		VALUES ($id_produit, '$nom', $prix, $quantite)";
		if (mysqli_query($conn, $sql)) {
			print("Le produit est ajouté avec succès.");
		}else{
			print("Oooops!!! le produit n'est pas ajouté.<br>");
			print(mysqli_error());
		}
		mysqli_close($conn);
	}

	function ajout_client($id_client, $nom, $prenom, $ville){
		$conn = connexion('localhost', 'root', '');
		$sql = "INSERT INTO client(id_client, nom, prenom, ville) 
		VALUES ($id_client, '$nom', '$prenom', '$ville')";
		if (mysqli_query($conn, $sql)) {
			print("<font color=green>Le client est ajouté avec succès.</font>");
		}else{
			print("Oooops!!! le client n'est pas ajouté.<br>");
			print(mysqli_error());
		}
		mysqli_close($conn);
	}

	function ajout_commande($id_commande, $id_produit, $id_client, $quantite){
		$conn = connexion('localhost', 'root', '');
		$sql = "INSERT INTO commande(id_commande, id_produit, id_client, quantite) 
		VALUES ($id_commande, $id_produit, $id_client, $quantite)";
		if (mysqli_query($conn, $sql)) {
			print("Votre commande est passé avec succès.");
		}else{
			print("Oooops!!! votre commande n'est pas passé.<br>");
			print(mysqli_error());
		}
		mysqli_close($conn);
	}

#les fonctions de chargement des données à partier de la base de données
	function affiche_noms_clients(){
		$conn = connexion('localhost', 'root', '');
		$sql = "SELECT nom FROM client WHERE ville = 'Agadir'";
		$result = mysqli_query($conn, $sql);
		if (mysqli_num_rows($result) > 0) {
			print("Noms:<br>");
			while($row = mysqli_fetch_assoc($result)){
				print($row["nom"]."<br>");
			}
		}else{
			print("Pas de résultats.");
		}
		mysqli_close($conn);
	}

	function affiche_produits(){
		$conn = connexion('localhost', 'root', '');
		$sql = "SELECT * FROM produit";
		$result = mysqli_query($conn, $sql);
		if (mysqli_num_rows($result) > 0) {
			print("<table border=1 cellspace=0 width='50%'>");
			print("<tr> <td> ID </td> <td> NOM </td> <td> PRIX </td> <td> QUANTITÉ </td> </tr>");
			while($row = mysqli_fetch_assoc($result)){
				print("<tr>");
				print("<td>". $row['id_produit'] ."</td>");
				print("<td>". $row['nom'] ."</td>");
				print("<td>". $row['prix'] ."</td>");
				print("<td>". $row['quantite'] ."</td>");
				print("</tr>");
			}
			print("</table>");
		}else{
			print("Pas de résultats.");
		}
		mysqli_close($conn);
	}

	function affiche_commandes(){
		$conn = connexion('localhost', 'root', '');
		$sql = "SELECT * FROM commande";
		$result = mysqli_query($conn, $sql);
		if (mysqli_num_rows($result) > 0) {
			print("<table border=1 cellspace=0 width='50%'>");
			print("<tr> <td> ID </td> <td> ID PRODUIT </td> <td> ID CLIENT </td> <td> QUANTITÉ </td> </tr>");
			while($row = mysqli_fetch_assoc($result)){
				print("<tr>");
				print("<td>". $row['id_commande'] ."</td>");
				print("<td>". $row['id_produit'] ."</td>");
				print("<td>". $row['id_client'] ."</td>");
				print("<td>". $row['quantite'] ."</td>");
				print("</tr>");
			}
			print("</table>");
		}else{
			print("Pas de résultats.");
		}
		mysqli_close($conn);
	}

#les fonctions de suppression des données de la base de données
	function suppr_produit($id_produit){
		$conn = connexion('localhost', 'root', '');
		$sql = "DELETE FROM produit WHERE id_produit = $id_produit";
		if (mysqli_query($conn, $sql)) {
			print("Le produit est supprimé avec succès.");
		}else{
			print("Oooops!!! Le produit n'est pas supprimé.<br>");
			print(mysqli_error());
		}
		mysqli_close($conn);
	}

	function suppr_client($id_client){
		$conn = connexion('localhost', 'root', '');
		$sql = "DELETE FROM client WHERE id_client = $id_client";
		if (mysqli_query($conn, $sql)) {
			print("<font color=green>Le client est supprimé avec succès.</font>");
		}else{
			print("Oooops!!! Le client n'est pas supprimé.");
		}
		mysqli_close($conn);
	}

	function suppr_commande($id_commande){
		$conn = connexion('localhost', 'root', '');
		$sql = "DELETE FROM commande WHERE id_commande = $id_commande";
		if (mysqli_query($conn, $sql)) {
			print("La commande est supprimé avec succès.");
		}else{
			print("Oooops!!! La commande n'est pas supprimé.");
		}
		mysqli_close($conn);
	}

?>