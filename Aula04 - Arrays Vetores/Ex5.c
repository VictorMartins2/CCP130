#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
int V[20];
int temp;

bool changed;
srand(seed);

//Recebendo variaveis aleatorias
    for(int i=0; i<20; i++){
        V[i] = rand()%201;
    }

//Ordenando Vetor
do{
    changed=false;
for (int i=0; i<19; i++){
    if(V[i]>V[i+1]){
        temp=V[i+1];
        V[i+1] = V[i];
        V[i] = temp;
        changed=true;
    }
}
} while (changed);

for(int i=0; i<20; i++){
    printf("%d " ,V[i]);

}
    return 0;
}