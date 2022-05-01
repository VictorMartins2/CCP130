#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para contar o numero de linhas de um arquivo
int contarLinhas(char *nomeArquivo)
{
    FILE *arquivo;
    char linha[100];
    int contador = 0;

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        return 0;
    }

    while (fgets(linha, 100, arquivo) != NULL)
    {
        contador++;
    }

    fclose(arquivo);

    return contador;
}

int main()
{
    // Gerando arquivos pares.txt
    FILE *fpares = fopen("pares.txt", "w");

    if (fpares == NULL)
    {
        printf("Erro ao abrir arquivo de saída.\n");
        exit(1);
    }

    int i;
    for (i = 0; i < 1000; i++)
    {
        if (i % 2 == 0)
        {
            fprintf(fpares, "%d\n", i);
        }
    }

    // Abrindo arquivo de saída

    FILE *fparesinvertido = fopen("paresinvertido.txt", "w");

    if (fparesinvertido == NULL)
    {
        printf("Erro ao abrir arquivo de saída.\n");
        exit(1);
    }

    // Gerando arquivos paresinvertido.txt

    int lines = contarLinhas("pares.txt");

    for (i = lines; i > 0; i--)
    {

        fprintf(fparesinvertido, "%d\n", i);
    }

    // Fechando arquivos:

    fclose(fparesinvertido);
    fclose(fpares);

    return 0;
}
