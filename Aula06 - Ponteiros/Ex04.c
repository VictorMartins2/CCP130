#include <stdio.h>

int main (void){
//Declaração de variaveis
    int num[5];
    int *numP= num;
    
//Leitura Vetor
    for (int i=0; i<5; i++){
        printf("Digite o %dº número: " , i+1);
        scanf("%d", &num[i]);
    }

//Exibindo Resultados 

printf("Dobro dos valores digitados:\n");
printf("[ ");

for (int i=0; i<5 ;i++){
    printf("%d ",(*(numP+i)*2));
}

printf("]");
    return 0;
}