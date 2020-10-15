#include<stdio.h>
#include<stdlib.h>

typedef struct Note
{
    float math;
    float PC;
    float SVT;
}Note;
typedef struct setEtudiant
{
    char nom[30];
    char prenom[30];
    Note TNote;
}setE;
void getMoyenne(setE *table);
int main()
{

    int i,n,S=0;
    setE *table;
    printf("saiser le nombre d'etudiant :\n");
    scanf("%d",&n);
    table=(setE*)malloc(n*sizeof(setE));
    //TNote =malloc(3*sizeof(Note));
    for (i=0;i<n;i++)
    {
        printf("etudiant %d:\n",i+1);
        printf("saiser nom et prenom (separe par un espace):\t");
        scanf("%s %s",table[i].nom,table[i].prenom);
        printf("\nsaiser la note d'exam math :\t");
        scanf("%f",&table[i].TNote.math);
        printf("\nsaiser la note d'exam physique:\t");
        scanf("%f",&table[i].TNote.PC);
        printf("\nsaiser la note d'exam SVT :\t");
        scanf("%f",&table[i].TNote.SVT);
        getMoyenne(table);

    }

    //for(i=0;i<n;i++)


    free(table);
    return 0;

}
void getMoyenne(setE *table)
{
    int i;
    int S=0;
    float moyenne;
    for (i=0;i<3;i++)
      S= (S+table[i].TNote.PC+table[i].TNote.SVT+table[i].TNote.math);
    moyenne=S/3;
    S=0;
    printf("la moyenne des note est :%f\n",moyenne);
}
