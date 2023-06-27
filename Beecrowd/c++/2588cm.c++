#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0

int main(){

  int buscaP[200];
  int i, addPalavra;
  char palavras[1010];

  while (scanf("%s", palavras) != EOF){

    i = 0;
    memset(buscaP, 0, sizeof(buscaP));

    while (palavras[i]){
      buscaP[palavras[i++]]++;
    }
    for (i = 0, addPalavra = 0; i < 200; ++i){
      if (buscaP[i] & 1)
        ++addPalavra;
    }
    printf("%d\n", addPalavra <= 1 ? 0 : addPalavra - 1);
  }
  return 0;
}