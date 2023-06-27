#include <stdlib.h> 
#include <stdio.h>
#include <math.h> 
int A, B, maiorCarta, duplaCarta;

int maxPossibilidade(int A, int B){ 
  
  if(A == B){
   duplaCarta = A;  
  printf("%d\n", duplaCarta);
  }
  else if(A > B){
    maiorCarta = A;
    printf("%d\n", maiorCarta);
  }else{
    maiorCarta = B;
    printf("%d\n", maiorCarta);
  }
  return 0; 
}

int main() {
  scanf("%d %d", &A, &B); 
  maxPossibilidade(A, B);
  return 0;
}