#include <stdio.h>

int main (void){

 float matriz[3][3];


 for (int l=0; l<3 ; l++){
     for(int c=0; c<3; c++){
         printf("End(%d,%d) %p ",l,c, &matriz[l][c]);
     }
     printf("\n");
 }
}