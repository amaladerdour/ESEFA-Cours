CREATE DATABASE  IF NOT EXISTS `dvsoft` /*!40100 DEFAULT CHARACTER SET latin1 */;
USE `dvsoft`;
-- MySQL dump 10.13  Distrib 8.0.19, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: dvsoft
-- ------------------------------------------------------
-- Server version	5.7.30-log

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `informaticien`
--

DROP TABLE IF EXISTS `informaticien`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `informaticien` (
  `NumInfo` int(11) NOT NULL AUTO_INCREMENT,
  `NomInfo` varchar(25) DEFAULT NULL,
  `PrenomInfo` varchar(25) DEFAULT NULL,
  `DateNaissance` date DEFAULT NULL,
  `Ville` varchar(25) DEFAULT NULL,
  `Salaire` decimal(7,2) DEFAULT NULL,
  `Fonction` varchar(25) DEFAULT NULL,
  PRIMARY KEY (`NumInfo`)
) ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `informaticien`
--

LOCK TABLES `informaticien` WRITE;
/*!40000 ALTER TABLE `informaticien` DISABLE KEYS */;
INSERT INTO `informaticien` VALUES (2,'Barakate','Khalid','1985-12-12','Agadir',7500.00,'Developpeur'),(3,'Sefsaf','Mohamed','1990-10-18','Tanger',7000.00,'Infographiste'),(4,'Asser','Youssef','1992-02-15','Marrakech',650.00,'Developpeur'),(5,'Amraoui','Meryem','1994-07-15','Tanger',8500.00,'Analyste'),(6,'Rami','Laila','2000-06-15','Casablanca',9000.00,'Analyste'),(7,'Alami','Mourad','1993-02-02','Casablanca',7800.00,'Infographiste'),(10,'Faouzi','Amine','1980-12-23','Agadir',8000.00,'Analyste');
/*!40000 ALTER TABLE `informaticien` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `projet`
--

DROP TABLE IF EXISTS `projet`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `projet` (
  `CodeProjet` varchar(5) NOT NULL,
  `NomProjet` varchar(50) DEFAULT NULL,
  `DateDebut` date DEFAULT NULL,
  `DateFin` date DEFAULT NULL,
  `NumTheme` int(11) DEFAULT NULL,
  PRIMARY KEY (`CodeProjet`),
  KEY `NumTeme_idx` (`NumTheme`),
  CONSTRAINT `NumTeme` FOREIGN KEY (`NumTheme`) REFERENCES `theme` (`NumTheme`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `projet`
--

LOCK TABLES `projet` WRITE;
/*!40000 ALTER TABLE `projet` DISABLE KEYS */;
INSERT INTO `projet` VALUES ('P-01','Analyse comportement clinetèle','2019-01-01','2019-06-30',NULL),('P-02','Big date et la productivité des entreprise','2019-02-15','2019-10-10',1),('P-03','les voitures connectes','2019-09-01','2020-02-14',1),('P-04','Détection anomales des plantes','2019-09-25','2020-01-30',2),('P-05','IOT au service public','2018-05-25','2019-01-20',3),('P-06','Analyse des émotons','2018-10-20','2019-04-04',2),('P-07','Reconnaissance de parole multilingue','2019-02-18','2019-02-20',3),('P-08','Classification RH','2020-01-01','2020-03-30',3);
/*!40000 ALTER TABLE `projet` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `theme`
--

DROP TABLE IF EXISTS `theme`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `theme` (
  `NumTheme` int(11) NOT NULL AUTO_INCREMENT,
  `NomTheme` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`NumTheme`)
) ENGINE=InnoDB AUTO_INCREMENT=51 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `theme`
--

LOCK TABLES `theme` WRITE;
/*!40000 ALTER TABLE `theme` DISABLE KEYS */;
INSERT INTO `theme` VALUES (1,'Big date'),(2,'IOT'),(3,'IA'),(5,'E-Learning'),(50,'Date Sciences');
/*!40000 ALTER TABLE `theme` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `travaille`
--

DROP TABLE IF EXISTS `travaille`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `travaille` (
  `NumInfo` int(11) NOT NULL,
  `CodeProjet` varchar(5) NOT NULL,
  PRIMARY KEY (`NumInfo`,`CodeProjet`),
  KEY `CodeProjet_idx` (`CodeProjet`),
  CONSTRAINT `CodeProjet` FOREIGN KEY (`CodeProjet`) REFERENCES `projet` (`CodeProjet`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `NumInfo` FOREIGN KEY (`NumInfo`) REFERENCES `informaticien` (`NumInfo`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `travaille`
--

LOCK TABLES `travaille` WRITE;
/*!40000 ALTER TABLE `travaille` DISABLE KEYS */;
INSERT INTO `travaille` VALUES (2,'P-01'),(10,'P-01'),(3,'P-02'),(5,'P-02'),(3,'P-03'),(4,'P-03'),(10,'P-03'),(3,'p-04');
/*!40000 ALTER TABLE `travaille` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2020-05-09 11:09:23
