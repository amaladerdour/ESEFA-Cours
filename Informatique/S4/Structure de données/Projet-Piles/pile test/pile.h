#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int sommet;
    int taille;
    int pile[30];
}MyPile;
int est_vide(MyPile P)
{
    return (P.sommet == 0);
}
int est_pleinne(MyPile P)
{
    return P.sommet==P.taille;
}
void empiler(MyPile* P,int valeur)//* pour le passage par adress
{
    P->pile[P->sommet++] = valeur;
}
int depiler(MyPile* P)
{
    return P->pile[--P->sommet];//P->sommet=P->sommet-1
}
