/* Desenvolvimento de Algoritmos
*         Aula 01
*    AUTOR:Victor Martins
*/

# include <stdio.h>

int main(void){
int soma=0; 
char resp, resp1,resp2,resp3,resp4;

printf("Responda as perguntas com sim (s) ou nao (n)\n");
printf("Telefonou para a vitima?\n");
scanf("%c", &resp);
printf("Esteve no local do crime?\n");
scanf("%c", &resp1);
printf("Mora perto da vitima?\n");
scanf("%c", &resp2);
printf("Devia para a vitima?\n");
scanf("%c", &resp3);
printf("Ja trabalhou com a vitima?\n");
scanf("%c", &resp4);

if(soma>=2){
    printf("SUSPEITO!");
}
else if(soma>2 && soma<=4){
    printf("CUMPLICE!");
}
else if(soma==5){
    printf("ASSASINO!");
}
else {
    printf("INOCENTE!");
}

return 0;
}