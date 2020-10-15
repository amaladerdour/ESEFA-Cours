/*
//afficher le type d'un fichier qinsi que sa taille
#include<sys/stat.h>
#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
int main (int argc, char*argv[]){
struct stat buf;
mode_t mode;
if (stat(argv[1],&buf)== -1)
{printf("erreur\n");
exit(1);
}else{
  mode=buf.st_mode;
  printf("num inod=%d \n",buf.st_ino);
  printf("les droits=%o\n",buf.st_mode);
  if(S_ISDIR(mode))
    printf("%s est un répertoire\n",argv[1]);
else if (S_ISREG(mode))
    printf("%s et un tube(pipe)\n",argv[1]);
printf("nbre de liens=%d\n",buf.st_nlink);
printf("taille %s est =%d\n",argv[1],buf.st_size);
}
return 0;
}
*/
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
 if (mkdir("TP",0755)!=0){
        perror("erreur mkdir\n");
        exit(1);
     }
return 0;
}
