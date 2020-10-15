#include<stdio.h>
#define N 10
main()
{
    int i,t[N],max,imax;
    for (i=0;i<N;i++){
        printf("saisir les element d'un tableau: %d\n",i+1);
        scanf("%d",&t[i]);}
     max=t[0];
   for (i=1;i<N;i++)

               if (max<t[i])
              {
                max=t[i];
            imax=i;}
   printf("max = %d\n imax = %d \n  ",max,imax);

}
