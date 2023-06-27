#include <stdlib.h> 
#include <stdio.h>
#include <math.h> 
int N, M, C, i, j, cont=0, cont2=0; 
int main() {
  scanf("%d %d %d", &N, &C, &M);
  int vet1[C], vet2[M];
  for(i = 0; i < C; i++){
    scanf("%d", &vet1[i]);
  }
  for(i = 0; i < M; i++){ 
    scanf("%d", &vet2[i]); 
  }
  for(i=0;i<C;i++){
    cont = 0;
    for(j = 0; j < M; j++){ 
      if(vet1[i] == vet2[j]){
        cont++;
        }
      }
      if(cont == 0){
        cont2++;
    }
  }
  printf("%d\n", cont2); 
  return 0;
}
  