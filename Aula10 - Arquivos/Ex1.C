#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    // Declaração de Variaveis
    char nome[100];
    int numero = 0;

    // Abrindo arquivos
    FILE *fp;
    fp = fopen("telefones.txt", "w");

    if (!fp)
    {
        printf("Erro ao abrir o arquivo");
        exit(1);
    }

    // Input dados

    while (1)
    {
        printf("Digite o numero:\n");
        scanf("%d%*c", &numero);
        if (numero == 0)
        {
            break;
        }

        printf("Digite um nome:\n");
        fgets(nome, 100, stdin);

        fprintf(fp, "%d  %s", numero, nome);
    }

    // Fechando Arquivos

    fclose(fp);

    return 0;
}
