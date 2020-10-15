#include<stdio.h>
int main()
{
    int T[100];
    int ns,nn,np,s,i;
    printf("donner nb l'element a saisir");
    scanf("%d",&ns);
    nn=0;
    np=0;
    s=0;
    for(i=0;i<ns;i++)
    {
        printf("Donnez l'element %d du tableau\n",i);
        scanf("%d",T+i);//scanf("%d",&T[i]);
        s+=T[i];
        if(T[i]<0) np++;
        else nn++;
    }
    printf("la somme= %d \n le nombre des valeur positive %d\n les nombres des valeur negative %d\n",s,nn,np);
}
