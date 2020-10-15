#include<stdio.h>
#define N 5
main ()
{
    int i=0,t[N],n;
    printf("donnez une taille >6:");
    scanf("%d",&n);
     for (;i<n;i++)
         scanf("%d",&t[i]);
  for (i=n-1;i>=0;i--)
         printf("t[%d]= %d\n",i,t[i]);
}
