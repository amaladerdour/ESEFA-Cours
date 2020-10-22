#include<stdio.h>
int main()
{
    int i,j,N,M;
    int A[20][20],B[20][20];
    printf("entre le nombre des lignes N et des colone M\t");
    scanf("%d%d",&N,&M);
    for(i=0;i<N;i++)
      for(j=0;j<M;j++)
       {
           printf("A[%d][%d]=\t",i,j);
        scanf("%d",&A[i][j]);
       }
        printf("la transpose de matrice A est: B=\n ");


          for(i=0;i<M;i++)
            {
            for(j=0;j<N;j++)
             {
                 B[i][j]=A[j][i];
                printf("\t%d",B[i][j]);
               }
               printf("\n");
            }

    return 0;
}
