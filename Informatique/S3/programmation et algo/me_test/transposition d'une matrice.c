#include<stdio.h>
int main()
{
    int A[20][20],B[20][20];
    int n,m,i,j;
        printf("entre les nombre de ligne n et des colones m:\n");
        scanf("%d%d",&n,&m);
        printf("donner les valeur de matrice A\n");
    for(i=0; i<n; i++)
     for(j=0; j<m; j++)
     {
        printf("A[%d][%d]=\t",i,j);
        scanf("%d",&A[i][j]);

     }
    for(i=0; i<n; i++)
     for(j=0; j<m; j++)
         A[i][j]=B[j][i];
    for(i=0 ;i<m ;i++ )
     {
     for(j=0 ;j<n ;j++)

        printf("\t%d",B[i][j]);
        printf("\n");
     }
        return 1;
}
