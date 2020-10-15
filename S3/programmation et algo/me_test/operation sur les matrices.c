#include <stdio.h>
int main(){
    int C[20][20],A[20][20],B[20][20];
    int i,j,n;
    printf ("entre le nombres des lignes et des colonnes n*n\n");
    scanf ("%d",&n);
    printf("entre les  nombres de la premieur matrice A\n");
    for (i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        printf("A[%d][%d]=\t",i,j);
        scanf("%d",&A[i][j]);
    }
    printf("entre les  nombres de la premieur matrice B\n");
    for (i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        printf("B[%d][%d]=\t",i,j);
        scanf("%d",&B[i][j]);
    }
    for (i=0;i<n;i++)
        for(j=0;j<n;j++)
            C[i][j]=A[i][j]+B[i][j];
    printf("l'addition de deux matrices est:\n");
    for (i=0;i<n;i++)
    {
         for(j=0;j<n;j++)
        printf("\t%d",C[i][j]);
        printf("\n");
    }

return 1;}

