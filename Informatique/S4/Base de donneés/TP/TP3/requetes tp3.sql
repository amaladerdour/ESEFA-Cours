select * from informaticien where Ville In('Casablanca','Rabat','Marrakech','Tanger');
select * from informaticien order by DateNaissance desc;
select * from informaticien where salaire between 9000 and 12000;
select * from informaticien where Ville='Casablanca' order by Fonction desc, salaire asc;
select * from informaticien where NomInfo like 's%' and PrenomInfo like '%m_';
select  avg(Salaire) from informaticien ;
select avg(Salaire) as 'Salaire moyen'from informaticien where Fonction='infographiste';
select MAX(salaire) as 'Salaire maximal', MIN(salaire) as'Salaire minimal' from informaticien;
select count(*) as 'Nombre d''analyste'from informaticien where fonction='Analyste';
select Fonction, count(*) from informaticien group by fonction;
select Fonction, count(*) as'le nombre d''informaticien',avg(salaire) as'salaire moyen' from informaticien group by fonction ;
select * from informaticien where salaire >(select avg(salaire) from informaticien);
select fonction,max(salaire),min(salaire) from informaticien group by fonction; 
select* from informaticien where Fonction='Analyste'and salaire >(select avg(salaire) from informaticien );
select NomInfo,salaire, fonction from informaticien where salaire >(select salaire from informaticien where NomInfo='Faouzi');
select NomProjet,DateDebut, DateFin,NomTheme from projet,theme where projet.NumTheme=theme.NumTheme;
select NomTheme, count(codeProjet) from theme,projet where theme.numTheme =projet.numTheme group by NomTheme;
select NomProjet from projet P, theme T where P.NumTheme=T.NumTheme and NomTheme In ('big date','IA');
select I.NomInfo, count(T.NumInfo) from informaticien I, travaille T where I.NumInfo=T.NumInfo group by NomInfo ;
select P.NomProjet,count(T.CodeProjet) from Projet P, travaille T  where P.CodeProjet=T.CodeProjet group by NomProjet  having count(T.CodeProjet)>3;
select I.NomInfo,I.PrenomInfo, P.NomProjet from informaticien I, projet P ,travaille T where I.NumInfo=T.NumInfo and P.CodeProjet=T.CodeProjet order by NomInfo ;
select sum(I.Salaire) from informaticien I, projet P, travaille T where I.numInfo=T.NumInfo and T.CodeProjet=P.CodeProjet and P.NomProjet='les voitures connectes';
select H.NomTheme, sum(I.Salaire) from informaticien I, projet P, travaille T,theme H where I.numInfo=T.NumInfo and T.CodeProjet=P.CodeProjet and P.NumTheme=H.NumTheme and H.NomTheme='IOT';
select * from informaticien where numinfo not IN (select numinfo from travaille);
select * from informaticien where numinfo not IN (select I.numinfo from informaticien I, projet P, travaille T where T.NumInfo=I.NumInfo and T.CodeProjet=P.CodeProjet and P.DateDebut between '2019-01-01' and'2019-05-30');
select P.* from informaticien I, projet P, travaille T where T.NumInfo=I.NumInfo and T.CodeProjet=P.CodeProjet and I.NomInfo='Amraoui';
select P.nomProjet, sum(salaire) from informaticien I, projet P, travaille T where T.NumInfo=I.NumInfo and T.CodeProjet=P.CodeProjet group by NomProjet;
select P.* ,datediff(dateFin,dateDebut) as'durée' from projet P order by durée; 
select * , year(curdate())- year(dateNaissance) as'Age' from informaticien;
select *, datediff(curdate(),dateNaissance)/365.25 as'Age'from informaticien;


 
