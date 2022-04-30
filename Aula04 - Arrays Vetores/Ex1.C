#include <stdio.h>

int main(void){
 int V[10]; 

//Recebendo Dados:
    for (int i=0; i<10; i++){
        scanf("%d", &V[i]);
    }

printf("Abaixo estão os números que atendem a condição\n");

    for(int i=2; i<10; i++){
        if(V[i]>(V[(i-1)]+V[i-2])){
            printf("%d\n", V[i]);
        }
    }

    return 0;
}