#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

// Declaration des procedures du bonhomme pendu et fonction Random
void pendu1();
void pendu6();
void pendu5();
void pendu4();
void pendu3();
void pendu2();
int menu(int choixJoueurs);
char lireCaractere();
int gagne(int lettreTrouvee[], long tailleMot);
int rechercheLettre(char lettre, char motSecret[], int lettreTrouvee[]);

int main()
{
    int mode2Joueurs=0;
    int NumeroJoueur=0 ;
       char liste[][80] = {"Adresse", "Acquis", "Algorithme", "Bloc-notes", "Byte", "Connexion", "Chaise", "Classe", "Clavier", "Compilation", "Cours", "chiffre", "dossiers", "Driver", "Discussion", "Disque", "Education", "Entier", "Evaluation", "Fichier", "Formatage", "Indice", "Informatique", "information", "Instruction", "Gestion", "Moteur", "Modem", "Moniteur", "Menu", "Network", "Numero", "Note", "Logiciel", "Histoire", "hauheur", "Hypothese", "Internet", "Robot", "reel", "Routeur", "Registre", "java", "Octet", "Ordonnancement", "Pixel", "pendu", "pratique", "quartz", "quater", "rayon", "rapide", "Recherche", "Serveur", "scolaire", "Salle", "Savoir", "Scanneur", "Souris", "Structures", "Systeme", "Table", "Tableau", "Tache", "Travaux", "univers", "urbanisme", "Unite-centrale", "Universite", "utilisateur", "Variable", "Virtuelle", "Webmestre", "Xmodem"};
       char mask[][80] = {"ad_____", "a_q___", "al________", "b__c-n____", "b___", "c_n______", "c___s_", "c__s__", "c__v___", "co_p_______", "c___s", "c__f___", "do______", "d_____", "d____s____", "D__q__", "e____t___", "e____r", "ev________", "__ch___", "f_r______", "i___c_", "__f__m______", "i_f____t___", "I__t___t___", "g___i__", "m_t___", "m___m", "m_n_____", "__nu", "n__w___", "nu____", "n___", "l_g_____", "h_s_____", "h_____r", "hy_______", "i______t", "ro___", "r___", "r__t___", "r_g_____", "j___", "o_t__", "o_d_____c_____", "p_x__", "p___u", "p____q__", "q_a___", "q____r", "r_y__", "r_p___", "r______h_", "s_r____", "_c__a___", "sa___", "s_v___", "s__nn___", "S__r__", "_t__ct____", "sy_____", "t_b__", "t__l___", "t__h_", "t__v___", "u__v___", "_rb______", "u___e-c_____l_", "u__v____t_", "ut_____t___", "v_r_____", "v__t_____", "w_b______", "x__d__"};
       char c, nom[20];
       int i, n = 1, cpt, mot, essai, cpt1,min=0,max=73;
       char pseudo[30],prenom[30],motEntree[100];
       int choixJoueurs = 0, rejouer = 0;
       int *lettreTrouvee = NULL;
       char motSecret[100] = {0}, lettre = 0;
       double coupsRestants = 10, tailleMot = 0;

       printf("Donnez votre nom tout d'abord\n");
       scanf("%s", &nom); //gets(nom) ;

do{
   do{
        do
   {
      printf("\nQue souhaitez vous faire :\n\n");
      printf("1. Jouer Solo ?\n");
      printf("2. Jouer Multijoueurs ?\n");
      printf("Votre choix : ");
      scanf("%d", &choixJoueurs);
      printf("\n\n");
   }
   while (choixJoueurs < 1 || choixJoueurs > 2);

    switch (choixJoueurs)
            {
            case 1:
                printf("Vous avez selectionnez jouer, bonne chance :P\n\n");
                break;

            case 2:
                printf("Ce mode est actuellement indisponible & en cour de developpement...\n\n");
                printf("Bienvenue dans le mode MultiJoueurs ! ;)\n");
                printf("Joueur 1 veuillez entrer votre prenom/pseudo : ");
                scanf("%s", pseudo);
                printf("Joueur 2 veuillez faire de meme : ");
                scanf("%s", prenom);
                printf("\nJe suis enchante de vous rencontrer %s et %s ! ;)", pseudo, prenom);
                printf("\n\n%s veuillez entrer un mot discretement s'il vous plait : ", pseudo);
                scanf("%s", motEntree);
                system("cls");
                break;
           default :
                printf("Veuillez saisir un nombre correct...");
                break;
            }
       } while(choixJoueurs == 0);
   if (choixJoueurs == 1)
    {
          cpt1 = 0;

           srand(time(NULL));
            mot = rand() % (max + 1) + min;;

           system("CLS");
           c = strlen(liste[mot]);
           //Calcul du nombre de lettres cach�es dans le mot
           for (i = 0, cpt = 1; mask[mot][i] != '\0'; i++)
           {
                  if (mask[mot][i] == '_')
                  {
                         cpt++;
                  }
           }
           //Debut du jeu
           printf("\t\tBIENVENUE  %s dans le jeu le PENDU A LA PENDULE !!\n\tVous avez droit a 6 erreurs pour trouver le mot cache.\n\tVeuillez saisir des termes du lexique de l education et l informatique \n\tIndice: Certains termes sont extraits du lexique de systeme d exploitation. \n\t\t\tBONNE CHANCE...\n\n", nom);
           puts(mask[mot]);
           essai = 0;
              do
              {
                     if (cpt > 0 && essai <= 5)
                     {
                            printf("Donnez une lettre:\t ");
                            c = getch();
                            printf("%c\n", c);
                            // cpt1 : Variable a partir de laquelle on pourra savoir si la lettre est valide ( si cpt est decrement� ou pas )
                            cpt1 = cpt;
                            for (i = 0; liste[mot][i] != '\0'; i++)
                            {
                                   if (liste[mot][i] == c && mask[mot][i] == '_')
                                   {
                                          mask[mot][i] = c;
                                          cpt--;
                                   }
                            }
                            // Si la variable cpt � varier alors : selon le nombre d'essais restant
                            if (cpt1 == cpt && essai != 6)
                            {
                                   essai = essai + 1;
                                   printf("\n\nAttention : La lettre \"%c\" n'existe pas parmi les lettres cach\n Il vous reste %d erreurs : Profitez en bien ...\n\n", c, 6 - essai);
                                   switch (essai)
                                   {
                                   case 1:
                                          pendu1();
                                          break;
                                   case 2:
                                          pendu2();
                                          break;
                                   case 3:
                                          pendu3();
                                          break;
                                   case 4:
                                          pendu4();
                                          break;
                                   case 5:
                                          pendu5();
                                          break;
                                   case 6:
                                          pendu6();
                                          break;
                                   default:;
                                   }
                            }
                            puts(mask[mot]);
                     }
              } while (cpt > 1 && essai <= 5);
              // Si le mot est trouv�
              if (cpt && essai <= 5)
              {
                     printf("\n\nBravo !!! Maintenant vous meritez votre vie %s !!! Fantastique...\nLe mot \x82tait bien \"%s\"", nom, liste[mot]);
              }
              // Sinon
              else if (cpt = 0 || essai >= 6)
              {
                     printf("\n %s ... Faites vos dernieres prieres... Vous serez pendu a la pendule hahaha!!!", nom);
              }

              getch();

}


 else
 {
       /*if (choixJoueurs == 2)
        {
             else if (choixJoueurs == 2)
        {*/
            tailleMot = strlen(motEntree);

            lettreTrouvee = malloc(tailleMot * sizeof(int)); // On alloue dynamiquement le tableau lettreTrouvee (dont on ne connaissait pas la taille au départ)
            if (lettreTrouvee == NULL)
                exit(0);

            for (i = 0 ; i < tailleMot ; i++)
                lettreTrouvee[i] = 0;

            printf("%s, a toi de decouvrire le mot secret ! Bonne chance !\n\n", prenom);

            while (coupsRestants > 0 && !gagne(lettreTrouvee, tailleMot))
            {
                printf("Il vous reste %ld coups a jouer", coupsRestants);
                printf("\nQuel est le mot secret ? ");

                /* On affiche le mot secret en masquant les lettres non trouvées
                Exemple : *A**ON */
                for (i = 0 ; i < tailleMot ; i++)
                {
                    if (lettreTrouvee[i]) // Si on a trouvé la lettre n°i
                        printf("%s", motEntree); // On l'affiche
                    else
                        printf("*"); // Sinon, on affiche une étoile pour les lettres non trouvées
                }

                printf("\nProposez une lettre : ");
                lettre = lireCaractere();

                // Si ce n'était PAS la bonne lettre
                if (!rechercheLettre(lettre, motEntree, lettreTrouvee))
                {
                    coupsRestants--; // On enlève un coup au joueur
                }
            }


            if (gagne(lettreTrouvee, tailleMot))
                printf("\n\nGagne ! Le mot secret etait bien : %s\n\n", motEntree);
            else
                printf("\n\nPerdu ! Le mot secret etait : %s\n\n", motEntree);


            free(lettreTrouvee); // On libère la mémoire allouée manuellement (par malloc)
        }


        printf("Voulez vous rejouer : \n\n");
        printf("1. Oui\n");
        printf("2. Non\n");
        printf("Votre choix : ");
        scanf("%d", &rejouer);

    }while(rejouer == 1);


    printf("\nMerci d'avoir joue au jeu du PENDU ! \n\n");
    system("pause");

    return 0;
}
char lireCaractere()
{
    char caractere = 0;

    caractere = getchar(); // On lit le premier caractère
    caractere = toupper(caractere); // On met la lettre en majuscule si elle ne l'est pas déjà

    // On lit les autres caractères mémorisés un à un jusqu'à l'\n
    while (getchar() != '\n') ;

    return caractere; // On retourne le premier caractère qu'on a lu
}


int gagne(int lettreTrouvee[], long tailleMot)
{
    long i = 0;
    int joueurGagne = 1;

    for (i = 0 ; i < tailleMot ; i++)
    {
        if (lettreTrouvee[i] == 0)
            joueurGagne = 0;
    }

    return joueurGagne;
}

int rechercheLettre(char lettre, char motSecret[], int lettreTrouvee[])
{
    long i = 0;
    int bonneLettre = 0;


    // On parcourt motSecret pour vérifier si la lettre proposée y est
    for (i = 0 ; motSecret[i] != '\0' ; i++)
    {
        if (lettre == motSecret[i]) // Si la lettre y est
        {
            bonneLettre = 1; // On mémorise que c'était une bonne lettre
            lettreTrouvee[i] = 1; // On met à 1 le case du tableau de booléens correspondant à la lettre actuelle
        }
    }

    return bonneLettre;
}


void pendu6()
{
       printf("  ___");
       printf("__\n");
       printf(" |   _|_\n");
       printf(" |  |___|\n");
       printf(" |   _|_\n");
       printf(" |    |\n");
       printf(" |   / \\");
       printf("\n_|_\n");
}

void pendu5()
{
       printf("  ___");
       printf("__\n");
       printf(" |    |\n");
       printf(" |\n");
       printf(" |\n");
       printf(" |\n");
       printf(" |\n");
       printf("_|_\n");
}

void pendu4()
{

       printf("  __\n");
       printf(" |\n");
       printf(" |\n");
       printf(" |\n");
       printf(" |\n");
       printf(" |\n");
       printf("_|_\n");
}

void pendu2()
{
       printf(" |\n");
       printf(" |\n");
       printf(" |\n");
       printf("_|_\n");
}

void pendu3()
{
       printf(" |\n");
       printf(" |\n");
       printf(" |\n");
       printf(" |\n");
       printf(" |\n");
       printf("_|_\n");
}

void pendu1()
{
       printf(" |\n");
       printf("_|_\n");
}
int menu(int choixJoueurs)
{
   do
   {
      printf("\nQue souhaitez vous faire :\n\n");
      printf("1. Jouer Solo ?\n");
      printf("2. Jouer Multijoueurs ?\n");
      printf("Votre choix : ");
      scanf("%d", &choixJoueurs);
      printf("\n\n");
   }
   while (choixJoueurs < 1 || choixJoueurs > 2);
   return choixJoueurs;
}
