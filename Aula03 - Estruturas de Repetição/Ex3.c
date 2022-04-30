/* Desenvolvimento de Algoritmos
*         Aula 03
*    AUTOR:Victor Martins
*/

#include <stdio.h>
#include <math.h>

int main(void){

float perimetro=0;
float x , y , x1 , y1, xi , yi;
 printf("Digite o x da coordenada:\n");
 scanf("%f", &xi);
 printf("Digite o y da coordenada:\n");
 scanf("%f", &yi);
 x1=xi;
 y1=yi;

while (1){
printf("Digite o x da coordenada:\n");
scanf("%f", &x);
    if(x==-99){
        //Calcula Distancia com o ponto inicial
        perimetro = perimetro + sqrt(((xi-x1)*(xi-x1))+((yi-y1)*(yi-y1)));
        break;
    }
printf("Digite o y da coordenada:\n");
scanf("%f", &y);
perimetro = perimetro + sqrt((((x1-x)*(x1-x))+((y1-y)*(y1-y))));
printf("Compri %.2f\n" , sqrt((((x1-x)*(x1-x))+((y1-y)*(y1-y)))));
x1=x;
y1=y;

}

printf("Perímetro total de %.2f\n", perimetro);

    return 0;
}