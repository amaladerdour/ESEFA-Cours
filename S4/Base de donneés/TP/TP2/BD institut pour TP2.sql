CREATE DATABASE  IF NOT EXISTS `institut` /*!40100 DEFAULT CHARACTER SET latin1 */;
USE `institut`;
-- MySQL dump 10.13  Distrib 8.0.19, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: institut
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
  `CodeEtudiant` varchar(5) NOT NULL,
  `Sexe` enum('F','M') DEFAULT NULL,
  `NomEtudiant` varchar(25) DEFAULT NULL,
  `PrenomEtudiant` varchar(25) DEFAULT NULL,
  `DateEtudiant` date DEFAULT NULL,
  `Email` varchar(25) DEFAULT NULL,
  `Ville` varchar(25) DEFAULT NULL,
  PRIMARY KEY (`CodeEtudiant`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `etudiant`
--

LOCK TABLES `etudiant` WRITE;
/*!40000 ALTER TABLE `etudiant` DISABLE KEYS */;
INSERT INTO `etudiant` VALUES ('E1','M','Salmi','Ali','1995-10-25','salmi.ali@gmail.com','Agadir'),('E2','F','Amrani','Aicha','1997-08-25','amrani.aicha@gmail.com','Tanger'),('E3','M','Mrani','Samir','1999-07-14','mrani.samir@gmail.com','Agadir'),('E4','M','Dali','Imane','2000-05-02','dali.imane@gmail.com','Tiznit'),('E5','M','Borne','Jawad','1999-08-20','borne.jawad@yahoo.fr','tanger'),('E6','F','Fethaoio','Asma','1995-05-05','fethaoui.asma@gmail.com','mrrakech'),('E7','M','Alaoui','Mustapha','1994-03-25','alaouimustapha@gmail.com','fes');
/*!40000 ALTER TABLE `etudiant` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `evaluation`
--

DROP TABLE IF EXISTS `evaluation`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `evaluation` (
  `CodeEtudiant` varchar(5) NOT NULL,
  `CodeMat` varchar(5) NOT NULL,
  `DateEvaluation` date DEFAULT NULL,
  `Note` decimal(4,2) DEFAULT NULL,
  `typeEvaluation` varchar(25) DEFAULT NULL,
  PRIMARY KEY (`CodeEtudiant`,`CodeMat`),
  KEY `CodeMat_idx` (`CodeMat`),
  CONSTRAINT `CodeEtudiant` FOREIGN KEY (`CodeEtudiant`) REFERENCES `etudiant` (`CodeEtudiant`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `CodeMat` FOREIGN KEY (`CodeMat`) REFERENCES `matiere` (`CodeMat`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `evaluation`
--

LOCK TABLES `evaluation` WRITE;
/*!40000 ALTER TABLE `evaluation` DISABLE KEYS */;
INSERT INTO `evaluation` VALUES ('E1','C2','2020-03-14',14.00,'QSM'),('E1','C3','2020-03-15',15.50,'QSM'),('E2','C1','2020-03-16',10.25,'QSM'),('E3','C2','2020-03-18',15.25,'Pratique'),('E3','C4','2020-03-15',12.75,'Oral');
/*!40000 ALTER TABLE `evaluation` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `matiere`
--

DROP TABLE IF EXISTS `matiere`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `matiere` (
  `CodeMat` varchar(5) NOT NULL,
  `libelleMat` varchar(30) DEFAULT NULL,
  `coeffMat` int(11) DEFAULT NULL,
  PRIMARY KEY (`CodeMat`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `matiere`
--

LOCK TABLES `matiere` WRITE;
/*!40000 ALTER TABLE `matiere` DISABLE KEYS */;
INSERT INTO `matiere` VALUES ('C1','Informatique',2),('C2','Mathématiques',2),('C3','Physique',2),('C4','Anglais',1),('C5','Français',1),('C6','Chimie',1),('C7','comptabilité',2);
/*!40000 ALTER TABLE `matiere` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2020-05-09 16:55:17
