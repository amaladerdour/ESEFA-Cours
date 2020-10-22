#include<stdio.h>
#include<stdlib.h>
#include"pile.h"
int main()
{
    MyPile P1,P2;
    int n;
    printf("Donner la taille maximale de la pile 1:\t");
    scanf("%d",&P1.taille);
    P1.sommet=0;
    while(!est_pleinne(P1))
    {
        printf("\ndonner une valeur: ");
        scanf("%d",&n);
        empiler(&P1,n);
    }
    while(!est_vide(P1))
    {
        printf("%d\n",depiler(&P1));
    }
   return 0;
}
