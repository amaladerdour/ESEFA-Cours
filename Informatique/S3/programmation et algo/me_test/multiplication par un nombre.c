#include <stdio.h>
int main(){
    int C[20][20],A[20][20],N;
    int i,j,n,m;
    printf ("entre le nombres des lignes et des colonnes \n");
    scanf ("%d%d",&n,&m);
    printf("entre les  nombres de la premieur matrice A\n");
    for (i=0;i<n;i++)
        for(j=0;j<m;j++)
    {
        printf("A[%d][%d]=\t",i,j);
        scanf("%d",&A[i][j]);
    }
    printf("saisir un nombre pour multiplier par la matrice A\n");
    scanf("%d",&N);
    for (i=0;i<n;i++)
        for(j=0;j<m;j++)
           C[i][j]=A[i][j]*N;

    for (i=0;i<n;i++)
     {   for(j=0;j<m;j++)
        printf("\t%d",C[i][j]);
        printf("\n");
    }

return 1;}

