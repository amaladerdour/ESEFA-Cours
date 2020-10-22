#include<stdio.h>
#define N 10
main()
{
    int i,n,t[N],c=0,max;
    printf("donnez une taille");
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&t[i]);
       max=t[0];
        for (i=1;i<n;i++)
            if(max<t[i])
           max=t[i];
        for (i=0;i<n;i++)
                if (t[i]==max)
                c++;
        printf("\n%d\n %d",max,c);





}
