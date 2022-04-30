/* Desenvolvimento de Algoritmos
*         Aula 03
*    AUTOR:Victor Martins
*/

#include <stdio.h>

int main(void){

float soma=0;
int valor =0;

while (1){
printf("Digite a idade do visitante:\n");
scanf("%d", &valor);
    if(valor==0){
        break;
    }
    if(valor<2){
        soma=soma+0;
    }
    else if(valor<13){
        soma=soma+14;
    }
    else if(valor>65){
        soma=soma+18;
    }
    else {
        soma=soma+23;
    }

}

printf("O Valor do grupo é %.2f\n", soma);


    return 0;
}