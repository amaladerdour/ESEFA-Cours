select * from etudiant;
select libelleMat as 'libelle matiere', coeffMat as 'coeffition' from matiere;
select * from etudiant order by NomEtudiant desc;
select * from matiere where coeffMat >2;
select NomEtudiant,PrenomEtudiant,DateEtudiant,Email from etudiant where sexe='F';
select * from etudiant where sexe='M' order by DateEtudiant;
select * from evaluation where DateEvaluation between '2020-01-01' and '2020-05-30';
select * from evaluation where typeEvaluation='QSM' order by DateEvaluation asc;
select * from evaluation order by typeEvaluation desc, DateEvaluation asc;
select CodeMat, Note from evaluation where CodeEtudiant='E1';
select codeMat, Note from evaluation where CodeEtudiant='E1' and Note >=16;
select * from etudiant where Ville In('Tanger','casablanca','Agadir');
select PrenomEtudiant from etudiant where PrenomEtudiant like'%e';
select nomEtudiant, PrenomEtudiant from etudiant where NomEtudiant like'%i'and PrenomEtudiant like'%e';
select * from etudiant where NomEtudiant like '%u%';
select NomEtudiant from etudiant where NomEtudiant like '_a%';
select NomEtudiant from etudiant where NomEtudiant Not like '_a%';
select * from etudiant where sexe='F' and Ville='Tanger' and NomEtudiant like 'n%' and PrenomEtudiant like '%h%';
select typeEvaluation from evaluation;
select  distinct typeEvaluation from evaluation;
