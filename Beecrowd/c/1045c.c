#include <stdio.h> 
#include <stdlib.h> 
 
int main() {
  double A,B,C; 
  double maior, meio, menor, aux;
  scanf("%lf %lf %lf", &A, &B, &C);
  if(A && B && C){
  if (A < B){
    aux = A;
    A = B; 
    B = aux; 
  }if (B < C){
    aux = B; 
    B = C; 
    C = aux; 
  } 
  if (A < B){
    aux = A; 
    A = B; 
    B = aux; 
  }
    if(A >= (B + C)){ 
      printf("NAO FORMA TRIANGULO\n");
    }else{
      if((A*A) == (B*B + C*C)){
        printf("TRIANGULO RETANGULO\n");
      }else if((A*A) > (B*B + C*C)){ 
        printf("TRIANGULO OBTUSANGULO\n");  
      }else if((A*A) < (B*B + C*C)){
        printf("TRIANGULO ACUTANGULO\n"); 
      }if(A == B &&  B == C){ 
        printf("TRIANGULO EQUILATERO\n");   
      }else if((A == B) || (B == C)){
            printf("TRIANGULO ISOSCELES\n");
        }
     }
  }
    return 0;
}