/* Desenvolvimento de Algoritmos
*         Aula 01
*    AUTOR:Victor Martins
*/

# include <stdio.h>

int main(void){
int x;
int y;

scanf("%d" , &x);
scanf("%d" , &y);

if (x==0 && y==0){
    printf("Esta na origem\n");
}
else if(x==0)  {
    printf("Esta no eixo x");
}
else if(y==0){
    printf("Esta no eixo y");
}
else if(x>0 && y>0){
    printf("Q1");
}
else if(x>0 && y<0){
    printf("Q4");
}
else if(x<0 && y>0){
    printf("Q2");
}
else {
    
    printf("Q3");
}

return 0;
}