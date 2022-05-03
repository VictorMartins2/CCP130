#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){
	//Gerando arquivos pares.txt.
	
	FILE *pares = fopen ("pares.txt", "w");
	
	if(pares == NULL)
	{
		printf("Erro ao abrir arquivo pares.txt");
		exit (1);
	}
	
	for (int i=0; i<1001; i++)
	{
		if((i%2)==0)
		{
			fprintf(pares,"%d\n", i);
		}
	}
		
	fclose(pares);
	
	// Abrindo arquivo somente leitura.
	
	pares=fopen ("pares.txt", "r"); 
	
	//Gerando arquivos paresinvertido.txt
	
	FILE *paresinvertidos = fopen ("paresinvertidos.txt", "w");
	
	if(paresinvertidos == NULL)
	{
		printf("Erro ao abrir arquivos paresinvertidos.txt");
		exit (1);	
	}	
	
	
	//Declarando vetor dinamico, pois não sabemos o tamanho do arquivo 
	int lines=0;  
	int numeros[502];
	char num[100];
	
	//contando o numero de linhas do arquivo
	while(fgets(num,100,pares) != NULL)
	{
		lines++;
		numeros[lines]=atoi(num);
		
	}
	
	for (int i=lines; i>0; i--)
	{
		printf("%d\n", numeros[i]);
		fprintf(paresinvertidos,"%d\n", numeros[i]);	
	}
	
	printf("\n Quantidade de linhas:%d", lines);
	
	
	// Fechando arquivos.
	
	fclose(pares);
	fclose(paresinvertidos);

	return 0;
}