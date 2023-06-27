#include <stdlib.h> 
#include <stdio.h>

int main(){
  int soma2=0, soma3=0, soma4=0, soma5=0, N, i, L;
  scanf("%d", &N);
  for(i=0; i<N; i++){
    scanf("%d", &L);
    if(L % 2 == 0) soma2++;
    if(L % 3 == 0) soma3++;
    if(L % 4 == 0) soma4++;
    if(L % 5 == 0) soma5++;
  }
  printf("%d Multiplo(s) de 2\n", soma2);
  printf("%d Multiplo(s) de 3\n", soma3);
  printf("%d Multiplo(s) de 4\n", soma4);
  printf("%d Multiplo(s) de 5\n", soma5);
  return 0;
}
