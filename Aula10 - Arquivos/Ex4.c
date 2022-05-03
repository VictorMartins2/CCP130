#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VOWELS "aeiouAEIOU"
#define CONSONANTS "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ"

int main()
{
	char filename[100]; // Nome do arquivo
	int op = 0;			// Utilizado para digitar novamente o nome do arquivo...
	int vogais = 0, consoantes = 0;
	char str[100];
	FILE *file;

	/*Laço  de repetição para permitir o usuario
	digitar novamente o nome do arquivo em caso de erro.*/
	while (1)
	{
		printf("Digite o nome do arquivo:\n");
		scanf("%s", &filename);
		file = fopen(filename, "r");

		if (file == NULL)
		{
			printf("Erro ao abrir arquivo... digite 1 para tentar novamente:\n");
			scanf("%d%*c", &op);

			if (op)
			{
				continue;
			}
			else
			{
				break;
			}
		}
		else
		{
			break;
		}
	}

	// Varrendo o arquivo e contando vogais e consoantes.

	while (fgets(str, 100, file) != NULL)
	{
		// printf("%s", str);
		for (int i = 0; i < strlen(str); i++)
		{
			if (strchr(VOWELS, str[i]) != NULL)
			{
				vogais++;
			}
			else if (strchr(CONSONANTS, str[i]) != NULL)
			{
				consoantes++;
			}
		}
	}

	// Exibindo resultados:
	printf("\nVogais: %d, Consoantes: %d", vogais, consoantes);

	// Fechando arquivo,
	fclose(file);

	return 0;
}