/*Desenvolva um programa que cria um vetor inteiro
 (vetor tradicional). Então,
  apresente cada um dos elementos e seus respectivos endereços.
*/

#include <stdio.h>

int main (void){
    //Declaração de variaveis
    char c[5];
    char *pt= &c; 

    // Recebendo valores
    for (int i=0; i<5 ; i++){
        printf("Digite a %dª letra: ", i);
        scanf("%c", &(pt+i));
    }

    //Exibindo valores
    for (int i=0; i<5; i++){
        printf("Letra: %c", *(pt+1));
    }
    return 0;
}