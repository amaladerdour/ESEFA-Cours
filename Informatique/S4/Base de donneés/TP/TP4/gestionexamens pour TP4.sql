CREATE DATABASE  IF NOT EXISTS `gestionexamens` /*!40100 DEFAULT CHARACTER SET latin1 */;
USE `gestionexamens`;
-- MySQL dump 10.13  Distrib 8.0.19, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: gestionexamens
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
-- Table structure for table `etudiant`
--

DROP TABLE IF EXISTS `etudiant`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `etudiant` (
  `codeEtudiant` varchar(8) NOT NULL,
  `Sexe` char(1) DEFAULT NULL,
  `NomEtudiant` varchar(50) NOT NULL,
  `PrenomEtudian` varchar(50) DEFAULT NULL,
  `DateNaissance` date DEFAULT NULL,
  `TeleMobile` varchar(10) DEFAULT NULL,
  `Email` varchar(50) DEFAULT NULL,
  `codeFiliere` varchar(5) DEFAULT NULL,
  PRIMARY KEY (`codeEtudiant`),
  UNIQUE KEY `Email_UNIQUE` (`Email`),
  UNIQUE KEY `TeleMobile` (`TeleMobile`),
  KEY `codeFiliere_idx` (`codeFiliere`),
  CONSTRAINT `codeFiliere` FOREIGN KEY (`codeFiliere`) REFERENCES `filiere` (`codeFiliere`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `etudiant`
--

LOCK TABLES `etudiant` WRITE;
/*!40000 ALTER TABLE `etudiant` DISABLE KEYS */;
INSERT INTO `etudiant` VALUES ('E-001','M','Raji','Ali','2000-05-25','0667526325','raji@gmail.com','F-1'),('E-002','F','Dani','Salma','1999-04-06','0658478596','dani@gmail.com','F-1'),('E-003','M','Fellah','Amine','1998-01-17','0652145289','fellah@gmail.fr','F-5'),('E-004','F','Brou','Leila','2000-09-15','0672524158','brou@gmail.fr','F-4'),('E-005','F','Sakhi','asma','1997-05-14','0660656417','sakhi@gmail.fr','F-2');
/*!40000 ALTER TABLE `etudiant` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `examen`
--

DROP TABLE IF EXISTS `examen`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `examen` (
  `codeEtudiant` varchar(8) NOT NULL,
  `NumModule` int(11) NOT NULL,
  `dateExamen` date DEFAULT '2020-06-01',
  `Note` decimal(4,0) DEFAULT NULL,
  PRIMARY KEY (`codeEtudiant`,`NumModule`),
  CONSTRAINT `codeEtudiant` FOREIGN KEY (`codeEtudiant`) REFERENCES `etudiant` (`codeEtudiant`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `examen`
--

LOCK TABLES `examen` WRITE;
/*!40000 ALTER TABLE `examen` DISABLE KEYS */;
INSERT INTO `examen` VALUES ('E-001',1,'2020-09-01',15),('E-002 ',8,'2020-09-16',12),('E-003 ',4,'2020-09-01',16),('E-004 ',6,'2020-09-16',15),('E-004 ',7,'2020-09-16',11),('E-005 ',1,'2020-09-01',10),('E-005 ',2,'2020-09-01',10);
/*!40000 ALTER TABLE `examen` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `filiere`
--

DROP TABLE IF EXISTS `filiere`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `filiere` (
  `codeFiliere` varchar(5) NOT NULL,
  `libelleFiliere` varchar(150) NOT NULL,
  PRIMARY KEY (`codeFiliere`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `filiere`
--

LOCK TABLES `filiere` WRITE;
/*!40000 ALTER TABLE `filiere` DISABLE KEYS */;
INSERT INTO `filiere` VALUES ('F-1','Génie informatique'),('F-2','Génie électrique'),('F-3',' Génie mécanique'),('F-4','Génie industriel'),('F-5',' Commerce');
/*!40000 ALTER TABLE `filiere` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `module`
--

DROP TABLE IF EXISTS `module`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `module` (
  `NumModule` int(11) NOT NULL AUTO_INCREMENT,
  `libelleModule` varchar(200) NOT NULL,
  `NbHeures` int(11) DEFAULT NULL,
  PRIMARY KEY (`NumModule`)
) ENGINE=InnoDB AUTO_INCREMENT=9 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `module`
--

LOCK TABLES `module` WRITE;
/*!40000 ALTER TABLE `module` DISABLE KEYS */;
INSERT INTO `module` VALUES (1,'Algorithmique',50),(2,'Algèbre',30),(3,'Analyse ',20),(4,'TEC ',36),(5,'Mécanique de fluide',20),(6,'Chimie industriel ',40),(7,'POO ',50),(8,'Base de données ',50);
/*!40000 ALTER TABLE `module` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2020-05-09 16:52:18
