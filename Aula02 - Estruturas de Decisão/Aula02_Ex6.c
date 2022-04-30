/* Desenvolvimento de Algoritmos
*         Aula 01
*    AUTOR:Victor Martins
*/

# include <stdio.h>

int main(void){
int sacar;
printf("Digite quanto deseja sacar:");
scanf("%d", &sacar);
printf("%d nota(s) de 100\n", sacar/100);
printf("%d nota(s) de 50\n", (sacar%100)/50);
printf("%d nota(s) de 10\n",((sacar%100)%50)/10);
printf("%d nota(s) de 5\n",(((sacar%100)%50)%10)/5);
printf("%d nota(s) de 1" ,((sacar%100)%50)%5);
return 0;
}