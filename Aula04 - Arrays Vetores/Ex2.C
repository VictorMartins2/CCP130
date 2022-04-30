#include <stdio.h>

int main(void){

int menor;
menor=T[0];

for (int i=1; i<4 ; i++){
    if(T[i]<T[i-1] && T[i]<menor){
        menor=T[i];
        }
}
    printf("O menor valor é %d", menor);
    return 0;
}