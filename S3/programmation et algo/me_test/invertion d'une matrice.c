#include<stdio.h>
int main()
{
    int i,j,n,m;
    int A[20][20],B[20][20],I[20][20];
    // la saisie de la dimension N e M
    printf("Entrer le nombre des lignes N et des colonne M\t");
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
      for(j=0;j<m;j++)
        I[i][j]=1;
    // La saisir les nombre de matrice A
    for(i=0;i<n;i++)
      for(j=0;j<m;j++)
       {
           printf("A[%d][%d]=\t",i,j);
        scanf("%d",&A[i][j]);
       }
     for(i=0;i<n;i++)//calculer Invertion da matrice
      for(j=0;j<m;j++)
       {
           MultiplicationMatrices(A[i][j],B[i][j],)
        scanf("%d",&A[i][j]);
       }
