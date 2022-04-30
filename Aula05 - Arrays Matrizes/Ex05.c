#include <stdio.h>
#include <stdlib.h>

int main (void){
    //int seed =100;
    srand(seed);
    int m[5][6];
    int l,c;
    //Recebendo dados aléatorios 
    for (l=0; l<5; l++){
        for(c=0; c<6; c++){
            m[l][c]= rand()%1001;
        }
    }

    //Exibindo dados
    for(l=0; l<5; l++){
        for(c=0; c<6; c++){
            printf("%4d ", m[l][c]);
        }
        printf("\n");
    }

    // Operações
    int menor=m[0][0];
    int linha=0;
    for(l=0; l<5; l++){
        for(c=0; c<6; c++){
        if(m[l][c]<menor){
            menor=m[l][c];
            linha=l;
        }
        }
    }
    // Máximo da Linha com o menor valor 
    int maior=0;
    int coluna=0;
    for(c=0; c<6; c++){
        if(m[linha][c]>maior){
            maior=m[linha][c];
            coluna=c;
        }
    }
          printf("MINMAX=%d na linha %d coluna %d", m[linha][coluna], linha, coluna);

    return 0;
}