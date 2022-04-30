/* Desenvolvimento de Algoritmos
*         Aula 01
*    AUTOR:Victor Martins
*/

# include <stdio.h>

int main(void){
float salario;
float novo_salario;
float reajuste;
printf("Digite o salario:\n");
scanf("%f" , &salario);

if (salario<=400){
    reajuste=15;
}
else if(salario<=800) {
     reajuste=12;
}
else if(salario<=1200){
    reajuste=10;
}
else if(salario<=2000){
     reajuste=7;
}
else {
     reajuste=4;
}

novo_salario= salario + (salario*(reajuste/100));
printf("Novo salario= %.2f\n", novo_salario);
printf("Valor do reajuste = %.2f\n", novo_salario - salario);
printf("Indice do reajuse = %.0f\n" , reajuste);

return 0;
}