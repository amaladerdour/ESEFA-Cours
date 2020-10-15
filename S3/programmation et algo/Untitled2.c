//  TD n�2   Exercice 5 avec l'allocation dynamique
#include <stdio.h>
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
    int n,A;// n: la taille de tableau , A: menu
    float *Tab=malloc(n * sizeof(float));// Tab: nom de tableau
    printf("***Bonjour, Bienvenue sur mon petit programme ***\n");
    printf("saisir la taile de la table 1D: \t");
    scanf("%d",&n);
    SaisirTab(Tab,n);//fonction qui permet de saisir les elements du tableux
    AffichieTab(Tab,n);//fonction qui permet de afficher les elements du tableux
    do{  // une boucle pour donner � l'utilisateur d'entrer un nombre dans le menu
    printf("\n-------------menu--------------------------\n");
    printf("click sur :\n 0- Pour quitter\n 1-Pour calcluer la Somme\n 2-Pour calculer la moyenne \n 3-Pour calculer le nombre de note Superieur � 10\n 4-Pour Determiner la note la plus grand du tableau\n 5-la valeur recherch\n");

    scanf("%d",&A);
    switch(A){
    case 0: ;break;
    case 1: getSomme(Tab,n);break;
    case 2: getMoyenne(Tab,n);break;
    case 3: getSup( Tab,n);break;
    case 4: getMax(Tab,n); break;
    case 5: recherche(Tab,n); break;
    default:
        printf("entre un nombre entre 1 et 5\n");
    }
    }while(A!=0);

  free(Tab)
    return 0;
}

//d�finition des fonction (MesFonction.c)
void SaisirTab(float *Tab,int n)// fonction qui permet de saisir les elements du tableux
{
    int i;
    printf("\n**la saisie des elements de tableau:\n");
    for (i=0;i<n ;i++)
    {
        printf("Donnez la valeur numero %d\t",i+1);
        scanf("%f",&Tab[i]);
        if ( Tab[i]>=0 && Tab[i]<=20 )// test si les notes sont comprises entre 0 et 20
            printf("\r les notes est bien verifier\n");
         else
            {
              printf("\t erreur\rLa note %f ne peut pas comprises entre 0 et 20 \n",Tab[i]);
              printf("Donnez la note exacte \t");
              scanf("%f",&Tab[i]);
            }
    }
}


void AffichieTab(float *Tab,int n )//fonction qui permet de afficher les elements du tableux
{
    int i;
    printf("\n**Affichage des elements de tableau:\n");
    for ( i=0 ;i<n ;i++)
        printf("les elements du tableau sont Tab[%d]= %f\n",i+1,Tab[i]);
}
int getSomme(float *Tab,int n)//fonction qui permet de calculer et afficher la somme de tous les elements du tableux
{
    int i,somme=0;
    for(i=0;i<n;i++)
        somme+=Tab[i];
    printf("Somme =%d\n",somme);
return somme;
}
int getMoyenne(float *Tab,int n)//fonction qui permet de calculer et afficher la moyenne des notes du tableux
{
    int i,moyenne;

    moyenne=getSomme(Tab,n)/n;
    printf("moyenne est :%d\n",moyenne);
return moyenne;
}
int getSup( float *Tab,int n//fonction qui permet de compter la nombre de note sup�rieur � 10
{
    int i,NumeroDeSup=0;
    for(i=0;i<n;i++)
        if ( Tab[i] > 10)
        NumeroDeSup++;
    printf("le nombre des notes Superieur � 10 sont:%d\n ",NumeroDeSup);
return NumeroDeSup;
}
int getMax(float *Tab,int n)//fonction qui permet d�terminer la note la plus grand  du tableux
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
int recherche(float *Tab,int n)// fonction qui permet de rechercher une valeur dans le tableux
{
    float valeur;
    int i,Indice=0;
    printf("donnez la valeur recherche\n");
    scanf("%f",&valeur);
    for(i=0;i<n;i++)
     if(Tab[i]==valeur)
     {
        Indice++;
        printf("\n la valeur recherche est : %d \n",i);
     }
     if(Indice==0)
        printf("la valeur recherche n'existe pas\n");

    return i;
}


