/* Desenvolvimento de Algoritmos
*         Aula 03
*    AUTOR:Victor Martins
*/

#include <stdio.h>

int main(void){
int num, num1 , num2, num3;

printf("Digite um número\n");
scanf("%d", &num);
num1=1;
for (int i = 0; i<num*2; i++){
    if(((i+1)%2)==0){
        printf("%d %d %d",num1 , (num1*num1)+1, (num1*num1*num1)+1);    
        num1++;
    }
    else{
        printf("%d %d %d",num1 , num1*num1, num1*num1*num1);
    }

}


}