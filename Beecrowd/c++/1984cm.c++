#include <stdlib.h> 
#include <stdio.h>
#include <math.h> 
#include <memory.h>
int i, j;
int main() {
  long long int a, ultimo; 
  scanf("%llu", &a);
  ultimo = a % 10;
  while(a > 0){
    printf("%llu", ultimo); 
    a = a / 10;
    ultimo = a%10;
  }
  printf("\n");
  return 0;
}