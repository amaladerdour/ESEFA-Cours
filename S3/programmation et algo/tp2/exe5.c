#include <stdio.h>

int main(){
    float T[15];
    int i;

    //1. Saisir tous les éléments du tableau
    for(i=0;i<15;i++){
        do{
            printf("entrez la note No: %d:",i+1);
            scanf("%f", &T[i]);
        }while(T[i]>20 || T[i]<0);
    }
    printf("\n");

    //2. Afficher tous les éléments du tableau.
    for(i=0;i<15;i++){
        printf("T[%d] = %0.2f\n", i, T[i]);
    }
    printf("\n");

    //3. Calculer et afficher la somme de tous les éléments du tableau.
    float somme = 0.0;
    for(i=0;i<15;i++){
        somme+=T[i];
    }
    printf("Somme = %0.2f\n", somme);

    //4. Calculer et afficher la moyenne des notes du tableau.
    float moyen = somme/15;
    printf("Moyen = %0.2f\n", moyen);

    //5. Compter le nombre de notes supérieur à 10.
    int c = 0;
    for(i=0;i<15;i++){
        if(T[i]>10){
            c++;
        }
    }
    printf("Nombre des notes > à 10 = %d\n", c);

    //6. Déterminer la note la plus grande du tableau.
    float note_max = T[0];
    for(i=1;i<15;i++){
        if(T[i] > note_max){
            note_max = T[i];
        }
    }
    printf("La note max = %0.2f\n", note_max);

    return 0;
}
