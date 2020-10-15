#include<stdio.h>
#define N 10
main()
{int i,n,t[N],j,aux;
    printf("donnez une taille");
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&t[i]);
    for (i=0;i<n-1;i++)
        for (j=i+1;j<n;j++)
        if (t[i]<t[j])
      {

       aux=t[i];
        t[i]=t[j];
        t[j]=aux;}
        printf("les elements de tableau apr�s le trie est:\n");
        for (i=0;i<n;i++)
            printf("t[%d]=%d\n",i,t[i]);
}
