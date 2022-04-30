#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define VOWELS "aeiouAEIOU"
#define CONSONANTS "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ"
#define MAX_LENGTH 255


int main () {

    while (1)
    {
        printf("Digite o nome do arquivo: ");
        char name[MAX_LENGTH]; scanf("%s", &name);
        int vowels = 0, consonants = 0;

        FILE *file = fopen(name, "r");


        if (file == NULL) {
            printf("Erro ao abrir o arquivo!\n");
            continue;
        }

        char *line = NULL;
        size_t len = 0;
        while (getline(&line, &len, file) != -1) {
            int i = 0;
            while (line[i] != '\0') {
                if (strchr(VOWELS, line[i]) != NULL) {
                    ++vowels;
                } else if (strchr(CONSONANTS, line[i]) != NULL) {
                    ++consonants;
                }
                ++i;
            }
        }
        fclose(file);

        printf("Vogais: %d\n", vowels);
        printf("Consoantes: %d\n", consonants);
        break;
    }
    

    return 0;
}