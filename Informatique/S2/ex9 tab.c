#include<stdio.h>
#define N 10
main()
{
    int i,t[N],n,A;
    printf("donnez une taille >10");
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&t[i]);
A=t[0];
    for(i=0;i<n-1;i++)
        t[i]=t[i+1];
        t[n-1]=A;
        for(i=0;i<n;i++)
           printf("\n%d\n",t[i]);
}
