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

//le programme principal
int main()
{
       //on a cr�e un tableau � deux dimensions(liste[][]) qui contien 80 mots
       char liste[][80] = {"Adresse", "Acquis", "Algorithme", "Bloc-notes", "Byte", "Connexion", "Chaise", "Classe", "Clavier", "Compilation", "Cours", "chiffre", "dossiers", "Driver", "Discussion", "Disque", "Education", "Entier", "Evaluation", "Fichier", "Formatage", "Indice", "Informatique", "information", "Instruction", "Gestion", "Moteur", "Modem", "Moniteur", "Menu", "Network", "Numero", "Note", "Logiciel", "Histoire", "hauheur", "Hypothese", "Internet", "Robot", "reel", "Routeur", "Registre", "java", "Octet", "Ordonnancement", "Pixel", "pendu", "pratique", "quartz", "quater", "rayon", "rapide", "Recherche", "Serveur", "scolaire", "Salle", "Savoir", "Scanneur", "Souris", "Structures", "Systeme", "Table", "Tableau", "Tache", "Travaux", "univers", "urbanisme", "Unite-centrale", "Universite", "utilisateur", "Variable", "Virtuelle", "Webmestre", "Xmodem"};
       char mask[][80] = {"ad_____", "a_q___", "al________", "b__c-n____", "b___", "c_n______", "c___s_", "c__s__", "c__v___", "co_p_______", "c___s", "c__f___", "do______", "d_____", "d____s____", "D__q__", "e____t___", "e____r", "ev________", "__ch___", "f_r______", "i___c_", "__f__m______", "i_f____t___", "I__t___t___", "g___i__", "m_t___", "m___m", "m_n_____", "__nu", "n__w___", "nu____", "n___", "l_g_____", "h_s_____", "h_____r", "hy_______", "i______t", "ro___", "r___", "r__t___", "r_g_____", "j___", "o_t__", "o_d_____c_____", "p_x__", "p___u", "p____q__", "q_a___", "q____r", "r_y__", "r_p___", "r______h_", "s_r____", "_c__a___", "sa___", "s_v___", "s__nn___", "S__r__", "_t__ct____", "sy_____", "t_b__", "t__l___", "t__h_", "t__v___", "u__v___", "_rb______", "u___e-c_____l_", "u__v____t_", "ut_____t___", "v_r_____", "v__t_____", "w_b______", "x__d__"};
       char c; //la lettre qui saisie le joueur
       char *nom = malloc(sizeof(char) * 30);
       int i, n = 1, cpt, mot, essai, cpt1, min = 0, max = 73;
       //saiser le nom de joueur
       printf("Donnez votre nom tout d'abord\n");
       scanf("%s", nom); //ou gets(nom) ;

       do
       {
              cpt1 = 0;
              //g�n�ration un mot au hasard
              srand(time(NULL));              //prendre un des mots au hasard dans la liste
              mot = rand() % (max - min) + 1; // la fonction rand() pour g�n�re un nombre al�atoire, ce nombre soit comprris entre min=0 et max=73 et ce nombre repr�sentent la colone que ce trouve le mot

              system("CLS");          //comme system("clear"),pour effacer tout ce qu'il y a � l'�cran (le nom de joueur qui saisie)
              c = strlen(liste[mot]); //strlen est d�finit dans la biblioth�que "string.h" qui permet de rechercher une lettre dans un mot
              //Calcul du nombre de lettres cachees dans le mot
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
                            c = getch(); //On lit la lettre propos�e par le joueur par la fonction getch(),et on Stocke dans C
                            //Getchar() est une fonction de <stdio.h> qui revient exactement � �crire scanf("%c", &lettre),cette fonction renvoie la lettre que le joueur a tap�.
                            printf("%c\n", c);
                            // cpt1 : Variable a partir de laquelle on pourra savoir si la lettre est valide ( si cpt est decremente ou pas )
                            cpt1 = cpt;
                            /* On affiche le mot qu on a choisi au hasard et en masquant les lettres non trouv�es*/
                            for (i = 0; liste[mot][i] != '\0'; i++)
                            {
                                   if (liste[mot][i] == c && mask[mot][i] == '_')
                                   {
                                          mask[mot][i] = c;
                                          cpt--;
                                   }
                            }
                            // Si la variable cpt a varier alors : selon le nombre d'essais restant
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
              } while (cpt > 1 && essai <= 5); //la boucle se r�p�te tant que le joueur a pass� six erreur ou a trouv� toutes les lettres masqu�es
              // Si le mot cach� est trouv�
              if (cpt && essai <= 5) //si le joueur a gagn�
              {
                     printf("\n\nBravo !!! Maintenant vous meritez votre vie %s !!! Fantastique...\nLe mot \x82tait bien \"%s\"", nom, liste[mot]);
              }
              // Sinon :si le tour n est pas gagn�
              else if (cpt = 0 || essai >= 6)
              {
                     printf("\n %s ... Faites vos dernieres prieres... Vous serez pendu a la pendule hahaha!!!", nom);
              }

              //getch();
              //menu :si le joueur veut recommencer une autre fois
              printf("\n Tappez 0 pour quitter ou 1 pour recommencer\n");
              scanf("%d", &n);

       } while (n != 0);

       free(nom); //On lib�re la m�moire allou�e manuellement (par malloc)
       return 0;
}
//Definition des fonctions utilisees
//si le joueur fait la sixieme erreur
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
//si le joueur fait la cinquieme erreur
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
//si le joueur fait la quatrieme erreur
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
//si le joueur fait la deuxieme erreur
void pendu2()
{
       printf(" |\n");
       printf(" |\n");
       printf(" |\n");
       printf("_|_\n");
}
//si le joueur fait la troisieme erreur
void pendu3()
{
       printf(" |\n");
       printf(" |\n");
       printf(" |\n");
       printf(" |\n");
       printf(" |\n");
       printf("_|_\n");
}
//si le joueur fait la premiere erreur
void pendu1()
{
       printf(" |\n");
       printf("_|_\n");
}
