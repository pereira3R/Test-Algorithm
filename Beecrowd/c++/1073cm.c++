#include <stdio.h>

int main(void) {
  int N,i, dois=2; 
  scanf("%d", &N);
  if( N > 5 && N < 2000){ 
    for(i=2;i<=N;i+=2){
      printf("%d^%d = %d\n", i, dois, (i*i));
    } 
  }
  return 0;
}