#include <stdio.h> 
#include <stdlib.h> 
int main() {

  int N, X[1000], i, menor, posicaoI,j, valor;  
  scanf("%d", &N);
  for(i=0; i<N; i++){
    scanf("%d", &X[i]);
  }
      menor = X[0];
      posicaoI = 0;
      for(i=1; i<N;i++){ 
        if(menor > X[i]){
          menor = X[i];
          posicaoI = i; 
        }
      }
      printf("Menor valor: %d\n", menor); 
      printf("Posicao: %d\n", posicaoI);
  return 0;
}