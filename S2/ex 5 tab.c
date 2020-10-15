#include<stdio.h>
#define N 10
main()
{
    int i,t[N],n ,val;
    printf("donnez une taille\n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
        {
            printf("Saisir les elements de la table: %d\n",i+1);
           scanf("%d",&t[i]);
        }
        printf("saisir la valeur recherche");
        scanf("%d",&val);
        for (i=0;i<n;i++)

           if (val==t[i])
   {
     printf("l'indice de l'element recherche est: %d\n",i);
             break;}
        if(i==n)
         printf("l'entier inexistant");
        }
