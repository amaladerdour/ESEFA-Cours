#include<stdio.h>
#define N 10
main()
{
    int i,t[N];
    for (i=0;i<N;i++)
{printf("saisir les elements d'un tabeau %d\t",i+1);
        scanf("%d",&t[i]);
}
for (i=0;i<N;i++)
printf(" les elements d'un tabeau est %d\n ",t[i]);
}
