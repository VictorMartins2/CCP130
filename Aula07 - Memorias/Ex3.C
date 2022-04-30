#include <stdio.h>
#include <stdlib.h>

int main (){
 int *arr;
 int n;

 printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);
arr= calloc (n, sizeof(int));

if(arr==NULL){
    printf("Erro na alocacao de memoria");
    exit(1);
}

for (int i=0; i<n; i++){
    printf("Digite o %d elemento: ", i+1);
    scanf("%d", &arr[i]);
}

for (int i=0; i<n; i++){
    if(*arr<*(arr+(1+i))){
        *arr=*(arr+(1+i));
    }
printf("o maior elemento eh: %d\n", *arr);
free(arr);
arr=NULL;
return 0;
}

}