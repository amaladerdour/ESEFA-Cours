#include<stdio.h>
main()
{
    int i,taille;
    float t[10], s=0;
    printf("donner une taille: ");
scanf("%d",&taille); //la taille effective du tableau
for(i=0; i<taille; i++)
 {
     printf("saisir les nombres:%d\n",i+1);
scanf("%f",&t[i]);

}
for(i=0; i<taille; i++)
printf("%f\n",t[i]);

for( i=0; i<taille; i++)
s+=t[i];

printf("la somme est:%f",s);
printf("la moyenne est:%f",s/taille);
}
