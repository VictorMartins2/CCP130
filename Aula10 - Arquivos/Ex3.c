#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_INPUT "numeros3.txt"
#define FILE_OUTPUT "numeros3unicos.txt"
#define TRUE 1
#define FALSE 0

void insert_num(int num) {
    FILE *file = fopen(FILE_OUTPUT, "w");
    if (file == NULL){
        printf("Erro ao abrir arquivo de saída.\n");
        exit(1);
    }
    int flag = FALSE;
    char *line = NULL;
    size_t len = 0;
    while (getline(&line, &len, file) != -1) {
        if (num != atoi(line)) {
            continue;
        } else {
            flag = TRUE;
            break;
        }
    }
    if (flag) {
        fprintf(file, "%d\n", num);
    }

    fclose(file);
}


int main () {
    return 0;
}




