#include <stdio.h>
#include <stdlib.h>
typedef struct Pile
{
    int valeur;
    struct Pile *suivant;
}Pile;


Pile* cree_pile(void)
{
	return NULL;// Retourne une Pile vide
}
int pile_Vide(Pile* P)
{
	if(P == NULL)
		return 1;

	return 0;
}
void afficher_Pile(Pile* P)
{
	if(P == NULL)
	{
		printf("Rien a afficher, la Pile est vide.\n");
		return;
	}
	while(P !=NULL)
	{
		printf("|%d|\n", P->valeur);
		P = P->suivant;
	}
}
Pile* empile(Pile* P, int nvNombre)
{
    Pile* temp= malloc(sizeof(Pile));
     if(temp == NULL)
      {
          fprintf(stderr,"Probleme d'allocation dynamique\n");
          exit(EXIT_FAILURE);
      }
    temp->valeur=nvNombre;

       if(P == NULL)
       {
          P=malloc(sizeof(Pile));
          if(P == NULL)
          {
              fprintf(stderr,"Probleme d'allocation dynamique\n");
              exit(EXIT_FAILURE);
          }
           temp->suivant=NULL;
       }else{
           temp->suivant=P;
       }
        P= temp;
        return P;
}
int hauteur(Pile* P)
{
    int langeur=0;
    if(P== NULL)
    {
        printf("la pile est vide");
        exit(0);
    }
    while(P != NULL)
    {
        langeur++;
        P=P->suivant;
    }
    return langeur;
}
Pile* depile(Pile* P)
{
    if(P == NULL)
          {
              printf("pile est deja vide\n");
              exit(EXIT_FAILURE);
          }
    Pile* temp=P->suivant;
    return P=temp;
}

int main()
{
    Pile* P= cree_pile();
    printf("\npile est vide : %d \n", pile_Vide(P));
printf("\n-----------------------\n");
   P= empile(P,1);
 P=empile(P,2);
P=empile(P,3);
    P=empile(P,4);
    P=empile(P,5);
        afficher_Pile(P);
printf("\n-----------------------\n");
   P=depile(P);
   afficher_Pile(P);
   printf("\nl'hauteur de la pile : %d\n",hauteur(P));
     free(P);
    return 0;
}
