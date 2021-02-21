#include <stdlib.h>
#include <stdio.h>

/* Structure de l'element */
struct element{
   int donnee;
   struct element *suivant;
};
typedef struct element maillon;

/* Structure de la file */
struct queue{
   struct element *premier;
   struct element *dernier; 
};

typedef struct queue ma_file;

int main(){
    FILE *fichier ;
    fichier = fopen("file.txt","r");
    fseek(fichier,0L,SEEK_END);

    printf("%ld",ftell(fichier));




    return 0;
}