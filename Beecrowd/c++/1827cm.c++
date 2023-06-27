#include <stdlib.h> 
#include <stdio.h>
#include <math.h> 
#include <memory.h>
int i, j, N, auxN, contador, contadorI,auxContador,valida, verifica, qtdaM;
float base = 2;
int main() {
  while(scanf("%d", &N) != EOF){
    int M[N][N];
    memset(M, 0, sizeof(int)*N*N);
    auxN = N;
    auxN--;
    for(i = 0; i < N; i++){
      for(j = 0; j < N; j++){ 
        if(i ==j){
          M[i][j] = 2;
        } 
      }
    } 
    for(i = 0; i < N; i++){
      M[i][auxN] = 3;   
      auxN--;
    } 

    contadorI = N/3;
    for(i = contadorI; i < N-contadorI; i++){
      for(j = contadorI; j < N-contadorI; j++){  
        M[i][j] = 1;
      }
    }
    contadorI = N/2;
    M[contadorI][contadorI] = 4;

    for(i = 0; i < N; i++){
      for(j = 0; j < N; j++){
        if(j==0){
          printf("%d", M[i][j]);
        }else{
          printf("%d", M[i][j]);
        }
        if(j == N-1){
           printf("\n");
        }
      }
    } 
    printf("\n");
  }
  return 0;
}