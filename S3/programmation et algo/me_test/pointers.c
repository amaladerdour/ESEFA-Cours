
#include<stdio.h>
//Incrémentation et décrémentation des pointeurs (tableux 1D)
int main(){

     int age[]={10,20,50,12,30};
     int *p,i;
       p= age;
      /* printf("la valeur de 1 age = %d\n",*p);
       p++;
       printf("la valeur de 2 age = %d\n",*p);
       p++;
       printf("\n----------------------------\n");*/
       for (i=0;i<5;i++)
        {printf("la valeur de %d age = %d\n",i,*p);
       p++;}

return 0;
}
