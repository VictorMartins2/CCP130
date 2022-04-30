#include <stdio.h>
#include <stdbool.h>

int main (void){

    //int matriz[4][4] = {{ 1,  1,  1, -1}, {-1,  1,  1,  1}, { 1,  1, -1,  1}, { 1, -1,  1,  1}};
    int somal, somac , somad, somad2;
    int indice=3;
    int l,c,linha, coluna;
    bool perfeito=true;
    //Inicializando Variaveis 
    somal=0;
    somac=0;
    somad=0;
    somad2=0;
    linha=0;
    coluna=0;

    //Exibindo dados e pegando somatoria das diagonais. 
    for(l=0; l<4; l++){
        for(c=0; c<4; c++){
            if(l==c){
                somad=somad+matriz[l][c];
            }
            if(c==indice){
                somad2=somad2+matriz[l][c];
                indice--;
            }
            printf("%2d ", matriz[l][c]);
        }
        printf("\n");
    }
    // Verificando se a soma da linha e igual a da coluna; 
   if(somad==somad2){
       do{
        //Soma Linha
        for(c=0; c<4; c++){
            somal=somal+matriz[linha][c];
        }
        //Soma Coluna
        for(l=0; l<4; l++){
            somac=somac+matriz[l][coluna];
        }

        if(somal==somac){
            linha++;
            coluna++;
        }
        else{
            perfeito=false;
        }


       }while(perfeito && linha<3);


   }
   else {
       perfeito=false;
   }

    if(perfeito && somad==somad2){
        printf("Essa matriz forma o quadrado mágico");
    }
    else{
        printf("Essa é uma Matriz comum");
    }

    return 0;
}