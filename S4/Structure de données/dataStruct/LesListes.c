#include <stdio.h>
#include <stdlib.h>

// struct pour definir un maillon
struct element {
	int e;
};
typedef struct element Telement;
struct maillon {
	int e;
	struct maillon *pSuivant;
};
typedef struct maillon Tmaillon;
// struct pour definir une liste
struct liste {
	Tmaillon *Debut;
	Tmaillon *Fin;
};
typedef struct liste Tliste;
//fonction pour creer un maillon
Tliste *creerListe() {
	Tliste *L;
	L=(Tliste*)malloc(sizeof(Tliste));
	L->Debut=NULL;
	L->Fin=NULL;
	return L;
}
int listeVide(Tliste L) {
	return(L.Debut==NULL);
}
int longListe(Tliste *L) {
	if(L->Debut==NULL)
		return 0;
	int h=0;
	Tmaillon *p;
	p=L->Debut;
	while(p!=NULL) {
		p=p->pSuivant;
		h++;
	}
	return h;
}
Tmaillon *creerMaillon(int valeur) {
	Tmaillon *m;
	m=(Tmaillon*)malloc(sizeof(Tmaillon));
	if(m!=NULL) {
		m->e=valeur;
		m->pSuivant=NULL;
	}
	return m;
}
int insererDebut(Tliste *L, int valeur) {
	Tmaillon *m;
	m=(Tmaillon*)malloc(sizeof(Tmaillon));
	if (m == NULL)
		return 0;
	m=creerMaillon(valeur);
	L->Debut =m;
	return m->e;
}
//insertion à la fin de la liste
int insererFin(Tliste *L, int valeur) {
	Tmaillon *m;
	m=(Tmaillon*)malloc(sizeof(Tmaillon));
	if (m == NULL)
		return 0;
	m=creerMaillon(valeur);
	L->Fin=m;
	L->Fin->pSuivant=NULL;
	return m->e;
}
//insertion dans une position précis de la liste
int insertion(Tliste *L, int valeur) {
	Tmaillon *m;
	m= malloc(sizeof(Tmaillon));
	if (L->Debut == NULL || m== NULL)
		return 0;
	m->e =valeur;
	/* Insertion de l'élément au début de la liste */
	m->pSuivant = L->Debut;
	L->Debut= m;
}
void SupprDebut(Tliste *L) {
	Tmaillon *m;
	if(L->Debut== NULL) {
		printf("liste vide");
	}
	m =L->Debut;
	L->Debut = L->Debut->pSuivant;
	free(m);
}
void SupprFin(Tliste *L) {
	Tmaillon *m,*position;
	if(L->Debut== NULL) {
		printf("liste vide");
	}
	m =L->Fin;
	L->Fin =NULL;
	free(m);
}
void supprPosition(Tliste* L, int valeur) {
	Tmaillon  *m,*position;
	if (L->Debut == NULL) // si la liste est NULL on s'arrete tout de suit
		return;
	position = L->Debut;
	if (position->e == valeur) { // Verifie la tete de liste, cas particulier
		L->Debut = position->pSuivant;
		free(position);
	}
	m = position->pSuivant; // le cas n est gere on se place donc sur le cas n+1
	while(m != NULL) { // On Mouline est on supprime si on trouve l'element
		if (m->e == valeur) {
			position->pSuivant = m->pSuivant;
			free(m);

		}
		position = m; // pour ce souvenir dans la prochaine iteration du precedent
		m = m->pSuivant;
	}

}
void liberer(Tliste *L) {
	Tmaillon *m= L->Debut;
	Tmaillon *p=m;

	while (m != NULL) {
		p=m->pSuivant;
		free(m);
		m=p;
	}
	L->Debut=NULL;
	L->Fin=NULL;
}
void afficherListe(Tliste *L) {
	Tmaillon *temp;
	temp  =L->Debut;
	printf("\n\n-------- ");
	while(temp!= NULL) {
		printf("%d->",temp->e);
		temp = temp->pSuivant;
	}
	if(L->Fin!=NULL){
	printf("%d",L->Fin->e);
	}

}
int rechercherElement(Tliste *L, int valeur) {
	Tmaillon *temp=L->Debut;
	while (temp != NULL) {
		if(temp->e ==valeur)
			return 1 ;
			temp=temp->pSuivant;

	}
	return 0;
}
int menu(){
	int choix;
		printf("\n=====================");
		printf("liste Simplement chainee");
		printf("=====================\n\n");
		printf("1.  Creer liste \n");
		printf("0.  Exit\n");
		printf("\n    Enter votre choix : ");
    	scanf("%d", &choix);
		return choix;
}
int menu2 (){
int choix;
		printf("\n1.  Ajouter dans la liste ");
		printf("\n2.  Ajouter la fin de la liste ");
		printf("\n3.  AFFICHER");
		printf("\n4.  Rechercher");
		printf("\n5.  supprimer Debut");
		printf("\n6.  supprimer fin");
		printf("\n7.  supprimer position");
		printf("\n8.  liberer la liste");
		printf("\n9.  savoir la longueur de la liste");
		printf("\n0.  Exit\n");
		printf("\n--------------------------------------------");
		printf("\n    Enter votre choix : ");
		scanf("%d", &choix);
		return choix;
}
int main(){
int choix1,choix2;
int num1,n,i,Element;
Tliste *liste=creerListe();
	do{
        choix1=menu();
        switch (choix1){
            case 1:
	    		printf("\n***********creer Liste*************");
				printf("\nDonner le nombre a inserer au debut de la liste:");
				scanf("%d",&num1);
				insererDebut(liste,num1);
                    do{
					choix2=menu2();
                    switch(choix2){
           	case 1:
           		printf("\nCombien d'element voulez vous ajouter:");
				scanf("%d",&n);
				for(i=0;i<n;i++){
				printf("\nDonner le nombre a inserer dans la liste:");
				scanf("%d",&num1);
				insertion(liste,num1);
			    }
				break;
			case 2:
				printf("\nDonner le nombre a inserer a la fin de la liste:");
				scanf("%d",&num1);
				insererFin(liste,num1);
				break;
			case 3:
				afficherListe(liste);
				break;
			case 4:
				printf("\nDonner le Nombre a recherche");
				scanf("%d",&num1);
				Element=rechercherElement(liste,num1);
				if(Element==0){
						printf("\nle Nombre %d n'existe pas dans la liste",num1);
					}	else if(Element!=0){
						printf("\nle Nombre %d existe dans la liste",num1);
					}
				break;
			case 5:
				if(!listeVide(*liste)){
				SupprDebut(liste);
				}
				break;
			case 6:
				if(!listeVide(*liste)){
				SupprFin(liste);
			    }
				break;
			case 7:
				if(!listeVide(*liste)){
			    printf("\nDonner le position a supprimer");
				scanf("%d",&num1);
				supprPosition(liste,num1);
			    }
				break;
			case 8:
			    if(!listeVide(*liste)){
				liberer(liste);
				}
			    break;
		    case 9:
				printf("\n la longueur de la liste :%d\n",longListe(liste));
				break;
			default:
			break;
                  	}
                  }while(choix2!=0);
				  break;
		}

				}while (choix1!=0);
    system("PAUSE");

	return 0;
}
