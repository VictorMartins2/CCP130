/* Desenvolvimento de Algoritmos
*         Aula 03
*    AUTOR:Victor Martins
*/

#include <stdio.h>

int main(void){
int num, x;

printf("Digite um número inteiro:\n");
scanf("%d" , &num);
for(int i=2; i<num; i++){
    if((num%i)==0 && num != i){
    x=1;
    break;
    }
    x=0;

}


if(x=1){
    printf("O número %d não é primo.", num);
}
else{
    printf("O número %d é primo", num);
}
return 0;
}