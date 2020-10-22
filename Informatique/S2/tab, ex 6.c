#include<stdio.h>
#define N 5
main ()
{
    int i,t[N],n,val,c=0;
    printf("donnez une taille >6:");
    scanf("%d",&n);
     for (i=0;i<n;i++)
         scanf("%d",&t[i]);
    printf("donnez la valeur recherche: ");
    scanf("%d",&val);
    for (i=0;i<n;i++)
        if(val==t[i])
        c++;
    printf("%d\n",c);
}
