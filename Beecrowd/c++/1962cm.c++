#include <stdio.h>
#include <stdlib.h> 
#include <math.h> 

int main(void) {
  int N, valor;
  scanf("%d", &N);
  while(N > 0){
    scanf("%d", &valor);
    if(valor > 2015){
      printf("%d A.C.\n", (valor - 2014)); 
    }else if(valor < 2015){
      printf("%d D.C.\n", 2015 - valor); 
    }else{
      printf("1 A.C.\n");
    }
    N--;
  }
  return 0;
}