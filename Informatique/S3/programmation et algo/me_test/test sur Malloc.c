#include<stdio.h>
int main(int argc, char* argv[])
{
    int* memoireAllouee = NULL;
    memoireAllouee = malloc(sizeof(int));
    if (memoireAllouee == NULL)
    {
        exit(0);
    }
    printf("quel age avez-vous ?");
    scanf("%d",memoireAllouee);
    printf("vous avez %d ans\n",*memoireAllouee);
    free (memoireAllouee);
    return 0;
}
