#include <stdlib.h> 
#include <stdio.h>
#include <math.h> 
int i, j, N, contador, auxContador, verifica, qtdaM, M[100][100];
float base = 2;

int preenche(int N){ 
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){  
      M[i][j] = 1;
    }
  }
  return 0;
}

int transforma(int N){ 
  contador = 1;
  auxContador = 0;
  qtdaM = ceil((float)N / base);
  while(qtdaM > 0){
    for(i = contador; i < N-contador; i++){
      for(j = contador; j < N-contador; j++){  
        M[i][j] = contador+1;
      }
    }contador++;
    qtdaM -= 1;
  }
  return 0;
}

int imprime(int N){
  if(N == 1){
     printf("%3d", N);
     printf("\n");
  }else{
    for(i = 0; i < N; i++){
      for(j = 0; j < N; j++){
        if(j==0){
          printf("%3d", M[i][j]);
        }else{
          printf(" %3d", M[i][j]);
        }
        if(j == N-1){
           printf("\n");
        }
      }
    }
  } 
  printf("\n");
  
  return 0;
}

int main() {
  scanf("%d", &N); 
  while(N > 0 && N <= 100){
    if(N == 1 || N == 2){
      preenche(N); 
      imprime(N);
    }else{
      preenche(N);
      transforma(N);
      imprime(N);
    }    
    scanf("%d", &N);
  }
  return 0;
}