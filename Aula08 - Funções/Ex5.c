#include <stdio.h>
#include <stdlib.h>

void magica ( int dia , int mes , int ano ){
  if ((dia*mes)==(ano)-1900){
    printf("A data %d/%d/%d é mágica\n" , dia, mes ,ano);
  }
}


int main (){
int dia , mes , ano;
int i , j , k;
int totaldias;

  
for (i=1901; i<2000 ; i++){
  ano = i;
   for (j=1; j<13 ; j++){
     mes = j;
     if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 ||mes==10 || mes== 12 ){
       totaldias=31;
     }
     else if (mes ==2){
       if((ano%4)==0){
         totaldias=29;
       }
       else {
         totaldias=28;
       }
     }
     else {
       totaldias=30;
     }
     
    for (k=1; k<(totaldias+1); k++){
      dia=k;
      magica (dia, mes, ano);
    }
   }

  } 
}


