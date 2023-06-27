#include <stdlib.h> 
#include <stdio.h> 
 
int main() {

  int A, B, C, D, E, contadorPar;
  scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
  contadorPar = 0;
  if(A % 2 == 0){
    contadorPar = contadorPar + 1;
  }if(B % 2 == 0){
    contadorPar = contadorPar + 1;
  }if(C % 2 == 0){ 
    contadorPar = contadorPar + 1;
  }if(D % 2 ==0){
    contadorPar = contadorPar + 1;
  }if(E % 2 ==0){
    contadorPar = contadorPar + 1;
  }
  printf("%d valores pares\n", contadorPar);
  return 0;
}