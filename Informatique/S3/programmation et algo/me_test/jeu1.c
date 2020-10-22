#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
        // Declarations des variables
        int nombreAllumette = 12;
        int nb, nombreJoueur, nombreOrdinateur = 0;
        do
        {
                // Image des allumettes
                for (nb = 1; nb <= nombreAllumette; nb++)
                {
                        printf ("|  ");
                }
                printf ("\n");
                for (nb = 1; nb <= nombreAllumette; nb++)
                {
                        printf ("|  ");
                }
                printf ("\n");
                for (nb = 1; nb <= nombreAllumette; nb++)
                {
                        printf ("|  ");
                }
                printf ("\n");
                for (nb = 1; nb <= nombreAllumette; nb++)
                {
                        printf ("|  ");
                }
                printf ("\n \n");

                // Nombre d' allumettes que prend le joueur
                printf ("Combien d' allumettes voulez vous prendre ? 1, 2 ou 3 ?  ");
                scanf ("%1d", &nombreJoueur);

                // Calcule du nombre d' allumettes restantes
                nombreAllumette = nombreAllumette - nombreJoueur;
                printf ("Il reste %d allumette(s) !", nombreAllumette);
                printf ("\n\n");

                // Si il reste 0 allumette le joueur a perdu
                if (nombreAllumette == 0)
                {
                        printf ("La partie est terminee ! \n\n");
                        printf ("Vous avez perdu \n\n\n");
                        system("PAUSE");
                        return 0;
                }

                // Image des allumettes
                for (nb = 1; nb <= nombreAllumette; nb++)
                {
                        printf ("|  ");
                }
                printf ("\n");
                for (nb = 1; nb <= nombreAllumette; nb++)
                {
                        printf ("|  ");
                }
                printf ("\n");
                for (nb = 1; nb <= nombreAllumette; nb++)
                {
                        printf ("|  ");
                }
                printf ("\n");
                for (nb = 1; nb <= nombreAllumette; nb++)
                {
                        printf ("|  ");
                }
                printf ("\n \n");

                // Nombre d' allumettes prisent par l' ordinateur
                switch (nombreAllumette)
                {
                        case 1:
                                nombreOrdinateur = 1;
                        break;
                        case 2 :
                                nombreOrdinateur = 1;
                        break;
                        case 3:
                                nombreOrdinateur = 2;
                        break;
                        case 4 :
                                nombreOrdinateur = 3;
                        break;
                        case 5:
                                nombreOrdinateur = 2;
                        break;
                        case 6 :
                                nombreOrdinateur = 1;
                        break;
                        case 7 :
                                nombreOrdinateur = 2;
                        break;
                        case 8 :
                                nombreOrdinateur = 3;
                        break;
                        case 9 :
                                nombreOrdinateur = 2;
                        break;
                        case 10 :
                                nombreOrdinateur = 1;
                        break;
                        case 11 :
                                nombreOrdinateur = 2;
                        break;
                }
                printf ("L' ordinateur prend %d allumette(s). \n" , nombreOrdinateur);

                // Calcule du nombre d' allumettes restantes
                nombreAllumette = nombreAllumette - nombreOrdinateur;
                printf ("Il reste %d allumette(s) !", nombreAllumette);
                printf ("\n\n");

                // Si il reste 0 allumette le joueur a gagne
                if (nombreAllumette == 0)
                {
                        printf ("La partie est terminee ! \n\n");
                        printf ("Vous avez gagne \n\n\n");
                        system("PAUSE");
                        return 0;
                }

        } while (nombreAllumette >= 0);

        system("PAUSE");
        return 0;
}
