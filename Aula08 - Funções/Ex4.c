#include <stdio.h>
#include <stdlib.h>

void exponencial(int numero, int*base, int*expoente){
  int dividendo=numero;
  *base = 2;
  *expoente = 0;


  do{
    // Em caso de numero 0 o expoente é 1
    if(numero ==0){
     *expoente = 1;
     break;
    }

    if(numero == 1){
      *expoente = 0;
      break;
    }


    // Resto igual a 0 então incrementa expoente , divide e armazena o novo dividendo. 
    
    if(dividendo%(*base)==0){
      *expoente = *expoente+1;
      dividendo = dividendo/(*base);
    }
   

   // Resto diferente de Zero, então tenta proxima base. 
    else{
      dividendo=numero;
      *expoente=0;
      *base = *base+1;
    }

    }while(dividendo!=1);
}   
    int main (){
int numero, base=2, expoente=0; 

printf("Digite um numero inteiro:");
scanf("%d", &numero);

exponencial(numero, &base, &expoente);
printf("%d^%d = %.0f\n", base, expoente, pow(base, expoente));

}