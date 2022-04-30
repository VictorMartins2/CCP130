#include <stdio.h>
#include <stdlib.h>

int main (){
int *v;
int n , soma=0;

printf("Quantidade de números inteiros que deseja armazenar:");
scanf("%d",&n);

v=(int*)malloc(n*sizeof(int));

if(v==NULL){
    printf("Nenhuma mémoria alocada");
    exit(1);
}

for (int i=0;i<n;i++){
    printf("Digite o %dº número:",i+1);
    scanf("%d",&v[i]);
    soma=soma+v[i];'
}

printf("A soma dos números é: %d",soma);
free(v);
V=NULL; 

return 0;

}