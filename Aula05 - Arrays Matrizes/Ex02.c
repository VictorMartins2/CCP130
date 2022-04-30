#include <stdio.h>
#include <stdlib.h>

int main (void){
    //int seed =100;
    srand(seed);

    int V[10][5];
    int Vtransposta[5][10];
    //Recebendo dados aléatorios 

    for (int l=0; l<10; l++){
        for(int c=0; c<5; c++){
            V[l][c]= rand()%101;
        }
    }

    //Transpondo Matriz 
    for (int l=0; l<5; l++){
        for (int c=0; c<10; c++){
            Vtransposta[l][c]= V[c][l];
        }
    }

    //Exibindo dados
    for( int l=0; l<10; l++){
        for(int c=0; c<5; c++){
            printf("%3d ", V[l][c]);
        }
        printf("\n");
    }
printf("\n");

    for( int l=0; l<5; l++){
        for(int c=0; c<10; c++){
            printf("%3d ", Vtransposta[l][c]);
        }
        printf("\n");
    }


    return 0;
}