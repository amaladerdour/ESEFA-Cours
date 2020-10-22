#include<stdio.h>
#include<math.h>
int main()
{

   float x ,puissance;
    int y ;
    printf("entre la valeur de x:\n");
    scanf("%f",&x);
    printf("entre la puissance de x:\n");
    scanf("%d",&y);
    puissance=pow(x,y);
     printf("la valeur de x apres la puissance est:%f \n",puissance);
     return 0;
}
