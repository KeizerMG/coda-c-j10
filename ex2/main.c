#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *fp = fopen("exercice2.txt", "w");
    char *content = "frere jacques,frere jacques\n"
                    "dormez vous , dormez vous?\n";
    if (fp == NULL)
    {
        printf("Le fichier exercice2.txt n'a pas pu être ouvert\n");
        return EXIT_FAILURE;
    }

    fprintf(fp, "%s", content);
    fclose(fp);
    return 0;

}