
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

// la foction main.c
int main()
{
    int n,A;
    struct Etudioant
    {
        char nom;
        char prenom;
        float Note[3];
        float moyenne;
    };
    printf("***Bonjour, Bienvenue sur mon petit programme ***\n");
    printf("donnez la taile de tableau <3: \t");
    scanf("%d",&n);
    SaisirTab(Tab,n);
    AffichieTab(Tab,n);
    do{
    printf("\n-------------menu--------------------------\n");
    printf("click sur :\n 0- Pour quitter\n 1- Pour calcluer la Somme\n 2-Pour calculer la moyenne \n 3-Pour calculer le nombre de note Superieur � 10\n 4-Pour Determiner la note la plus grand du tableau\n 5-la valeur recherch\n");

    scanf("%d",&A);
    switch(A){
    case 0: ;break;
    case 1: getSomme(Tab,n);break;
    case 2: getMoyenne(Tab,n);break;
    case 3: getMax(Tab,n);break;
    case 4: getSup( Tab,n); break;
    case 5: recherche(Tab,n); break;
    default:
        printf("entre un nombre entre 1 et 5\n");
    }
    }while(A!=0);

  free(Tab);
    return 0;
}

//d�finition des fonction (MesFonction.c)
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
    printf("le nombre des notes Superieur � 10 sont:%d\n ",NumeroDeSup);
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

