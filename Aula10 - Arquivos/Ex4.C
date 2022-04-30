#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
    // Declaração de Variaveis
    
    char nome[100];
    char string[100];
    int  vogais=0 , consoantes=0;
  
    // Abrindo arquivos

    printf("Digite o nome do arquivo que deseja ler:");
    fgets(nome, 100 , stdin);

    FILE *fp;
    fp = fopen(nome, "r");

    if(!fp){
        printf("Erro ao abrir o arquivo %s.", nome);
        exit(1);
    }

    // Lendo arquivo 

    while(fscanf(fp,"%c", string) != EOF){
        printf("%c", string);
    } 

   

       //Verificando se é vogal 


    fclose(fp);
    return 0;
   }

    