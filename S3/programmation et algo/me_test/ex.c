#include<stdio.h>
int main()
{
    int M[100][100];
    int i,j,n,m;
    printf("donner n nombres des lignes et m nombres des colones ");
    scanf("%d%d",&n,&m);
    for (i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            printf("donner i=%d ,j=%d \t",i,j+1);
          scanf("%d%d",&M[i][j]);
    }
    for (i=0;i<n;i++)
        for(j=0;j<m;j++)
        printf("%d \t %d \n",M[i][j]);

return 0;
}
