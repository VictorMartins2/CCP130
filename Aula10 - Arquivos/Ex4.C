#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define VOWELS "aeiouAEIOU"
#define CONSONANTS "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ"


int main () {

    printf("Digite o nome do arquivo: ");
    char *name; scanf("%s", &name);

    FILE *file = fopen(name, "r");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    char *line = NULL;
    size_t len = 0;

    while (getline(&line, &len, file) != -1) {
        int i = 0;
        while (line[i] != '\0') {
            if (strchr(VOWELS, line[i]) != NULL) {
                printf("%c", 'a');
            } else if (strchr(CONSONANTS, line[i]) != NULL) {
                printf("%c", 'b');
            } else {
                printf("%c", line[i]);
            }
            i++;
        }
        printf("\n");
    }

    return 0;
}