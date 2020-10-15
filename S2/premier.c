#include<stdio.h>
main(){
    int i,n,c;

    printf("donnez un nombre:  ");
    scanf("%d",&n);
    c=0;

    if(n==1)
        printf("\n%d n'est pas premier\n",n);
    else
        if(n==2)
            printf("\n%d est premier\n",n);
        else {
                for (i=1;i<=n/2;i++)
                    if (n%i==0)
                        c++;

            if (c==1)
                printf("\n%d est premier\n",n);
            else
                printf("\n%d n'est pas premier\n",n);
        }
}


