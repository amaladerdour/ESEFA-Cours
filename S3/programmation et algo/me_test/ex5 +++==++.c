#include <stdio.h>
#include<stdlib.h>

int getMoyenne(TEdiant *Tab,int n);
int main()
{
    int n=10,i;
    float *Etudioant=malloc(n * sizeof(float));
    typedef struct Etudiant
    {
        char *nom;
        char *prenom;
        float Note[3];
        float moyenne;
    }TEtudiant;
     printf("donner la taile de tableau <3: \t");
    scanf("%d",&n);
    struct TEtudiant[10];
    for(i=0;i<10;i++)
    {
        printf("\ndonner votre Nom :\t");
        scanf("%s",&Etudiant[i].nom);
        printf("\ndonner votre prenom:\t");
        scanf("%s",&Etudiant[i].prenom);
        for(i=0;i<3;i++)
        {
            printf("donner la %d Note\n",i+1);
            scanf("%f",&TEtudiant[i].Note[i]);
        }
    }
    getMoyenne(Note,n);
    return 0;
}

int getMoyenne(TEtudiant *Tab,int n)
{
    int i;
    float somme=0;
    float moyenne;
    for(i=0;i<3;i++)
        somme+=Tab[i];
    moyenne=Somme(Tab,n)/n;
    printf("la moyenne de l'etudiant  Dinar Youssef est :%f\n",moyenne);
return moyenne;
}
