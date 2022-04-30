/*Desenvolva um programa que cria um vetor inteiro
 (vetor tradicional). Então,
  apresente cada um dos elementos e seus respectivos endereços.
*/

#include <stdio.h>

int main (void){
    //Declaração de variaveis
    char a, b, c, d, e;
    char *aP= &a, *bP= &b, *cP= &c,*dP= &d, *eP= &e;  

    // Recebendo valores
  printf("Digite a 1ª letra: ");
  scanf(" %c", &a);
    printf("Digite a 2ª letra: ");
  scanf(" %c", &b);
    printf("Digite a 1ª letra: ");
  scanf(" %c", &c);
    printf("Digite a 1ª letra: ");
  scanf(" %c", &d);
    printf("Digite a 1ª letra: ");
  scanf(" %c", &e);

    return 0;
}