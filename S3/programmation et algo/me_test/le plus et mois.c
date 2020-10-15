  #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int x = rand() % 100;
    int y;
    int i = 0;

    printf("entrez un nombre entre 0 et 100:\n");
    scanf("%d", &y);

    while(y != x){
        if(y<x)
            printf("le nombre chercher et plus grand que %d\n", y);
        else
            printf("le nombre chercher et plus petit que %d\n", y);
        scanf("%d", &y);
        i++;
    }
      printf("\nBravoooo...\n");
    printf("Vous avez trouvé le nombre exacte dans %d iteration(s)", i);

    return 0;
}


