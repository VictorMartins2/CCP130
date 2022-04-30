#include <stdio.h>

int main(void){
int menor, maior;
float soma, media;


menor=temperaturas[0];
maior=temperaturas[0];
soma=temperaturas[0];

for (int i=1; i<8 ; i++){
    if(temperaturas[i]<temperaturas[i-1]){
        if(temperaturas[i]<menor){
        menor=temperaturas[i];
        }
    }
    if(temperaturas[i]>temperaturas[i-1] && temperaturas[i]>maior){
        maior=temperaturas[i];
    }
    soma=soma+temperaturas[i];
}
    media=soma/8;
    printf("O menor valor é %d\n", menor);
    printf("O Maior valor é %d\n", maior);
    printf("A média de temperaturas é %.1f\n", media);
    return 0;
}