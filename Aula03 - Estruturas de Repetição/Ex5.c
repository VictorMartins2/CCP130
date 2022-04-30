/* Desenvolvimento de Algoritmos
*         Aula 03
*    AUTOR:Victor Martins
*/

#include <stdio.h>

int main(void){
int n, n1, n2, n3;

printf("Digite um número:\n");
scanf("%d", &n);
n1=0;
n2=1;
printf("%d", n1);
printf(" %d", n2);
for (int i=0 ; i<(n-2); i++){
n3 = n1+n2;
printf(" %d" , n3);
n1=n2;
n2=n3;
}
}