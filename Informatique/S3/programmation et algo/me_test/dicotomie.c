#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void function(float);
int main()
{
    float a,b,c,eps=1/(10^2);
    scanf("%f%f",&a,&b);

    if ((function(a)* function(b)) > 0)
        printf("chenger %f et %f\n",a,b);
      else
        c=(a+b)/2;
        function(c);
    if  ( abs (function(c)) < eps)
        printf("%f",c);
    else
        if (function(a)*function(b)<0)
       {

        a=a;
        b=c;
        }
        else
            a=c;
            b=b;
return (0);
}
void function(float x)
{

    return pow(x,2)-2;
}
