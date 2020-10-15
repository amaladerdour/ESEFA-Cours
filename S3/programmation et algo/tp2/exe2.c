#include <stdio.h>

int main(){

    int taille; //declaration la taille du tableau des entiers
    do{ // Cette boucle teste si la taille du tableau est valide ou non (valide si la taille >= 2)
        printf("Donnez la taille du tableau: "); //demander à l'utilisateur de saisire la taille du tableau
        scanf("%d", &taille); //Afficter le nombre saisi par l'utilisateur à la variable 'taille'
    }while(taille < 2);

    int tableau[taille];
    //remplissage du tableau par des nombres entiers saisi par l'utilisateur
    int i;
    for(i=0;i<taille;i++){
        printf("Entrez le nombre numero %d: ", i+1);
        scanf("%d", &tableau[i]); //stocker le nombre saisi par l'utilisateur dans la case i
    }

    //Calculer et Afficher la somme des valeurs du tableau:
    int somme = 0;
    for(i=0;i<taille;i++){
        somme+=tableau[i];/* dans chaque iteration on ajoute la valeur de la case 'i'
        à la derniére valeur de la variable somme*/
    }
    printf("\nsomme = %d\n", somme);

    // Calculer et Afficher le nombre de valeurs négatives et le nombre de valeurs positives.
    int nombre_valeurs_negatives = 0;
    int nombre_valeurs_positives = 0;
    for(i=0;i<taille;i++){
        /*
        ** On va faire un teste sur la valeur 'tableau[i]'
        ** s'elle est infirieure à zero on va incrimenter le nombre des valeurs negative (nombre_valeurs_negatives++)
        ** si non on va incrimenter le nombre des valeurs positives (nombre_valeurs_positives++)
        */
        if(tableau[i]<0){
            nombre_valeurs_negatives++;
        }else{
            nombre_valeurs_positives++;
        }
    }
    printf("\nnombre des valeurs negatives: %d", nombre_valeurs_negatives);
    printf("\nnombre des valeurs positives: %d\n", nombre_valeurs_positives);

    return 0;
}
