#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int i, posicao, cont=0, k=0, verifica=1;
  char acumula[51];
  char acumulaInverso[51];
  char frase[51];
  scanf("%s", frase);
  for(i=0;i<strlen(frase);i++){
   if(frase[i] == 'a' || frase[i] == 'A'){
     acumula[cont] = 'a';
     cont++;
   }else if(frase[i] == 'e' || frase[i] == 'E'){
     acumula[cont] = 'e';
     cont++;
   }else if(frase[i] == 'i' || frase[i] == 'I'){
     acumula[cont] = 'i';
     cont++;
  }else if(frase[i] == 'o' || frase[i] == 'O'){
    acumula[cont] = 'o';
    cont++;
  }else if(frase[i] == 'u' || frase[i] == 'U'){
    acumula[cont] = 'u';
    cont++;
  }
 }
 for(i = cont-1; i >= 0; i--){
   acumulaInverso[k] = acumula[i];
   k++;
} 
  for(i=0; i<cont;i++){
    if(acumula[i] != acumulaInverso[i]){
      verifica=0;
    }
  }
  if(verifica){
    printf("S\n");
  }else{
    printf("N\n");
  }
  return 0;
}