#include <stdio.h> 
#include <stdlib.h> 
 
int main() {
  int i, j, h, valorBase1=11, valorBase2=1, contadorPosicao=0;
  double soma=0.00, mat[12][12]; 
  char indicaOperacao;
  scanf("%c", &indicaOperacao); 
  
  for(h=0;h<12;h++){
    for(j=0;j<12;j++){
      scanf("%lf", &mat[h][j]);  
    }
  }for(i=11;i>6;i--){
      for(j=valorBase2;j<valorBase1; j++){
        soma = soma + mat[i][j];
        contadorPosicao++; 
      }
      valorBase1--; 
      valorBase2++;
    }
  if(indicaOperacao == 'M'){
    printf("%.1lf\n", (soma/contadorPosicao));
  }else{ 
    printf("%.1lf\n", (soma));
  }
  return 0;
}