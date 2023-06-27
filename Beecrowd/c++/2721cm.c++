#include <stdio.h>
#include <stdlib.h> 
#include <math.h> 

int main(void) {
  int vet[9], i=0;
  int contaTudo = 0, valor;
  while(i < 9){
    scanf("%d", &vet[i]);
    contaTudo += vet[i];
    i++;
  }
  switch ((contaTudo-1) % 9) {
    case 0: printf("Dasher\n"); break;
    case 1: printf("Dancer\n"); break;
    case 2: printf("Prancer\n"); break;
    case 3: printf("Vixen\n"); break;
    case 4: printf("Comet\n"); break;
    case 5: printf("Cupid\n"); break;
    case 6: printf("Donner\n"); break;
    case 7: printf("Blitzen\n"); break;
    case 8: printf("Rudolph\n"); break;
  }

  return 0;
}