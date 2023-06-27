#include <stdlib.h> 
#include <stdio.h> 
 
int main() {
  int N, qtdaEscolha=0, i,qtdaCoelho=0, qtdaRato=0, qtdaSapo=0, qtda; 
  double a, b, c; 
  char Tipo;
  scanf("%d", &qtdaEscolha);
  for(i = 1; i <= qtdaEscolha; i++){
    scanf("%d %c", &N, &Tipo);
    if (Tipo == 'R'){ 
      qtdaRato += + N; 
    }if(Tipo == 'C'){ 
      qtdaCoelho += + N; 
    }if(Tipo == 'S'){
      qtdaSapo += + N;
    }
  }  

      qtda = qtdaRato + qtdaSapo + qtdaCoelho;
   
        a = (qtdaCoelho/(qtda*1.0)*100.00);
        b = (qtdaRato/(qtda*1.0)*100.00);
        c = (qtdaSapo/(qtda*1.0)*100.00);
        printf("Total: %d cobaias\n", qtda);
        printf("Total de coelhos: %d\n", qtdaCoelho); 
        printf("Total de ratos: %d\n", qtdaRato);
        printf("Total de sapos: %d\n", qtdaSapo);
        printf("Percentual de coelhos: %.2lf %%\n", a);
        printf("Percentual de ratos: %.2lf %%\n", b);
        printf("Percentual de sapos: %.2lf %%\n", c);
}