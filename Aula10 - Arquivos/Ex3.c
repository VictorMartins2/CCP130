#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_INPUT "numeros3.txt"
#define FILE_OUTPUT "numeros3unicos.txt"
#define TRUE 1
#define FALSE 0

void insert_num(int num)
{
    FILE *file = fopen(FILE_OUTPUT, "w");
    if (file == NULL)
    {
        printf("Erro ao abrir arquivo de saída.\n");
        exit(1);
    }

    int flag = FALSE;
    char *line = NULL;
    size_t len = 0;
    while (getline(&line, &len, file) != EOF)
    {
        if (num != atoi(line))
        {
            continue;
        }
        else
        {
            flag = TRUE;
            break;
        }
    }
    if (flag)
    {
        fprintf(file, "%d\n", num);
    }

    fclose(file);
    return;
}

void read_file()
{
    int lines = countlines(FILE_INPUT);
    int *numbers;

    numbers = (int *)malloc(lines * sizeof(int));

    FILE *file = fopen(FILE_INPUT, "r");
    if (file == NULL)
    {
        printf("Erro ao abrir arquivo de entrada.\n");
        exit(1);
    }

    char *line = NULL;
    size_t len = 0;
    while (getline(&line, &len, file) != EOF)
    {
        numbers[lines] = atoi(line);
        printf("%d\n", numbers[lines]);
        insert_num(numbers[lines]);
        lines--;
    }
}

int main()
{
    read_file();
    return 0;
}

int countlines(char *filename)
{
    // count the
    // number of lines in the file called filename
    FILE *fp = fopen(filename, "r");
    int ch = 0;
    int lines = 0;

    if (fp == NULL)
    {
        printf("Error opening file\n");
        return -1;
    }

    lines++;
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\n')
            lines++;
    }
    fclose(fp);

    return lines;
}
