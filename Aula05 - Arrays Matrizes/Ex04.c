#include <stdio.h>
#include <stdlib.h>

int main (void){
    //int seed =100;
    srand(seed);
    int m[10][3];
    int l,c;
    //Recebendo dados aléatorios 
    for (l=0; l<10; l++){
        for(c=0; c<3; c++){
            m[l][c]= rand()%11;
        }
    }

    //Exibindo dados
    for(l=0; l<10; l++){
        for(c=0; c<3; c++){
            printf("%2d ", m[l][c]);
        }
        printf("\n");
    }

    //Exibindo a Menor nota por Aluno
    int menor;
    int prova=0;

    for( l=0; l<10; l++){
        int menor=m[l][0];

        for(c=0; c<3; c++){
            if(m[l][c]< menor){
                menor=m[l][c];
                prova=c;
            }   
        }
        printf("Aluno %d: Menor nota na prova %d com nota %d\n",(l+1), (prova+1), menor);
        prova=0;
    }

    //Exibindo a menor nota por Prova 
    int count=0; 

    for (c=0; c<3; c++){
        menor = m[0][c];
        for(l=0; l<10; l++){
            if(m[l][c]<menor){
                menor=m[l][c];
            }
        }
        for(l=0; l<10; l++){
            if(m[l][c]==menor){
                count++;
            }
        }
    printf("%d aluno(s) ficou(aram) com %d na prova %d\n",count , menor, c+1);
    count=0;
    }

    return 0;
}