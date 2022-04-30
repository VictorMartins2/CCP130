#include <stdio.h>
#include <stdlib.h>

int main (){
    float *notas;
    int n, soma=0;

    printf("Digite o numero de alunos: ");
    scanf("%d", &n);

    notas = (float*) malloc(n * sizeof(float));

    if(notas==NULL){
        printf("Erro na alocacao de memoria");
        exit(1);
    }

    for(int i=0; i<n; i++){
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    printf("A media eh: %f", soma/n);
    free(notas);
    notas=NULL;

    return 0;


}