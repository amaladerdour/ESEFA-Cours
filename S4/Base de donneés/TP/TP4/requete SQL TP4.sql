create database if not exists GestionExamens;
create table filiere(
codeFiliere varchar(5) ,
LibelleFiliere varchar(150),
primary key(codeFiliere)
);
create table Etudiant(
codeEtudiant varchar(8) Not null ,
Sexe char(1),
NomEtudiant varchar(50) not null,
PrenomEtudiant varchar(50),
DateNaissance date,
TeleFixe varchar(10),
TeleModile varchar(10),
Email varchar(50) UNIQUE,
codeFiliere varchar(5),
PRIMARY KEY (codeEtudiant),
FOREIGN KEY (codeFiliere) REFERENCES filiere(codeFiliere)ON DELETE NO ACTION,ON UPDATE NO ACTION
);
create table Module(
NumModule int primary key auto_increment,
libelleModule varchar(200), 
);
create table Examen(
codeEtudiant varchar(8),
NumModule Int,
DateExamen date,
Note decimal(4.2),
primary key(codeEtudiant,NumModule)
foreign key (codeEtudiant)
);
#  3-----------
alter table module add NbHeures int;
#  4-----------
alter table filiere modify libelleFiliere varchar(150) not null;
alter table Module modify libelleModule varchar(200) not null;
#  5-----------
alter table examen modify dateExamen date default '2020-06-01';
#  6-----------
alter table etudiant add constraint unique (TeleMobile);
#  7-----------
alter table examen add constraint check (note between 0 and 20);
#  8-----------
alter table etudiant add constraint check (sexe in('F','M'));
#  9-----------
alter table etudiant add constraint check( telemobile like '06%');
#  10-----------
alter table etudiant add constraint check( telemobile like '%@%');
#  11-----------
alter table etudiant drop TeleFixe;
#----------------Partie 2----------------------------------------------
#  1 --- table filiere-----------
insert into filiere value
('F-1', 'Génie informatique'),
('F-2','Génie électrique'),
('F-3',' Génie mécanique'),
('F-4','Génie industriel'),
('F-5',' Commerce'),
('F-6','Marketing');
#  Table etudiant-----------
insert into etudiant value ('E-001','M','Raji','Ali','2000-05-25','0667526325','raji@gmail.com','F-1');
insert into etudiant value ('E-002','F','Dani','Salma','1999-04-06','0658478596','dani@gmail.com','F-1');
insert into etudiant value ('E-003','M','Fellah','Amine','1998-01-17','0652145289','fellah@gmail.fr','F-5');
insert into etudiant value ('E-004','F','Brou','Leila','2000-09-15','0672524158','brou@gmail.fr','F-4');
insert into etudiant value ('E-005','F','Sakhi','asma','1997-05-14','0660656417','sakhi@gmail.fr','F-2');
insert into etudiant value ('E-006','F','Malki','Marwa','1998-01-20','0668741952','malki@gmail.fr','F-3');
#  table module-----------
insert into module(libelleModule,NbHeures) values
 ('Algorithmique',' 50'),
 ('Algèbre',' 30'),
 ('Analyse ','30'),
 ('TEC ','36'),
 ('Mécanique de fluide',' 50'),
 ('Chimie industriel ','40'),
 ('POO ','50'),
 ('Base de données ','50');
 #  table examen------------
 insert into examen (codeEtudiant,NumModule,Note)values
('E-001',1 ,15.00),
('E-002',8 ,14.25),
('E-003',4 ,16.00),
('E-004',7 ,13.25),
('E-004',6 ,17.00),
('E-005',2 ,12.75),
('E-005',1 ,08.50); 
 #  2-----------
 update examen set dateExamen = dateExamen + interval 3 month where NumModule in (1,2,3,4); 
#  3-----------
update examen set dateExamen=DateExamen +interval 3 month +interval 15 Day where numModule in (6,7,8);
#  4-----------
update examen set note =note -2 where codeEtudiant in (select codeEtudiant from etudiant where sexe='F' );
#  5-----------
update module set NbHeures=20 where NumModule not In (select distinct NumModule from examen where dateExamen between '2020-01-01'and'2020-12-31');
#  6-----------
update examen set note =note +2 where NumModule=1 and CodeEtudiant in (select E.CodeEtudiant from etudiant E, Filiere F where E.codeEtudiant=F.codeFiliere and libelleFiliere='Génie électrique');
#  7-----------
delete from filiere where codeFiliere not in (select distinct codeFiliere from filiere);
#  8-----------
delete from etudiant where codeEtudiant not in (select codeEtudiant from examen where dateExamen between curdate() - interval 2  year and curdate() + interval 1 year);