#include <stdio.h>
#include <stdlib.h>
/* Définition d'un maillon  */
	typedef struct maillon
	{
		int data;
		struct maillon *precedent;
		struct maillon *suivant;
	}maillon;
/* Définition d'une Liste stock*/
	typedef struct Liste
	{
		struct maillon *tete;
		struct maillon *queue;
	}Liste;
// *******************Creer Maillon********************************
maillon *CreerMaillon(int nombre )
{
    maillon* m = malloc(sizeof(maillon));
    m ->data= nombre;
    m ->precedent =NULL;
    m -> suivant =NULL;
    return m;
}
/*----------------------------------------------------------------*/
/**
* Retourne une Liste vide
* @return Une nouvelle Liste
*/
Liste *creer_Liste(void)
{
	return NULL;
}
/*----------------------------------------------------------------*/
int langeur(Liste* l)
{
    if(l == NULL)
	{
		printf("Rien a afficher, stock est vide.\n");
		return;
	}
    maillon* temp =l->tete;
    int langeur=0;
    while(temp !=NULL)
    {
        langeur++;
        temp=temp->suivant;
    }
    return langeur;
}

/*----------------------------------------------------------------*/
Liste* insertQueue(Liste *l, int nombre)
{
	maillon *element = malloc(sizeof(*element));

	if(element == NULL)
	{
		fprintf(stderr, "Erreur : probleme allocation dynamique.\n");
		exit(EXIT_FAILURE);
	}
	element->data = nombre;
	element->suivant = NULL;
	element->precedent = NULL;

	if(l == NULL)
	{
		l = malloc(sizeof(*l));
		if(l == NULL)
		{
			fprintf(stderr, "Erreur : probleme allocation dynamique.\n");
			exit(EXIT_FAILURE);
		}
		//st->nombre = 0;
		l->tete = element;
		l->queue = element;
	}
	else
	{
		l->queue->suivant = element;
		element->precedent = l->queue;
		l->queue = element;
	}
	//l->nombre++;
	return l;
}
/*----------------------------------------------------------------*/
Liste* insertTete(Liste *l,int nombre)
{
	maillon *element = malloc(sizeof(*element));
	if(element == NULL)
	{
		fprintf(stderr, "Erreur : probleme allocation dynamique.\n");
		exit(EXIT_FAILURE);
	}
	element->data = nombre;
	element->suivant = NULL;
	element->precedent = NULL;

	if(l == NULL)
	{
		l = malloc(sizeof(l));
		if(l == NULL)
		{
			fprintf(stderr, "Erreur : probleme allocation dynamique.\n");
			exit(EXIT_FAILURE);
		}
		//st->nombre = 0;
		l->tete = element;
		l->queue = element;
	}
	else
	{
        element->suivant=  l->tete;
		l->tete->precedent = element;
		l->tete = element;
	}
	//l->nombre++;
 return l;
}
/*----------------------------------------------------------------*/
Liste* insertMaillon(Liste *l, int nombre, int position)
{
	maillon *element = malloc(sizeof(*element));
	if(element == NULL)
	{
		fprintf(stderr, "Erreur : probleme allocation dynamique.\n");
		exit(EXIT_FAILURE);
	}
	element->data = nombre;
	element->suivant = NULL;
	element->precedent = NULL;

	if(l == NULL)
	{
       l = malloc(sizeof(*l));
		if(l == NULL)
		{
			fprintf(stderr, "Erreur : probleme allocation dynamique.\n");
			exit(EXIT_FAILURE);
		}
		l->tete = element;
		l->queue = element;
	}
	else
	{
        // chercher le maillon dans la position donnée
            maillon *temp = l->tete;
            for(int i=0; i<position; i++)
               temp = temp->suivant;
        //Si le maillon où debut de la liste
         if(temp == l->tete)
         {
            element->suivant=  l->tete;
            l->tete->precedent = element;
            l->tete = element;
             return l;
         }
        //Si le maillon a la Fin de la liste
          if(temp == l->queue)
         {
            l->queue->suivant = element;
            element->precedent = l->queue;
            l->queue = element;
             return l;
         }
      //Inser un maillon temp qui dans la position donnée
       element->suivant =temp->suivant;
       temp->suivant = element;
       element->precedent = temp;
   }
	return l;
}
/*----------------------------------------------------------------*/
Liste* SupprimerQueue(Liste* l)
{
	if(l == NULL)
	{
		printf("Rien a supprimer, Stock est deja vide.\n");
		return l;
	}
	if(l->tete == l->queue)
	{
		free(l);
		return l=NULL;
	}

	maillon *temp = l->queue;

	l->queue = l->queue->precedent;
	l->queue->suivant = NULL;
	free(temp);

	//l->nombre--;
	return l;
}
/*----------------------------------------------------------------*/
Liste* SupprimerTete(Liste *l)
{
	if(l == NULL)
	{
		printf("Rien a supprimer, Stock est deja vide.\n");
		return l;
	}

	if(l->tete == l->queue)
	{
		free(l);
		return l=NULL;
	}

	maillon *temp = l->tete;

	l->tete = l->tete->suivant;
	l->tete->precedent = NULL;
	free(temp);

	//st->nombre--;
	return l;
}
/*----------------------------------------------------------------*/
void* SupprimerMaillon(Liste* l, int position)
{
	if(l == NULL)
	{
		printf("Rien a supprimer, Stock est deja vide.\n");
		return ;
	}

	if(l->tete == l->queue)
	{
		free(l);
		return;
	}
	if(position > langeur(l))
    {
        printf("la position donner n'existe pas dans la liste\n");
        return;
    }
	// chercher le maillon dans la position donnée
    maillon *temp = l->tete;
    for(int i=0; i<position; i++)
        temp = temp->suivant;
    //Si le maillon où debut de la liste
     if(temp == l->tete)
     {
         //st=SupprimerTete(l);
        maillon *debut = l->tete;
        l->tete = l->tete->suivant;
        l->tete->precedent = NULL;
        free(debut);

        //l->nombre--;
         return;
     }
    //Si le maillon a la Fin de la liste
      if(temp == l->queue)
     {
         //l=SupprimerQueue(l);
        maillon *fin = l->queue;
        l->queue = l->queue->precedent;
        l->queue->suivant = NULL;
        free(fin);

       //l->nombre--;
         return;
     }
    //Supprimer le maillon temp qui dans la position donnée
    maillon* A= temp->precedent;
    A->suivant =temp->suivant;
    temp->suivant->precedent=A;
	free(temp);

	//l->nombre--;
	//return st;
}
/*----------------------------------------------------------------*/
void* Supprimer(Liste *l)
{
    while (l->tete != NULL)
    {
        maillon *temp=l->tete;
        l->tete=temp->suivant;
        free(temp);
    }
}
/*----------------------------------------------------------------*/
void afficher(Liste *l)
{
	if(l == NULL)
	{
		printf("Rien a afficher, stock est vide.\n");
		return;
	}

	maillon *temp = l->tete;

	while(temp != NULL)
	{
		printf("[%d]->", temp->data);
		temp = temp->suivant;
	}

	printf("NULL\n");
}
/*----------------------------------------------------------------*/
int main()
{
    Liste *l= creer_Liste();
   //st=insertTete(st,*pro1);
    l=insertTete(l,1);
    l=insertTete(l,2);
    l=insertTete(l,3);
    afficher(l);
    l=insertQueue(l,4);
l = insertMaillon(l,5,3);
afficher(l);
    printf(" \n langeur de liste : %d \n",langeur(l));
    printf("\n ----------------------\n");
   l=SupprimerTete(l);
    afficher(l);

    l=SupprimerQueue(l);
    afficher(l);

    SupprimerMaillon(l,1);
    afficher(l);

    printf("supprimer tous :\n");
    l=Supprimer(l);
    printf(" \n langeur de liste : %d \n",langeur(l));
    free(l);
    return 0;
}
