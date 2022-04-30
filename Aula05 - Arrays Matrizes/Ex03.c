#include <stdio.h>
#include <stdlib.h>

int main (void){
    //int seed =100;
    srand(seed);

    int m[12][12];
    int soma=0;

    //Recebendo dados aléatorios 

    for (int l=0; l<12; l++){
        for(int c=0; c<12; c++){
            m[l][c]= rand()%101;
            // Somando a diagonal Principal
                if(l>c){
                    soma=soma+m[l][c];
                }
        }
    }

    //Exibindo dados
    for( int l=0; l<12; l++){
        for(int c=0; c<12; c++){
            printf("%3d ", m[l][c]);
        }
        printf("\n");
    }
    printf("Soma: %d\n", soma);



    return 0;
}