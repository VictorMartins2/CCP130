#include <stdio.h>
#include <stdlib.h>

int main(void){
int V[10];
int count=0;
srand(seed);

//Recebendo variaveis aleatorias
    for(int i=0; i<10; i++){
        V[i] = rand()%101;
    }

// Verificando se é maior do que 50
    for(int i=0; i<10 ; i++){
        if(V[i]>50){
            count++;
        }
    }
 printf("Há %d números maiores que 50 nas posições:", count);

 // Imprimindo posições
     for(int i=0; i<10 ; i++){
        if(V[i]>50){
            printf(" %d", i);
        }
    }
    return 0;
}