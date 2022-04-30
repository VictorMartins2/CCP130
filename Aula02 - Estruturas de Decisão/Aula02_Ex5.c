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
scanf("%c ", &resp);
printf("Esteve no local do crime?\n");
scanf("%c ", &resp1);
printf("Mora perto da vitima?\n");
scanf("%c ", &resp2);
printf("Devia para a vitima?\n");
scanf("%c ", &resp3);
printf("Ja trabalhou com a vitima?\n");
scanf("%c ", &resp4);
if(resp=='s'){
    soma=soma+1;
}
if(resp1=='s'){
    soma=soma+1;
}
if(resp2=='s'){
    soma=soma+1;
}
if(resp3=='s'){
    soma=soma+1;
}
if(resp4=='s'){
    soma=soma+1;
}


if(soma>=2 && soma>=1){
    printf("SUSPEITO!");
}
else if(soma>2 && soma<=4){
    printf("CUMPLICE!");
}
else if(soma==5){
    printf("ASSASSINO!");
}
else {
    printf("INOCENTE!");
}

return 0;
}