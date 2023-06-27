#include <stdio.h>

int N,S,B,A,S1,B1,A1,i, somaSaque, somaBloqueio, somaAtaque;
int somaS, somaB, somaA;
char nome[10];

int main() {
  scanf("%d", &N);
  for(i=0;i<N;i++){
    scanf("%s", nome); 
    scanf("%d %d %d", &S, &B, &A); 
    scanf("%d %d %d", &S1, &B1, &A1);
    somaSaque += S; somaS += S1;
    somaBloqueio += B; somaB += B1;
    somaAtaque += A; somaA += A1;
  }
  printf("Pontos de Saque: %.2lf %%.\n", ((double)somaS / somaSaque) * 100);
  printf("Pontos de Bloqueio: %.2lf %%.\n", ((double)somaB / somaBloqueio) * 100);
  printf("Pontos de Ataque: %.2lf %%.\n", ((double)somaA / somaAtaque) * 100);
  return 0;
}