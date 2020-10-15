#include<stdio.h>
#define N 10
main()
{
    int i,t[N],max,imax;
    for (i=0;i<N;i++)

        scanf("%d",&t[N]);
    max=t[0];
    for (i=1;i<N;i++)
        if (max<t[i])

{     max=t[i];
        imax=i;
}
    printf("le max est: %d \n",max);
    printf("l'indice de max est: %d \n",imax);
}
