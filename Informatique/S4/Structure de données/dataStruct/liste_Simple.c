#include <stdio.h>
#include <stdlib.h>
struct maillon
{
    int data;
    struct maillon *suivant;
};
typedef struct maillon Liste;
/************************************************************************************/
Liste* cree_Liste()
{
    return NULL;
}
/************************************************************************************/
int liste_Vide(Liste* l)
{
    if(l==NULL) return 1;
    return 0;
}
void fonction(Liste* l)
{
    fonction(l->suivant);
    printf("%d",l->data);

}
/************************************************************************************/
int langueur_Liste(Liste* l)
{
    if(l == NULL)
    {
        //printf("la liste est deja vide\n");
        return 0;
    }
    int langueur=0;
    while(l!=NULL)
    {
        langueur++;
        l=l->suivant;
    }
    return langueur;
}
/************************************************************************************/
Liste* insert_tete(Liste* l,int nombre)
{
    Liste* temp=malloc(sizeof(Liste));
    if(temp== NULL)
    {
        printf("probleme d'allocation memoire\n");
        return 0;
    }
    temp->data= nombre;
    temp->suivant= l;
    //l= temp;
    return temp;
}
/************************************************************************************/
Liste* insert_queue(Liste* l, int nombre)
{
    Liste* temp=malloc(sizeof(Liste));
    if(temp== NULL)
    {
        printf("probleme d'allocation memoire\n");
        return 0;
    }

    temp->data= nombre;
    temp->suivant= NULL;

   for(int i=0; i<= langueur_Liste(l);i++){
        l=l->suivant;//afficher(l);
    }
    l->suivant=temp;
    return l;
}
/************************************************************************************/
Liste* insert_Milieu(Liste* l,int nombre,int position)
{
    if(position > langueur_Liste(l))
    {
        printf("la position donne n'existe pas dans la liste");
        return ;
    }
    Liste* temp=malloc(sizeof(Liste));      temp=l;
    Liste* milieu=malloc(sizeof(Liste));    milieu->data=nombre;
    Liste* precedant=malloc(sizeof(Liste)); precedant=l;

    if(l==NULL)
    {
       l->data=nombre;
       l->suivant=NULL;
    }else{
        if(position==0){
            milieu->suivant=l;
            l=milieu;
        }else{
            for(int i=0;i<position;i++) temp=temp->suivant;// maillon done la position
            for(int i=0;i<position-1;i++) precedant=precedant->suivant; //le maillon avant la position
            milieu->suivant=temp;// le suivant de maillon qui on va inseret <- maillon qu'il a dans la position
            precedant->suivant=milieu;//le suivant de maillon avant la position <- le maillon qui en va inseret
    }}
    return l;
}
/************************************************************************************/
Liste* Supprimer_tete(Liste* l)
{
    if(l==NULL)
    {
        printf("la liste est deja vide");
        return ;
    }else{
    Liste* temp=malloc(sizeof(Liste));
    temp=l->suivant;
    //l=temp;
    free(l);
return temp;
    }
}
/************************************************************************************/
Liste* Supprimer_Queue(Liste* l)
{
    if(l==NULL)
    {
        printf("la liste est deja vide");
        return ;
    }else{

    Liste* temp=malloc(sizeof(Liste));temp=l->suivant;
    Liste* precedant=malloc(sizeof(Liste));precedant=l->suivant;

      for(int i=0;i<langueur_Liste(l);i++) temp=temp->suivant;
      for(int i=0;i<langueur_Liste(l)-1;i++) precedant=precedant->suivant;
        precedant->suivant=NULL;
        l=precedant;
        free(temp);
return l;
    }
}
/************************************************************************************/
Liste* Supprimer_milieu(Liste* l,int position)
{
    Liste* temp=malloc(sizeof(Liste));temp=l;
    Liste* precedant=malloc(sizeof(Liste)); precedant=l;

    if(l==NULL)
    {
        printf("la liste est deja vide");
        return ;
    }
    if(position == 0){
        temp=l->suivant;
        free(l);
        return temp;
    }
    if(position >= langueur_Liste(l))
    {
        printf("la position est superieur a la langueur de la liste\n");
        return l;
    }
    if(position == langueur_Liste(l)-1)
    {
        for(int i=0;i<position;i++) precedant=precedant->suivant;
        precedant->suivant=NULL;
        for(int i=0;i<position-1;i++) temp=temp->suivant;
        temp->suivant=NULL;
        free(precedant);
    }else{
        for(int i=0;i<position;i++) temp=temp->suivant;
        for(int i=0;i<position-1;i++) precedant=precedant->suivant;
        precedant->suivant= temp->suivant;
        free(temp);
    }
    return l;
}
/************************************************************************************/
void afficher(Liste *l)
{
	if(l == NULL)
	{
		printf("Rien a afficher, stock est vide.\n");
		return;
	}

	while(l != NULL)
	{
		printf("|%d|->", l->data);
		l = l->suivant;
	}
	printf("NULL\n");
}
/************************************************************************************/

int main()
{
    Liste* l=cree_Liste();
    printf("\n- insert tete:\n");
     l= insert_tete(l,1);
     l= insert_tete(l,2);
     l= insert_tete(l,3);
     l=  insert_tete(l,4);
     afficher(l);
    //printf("\n- insert Queue:\n");
     //l=insert_queue(l,5);
    printf("\n- insert milieu:\n");
      l=insert_Milieu(l,6,0);
      afficher(l);
    printf("\n- Suppremer tete:\n");
     l=Supprimer_tete(l);
     afficher(l);
    printf("\n- la taille de la liste: %d \n",langueur_Liste(l));
   printf("\n- Suppremer milieu:\n");
     l=Supprimer_milieu(l,4);
     afficher(l);
     /*printf("\n- Suppremer queue:\n");
     l=Supprimer_Queue(l);*/
     fonction(l);
     afficher(l);
    free(l);
    return 0;
}
