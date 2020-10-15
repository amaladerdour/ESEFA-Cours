#include<stdio.h>
int main()
{
    int A[20][20],B[20][20],C[20][20];
    int i,j,n,m,p,k;
    /* Saisie des données */
            printf("*** Matrice A ***\n");
            printf("entre les nombre des lignes n et des colones m de matrice A\n");
            scanf("%d%d",&n,&m);
    for(i=0 ;i<n ;i++)
        for(j=0 ;j<m ;j++)
        {
            printf("A[%d][%d]=\t",i,j);
            scanf("%d",&A[i][j]);
        }
            printf("*** Matrice B ***\n");
            printf("entre les nombre des lignes m et des colones p de matrice B\n");
            scanf("%d%d",&m,&p);
        for(i=0 ;i<m ;i++)
        for(j=0 ;j<p ;j++)
        {
            printf("B[%d][%d]=\t",i,j);
            scanf("%d",&B[i][j]);
        }
 /* Affichage des matrices */
 printf("Matrice donnée A :\n");
 for (i=0; i<n; i++)
    {
     for (j=0; j<m; j++)
          printf("\t%d", A[i][j]);
     printf("\n");
    }
 printf("Matrice donnée B :\n");
 for (i=0; i<m; i++)
    {
     for (j=0; j<p; j++)
          printf("\t%d", B[i][j]);
     printf("\n");
    }
 /* Affectation du résultat de la multiplication à C */
    for (i=0; i<n; i++)
     for (j=0; j<p; j++)
         {
          C[i][j]=0;
          for (k=0; k<m; k++)
               C[i][j] += A[i][k]*B[k][j];
         }
  /* Edition du résultat */
        printf("*** Matrice A*B =***\n");
    for(i=0 ;i<n ;i++)
    {
        for(j=0 ;j<p ;j++)
             printf("\t%d",C[i][j]);
             printf("\n");
    }
}
