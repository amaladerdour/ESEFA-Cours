/*
 nom et prénom : Amal Aderdour

*/
#include <stdio.h>
#include<stdlib.h>
//diclaration des fonction (Mes fonctions.h)
void SaisirTab(float *Tab,int n);
void AffichieTab(float *Tab ,int n);
int getSomme(float *Tab,int n);
int getMoyenne(float *Tab,int n);
int getSup( float *Tab,int n);
int getMax(float *Tab,int n);
int recherche(float *Tab,int n);
void tri_Bulles(float *Tab,int n);
void Est_tri(float *Tab,int n);
// la foction main.c
int main()
{
    int n,A;
    float *Tab=malloc(n * sizeof(float));
    printf("***Bonjour, Bienvenue sur mon petit programme ***\n");
    printf("donner la taile de tableau 1D: \t");
    scanf("%d",&n);
    SaisirTab(Tab,n);
    AffichieTab(Tab,n);
    do{
    printf("\n-------------menu--------------------------\n");
    printf("click sur :\n 0- Pour quitter\n 1- pour voir est ce que le tableau est trié ou non\n 2- Pour trié le tableau\n 3- Pour calcluer la Somme\n 4-Pour calculer la moyenne \n 5-Pour calculer le nombre de note Superieur à 10\n 6-Pour Determiner la note la plus grand du tableau\n 7-la valeur recherch\n");

    scanf("%d",&A);
    switch(A){
    case 0: ;break;
    case 1: Est_tri(Tab,n);break;
    case 2: tri_Bulles(Tab,n);break;
    case 3: getSomme(Tab,n);break;
    case 4: getMoyenne(Tab,n); break;
    case 5: getMax(Tab,n); break;
    case 6: getSup( Tab,n);break;
    case 7:recherche(Tab,n);break;
    default:
        printf("entre un nombre entre 1 et 5\n");
    }
    }while(A!=0);

  free(Tab);
    return 0;
}

//définition des fonction (MesFonction.c)
void SaisirTab(float *Tab,int n)
{
    int i;
    printf("\n**la saisie des elements de tableau:\n");
    for (i=0;i<n ;i++)
    {
        printf("Donner la valeur numero %d\t",i+1);
        scanf("%f",&Tab[i]);
        if ( Tab[i]>=0 && Tab[i]<=20 )
            printf("\r les notes est bien verifier\n");
         else
            {
              printf("\t erreur\rLa note %f ne peut pas comprises entre 0 et 20 \n",Tab[i]);
              printf("Donner la note exacte \t");
              scanf("%f",&Tab[i]);
            }
    }
}


void AffichieTab(float *Tab,int n )
{
    int i;
    printf("\n**Affichage des elements de tableau:\n");
    for ( i=0 ;i<n ;i++)
        printf("les elements du tableau sont Tab[%d]= %f\n",i+1,Tab[i]);
}
int getSomme(float *Tab,int n)
{
    int i,somme=0;
    for(i=0;i<n;i++)
        somme+=Tab[i];
    printf("Somme =%d\n",somme);
return somme;
}
int getMoyenne(float *Tab,int n)
{
    int i,moyenne;

    moyenne=getSomme(Tab,n)/n;
    printf("moyenne est :%d\n",moyenne);
return moyenne;
}
int getSup( float *Tab,int n)
{
    int i,NumeroDeSup=0;
    for(i=0;i<n;i++)
        if ( Tab[i] > 10)
        NumeroDeSup++;
    printf("le nombre des notes Superieur à 10 sont:%d\n ",NumeroDeSup);
return NumeroDeSup;
}
int getMax(float *Tab,int n)
{
    int i;
    float Max;
    Max=Tab[0];
    for(i=1;i<n;i++)

        if (Max < Tab[i])
            Max = Tab[i];

       printf("la note la plus grande du tableau est :%f\n",Max);
return Max;
}
int recherche(float *Tab,int n)
{
    float valeur;
    int i,Indice=0;
    printf("donner la valeur recherche\n");
    scanf("%f",&valeur);
    for(i=0;i<n;i++)
     if(Tab[i]==valeur)
     {
        Indice++;
        printf("\n la valeur recherche est Dans la cas %d \n",i);
     }
     if(Indice==0)
        printf("la valeur recherche n'existe pas\n");
    /* else
        printf("\n la valeur n'existe pas\n");
*/
    return i;
}

void tri_Bulles(float *Tab,int n)
{
    int i,j;
    float tmp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
         {
           if (Tab[j-1]>Tab[j])
            tmp=Tab[j-1];
             Tab[j-1]=Tab[j];
             Tab[j]=tmp;
         }
    }
    printf("les elements de tableau apres le tri par a bulles:\n");
    for(i=0;i<n;i++)
  printf("element %d est : %.2f\n",i+1,Tab[i]);

}

void Est_tri(float *Tab,int n)
{
    int i,c=0;
    for(i=0;i<n-2;i++)
        if(Tab[i]>Tab[i+1])
        c++;
    if (c==0)
      printf("le tableau est bien trie\n");
    else
        printf("le tableau n'est pas trie\n");

}
