#include <stdio.h>

int main(void) {
  double N, i, contaP=0, soma=0;
  for(i=0;i<6;i++){
    scanf("%lf", &N);
    if(N > 0){
      soma += N; 
      contaP++;
    }
    if(i == 5){
      printf("%d valores positivos\n", ((int)contaP)); 
      printf("%.1lf\n", (soma/contaP));
    }
  }
  return 0;
}