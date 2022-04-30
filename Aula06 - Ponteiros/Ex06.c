#include <stdio.h>

int main (void){

int  V[5];

 for (int i=0; i<5 ; i++){
     printf("Digite o %dº número: " , i+1);
     scanf("%d" , &V[i]);
 }

for(int i=0; i<5; i++){
    if((V[i]%2)==0){
        printf("Endereço da pos%d: %p\n",i, &V[i]);
    }
}

}