/*Desenvolva um programa que cria um vetor inteiro
 (vetor tradicional). Então,
  apresente cada um dos elementos e seus respectivos endereços.
*/

#include <stdio.h>

int main (void){
    //Declaração de variaveis
    char palavra[5];
    char *pP= palavra;
    
    printf("Digite uma palavra de 5 caracteres:\n");
    for (int i=0; i<5; i++){
        printf("Digite a %dª letra:" , i+1);
        scanf(" %c", &palavra[i]);
    }

    printf("Palavra: %c%c%c%c%c\n", *pP, *(++pP), *(++pP),*(++pP),*(++pP));



    return 0;
}