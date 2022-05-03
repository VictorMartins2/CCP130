#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){
// Declaração de variavéis.	
	//Alocação dinamica de vetores, pois não sei a quantidade de numeros no arquivo.
	int *numeros;
	int *numerosunicos;
	
	int lines=0,flag=0, posn=1;//Salva a proxima posição do array numerosunicos.
	char snum [100];//Utilizado para ler o arquivo.
	
	FILE *f_in  = fopen("numeros3.txt" , "r");
	FILE *f_out = fopen("numeros3unicos.txt", "w+");
	

// Erro ao abrir arquivos.	
	if(f_in == NULL || f_out == NULL){
		printf("Erro ao abrir arquivo.");
		exit(1);
	}

//Armazenando numeros do arquivo em um vetor.
	//Alocamento dinamico.



	
	  //Contagem Linhas arquivo
    while(fgets(snum , 100, f_in) != NULL) {
		lines++;
	 }
	 
	lines--;
	rewind(f_in); //Volta o file position para o começo do arquivo. 
	 	
	numeros=(int*)malloc(lines* sizeof(int));
	numerosunicos=(int*)malloc(lines* sizeof(int)); 
	
	// Armazenando numeros arquivos no vetor.
	for(int i=0; i<lines ; i++){
		numeros[i]= atoi(fgets(snum , 100, f_in));
	} 	
	 	

	// Removendo numeros repetidos:
	numerosunicos[0]=numeros[0];
	for (int i=0; i<lines ; i++){
		for (int j=0; j<posn; j++){
			if(numeros[i]==numerosunicos[j]){
				flag=1;
			}
			if(j+1 == posn && flag==0){
				numerosunicos[posn]=numeros[i];
				posn++;
			}
		}
	flag=0;
	}
	
	// Escrevendo no arquivo. 
	for (int i=0; i<posn ; i++){
		fprintf(f_out,"%d\n", numerosunicos[i]);
	}
							
	fclose(f_out);
	fclose(f_in);
	return 0;
}