#include <stdio.h>
#include <stdlib.h>
int N, i, extremidade, j,extremidadeCopia, k, l,h, o;

int main(){
   while (scanf("%d", &N) ==1){
      extremidade = N / 2;
      for(i=1; i <= N; i += 2){
        for(j=0;j< extremidade;++j)
          printf(" ");
          --extremidade;
        
        for(j=0;j< i;++j)
          printf("*");
          printf("\n");
      }
      extremidade = N / 2;
      for (h = 0; h < extremidade; ++h) printf(" ");
      printf("*\n");
      --extremidade;
      for (h = 0; h< extremidade; ++h) printf(" ");
      printf("***\n\n");
    }
 return 0;
}