#include<stdio.h>
main()
{int i,n,s;
    printf("saisir un nombre");
    scanf("%d",&n);
    for (i=1;i<n-1;i++)
        if (n%i==0)
        s=s+i;

    if (s==n)

        printf("%d est parfait",n);
        else
            printf("%d n est parfait",n);
}
