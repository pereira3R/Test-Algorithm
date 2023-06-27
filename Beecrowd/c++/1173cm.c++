#include <stdio.h> 
#include <stdlib.h> 
 
int main() {

  int V, i, N[10]; 
  scanf("%d", &V); 
  if(V <= 50){
    for(i=0;i<=9;i++){ 
        N[i] = V;
        printf("N[%d] = %d\n", i, N[i]);
        V *= 2;
    }
  }
  return 0;
}