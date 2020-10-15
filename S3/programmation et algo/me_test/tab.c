#include<stdio.h>
#define N 5
main ()
{
    int i=0,t[N][N],n,m,j;
    printf("donnez les nombre des lignes n et des colones m >6:\n");
    scanf("%d%d",&n,&m);
    printf("entre les nombres de tableux\n");
     for (;i<n;i++)
        for(j=0;j<m;j++)
        {
        printf("la ligne %d et la colone %d\t",i,j);
         scanf("%d",&t[i][j]);
        }
  for (i=0;i<n;i++)
    for(j=0;j<m;j++)
         printf("T[%d][%d]= %d \n",i,j,t[i][j]);
}

