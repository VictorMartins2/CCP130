/* Desenvolvimento de Algoritmos
*         Aula 03
*    AUTOR:Victor Martins
*/

#include <stdio.h>

int main(void){

int soma=0;
int count=0;
int valor =0;

while (1){
printf("Digite um numero:\n");
scanf("%d", &valor);
    if(valor==0){
        break;
    }
soma = soma + valor;
count++;
}

printf("Voce digitou %d numeros\n", count);
printf("O somatorio dos numeros e %d\n", soma);
printf("Media = %d" , soma/count);

    return 0;
}