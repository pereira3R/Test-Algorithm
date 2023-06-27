#include <stdio.h>
#include <string.h>
#include <memory.h>

int main(void) {
  int Num, Cont = 0, Flag = 0;
  scanf("%d", &Num);
  setbuf(stdin, 0);
  char Palavra[1000];
  for (int i = 0; i<Num; i++){
    char Vet[30] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
    scanf(" %[^\n]", Palavra);
    for (int i = 0; i<strlen(Palavra); i++){
      for (int j = 0; j<strlen(Vet); j++){
        if (Palavra[i] == Vet[j]){
          Flag = 1;
          Vet[j] = '1';
          break;
        }
      }
      if (Flag){
        Cont++;
      }
      Flag = 0;
    }
    if (Cont == 26){
      printf("frase completa\n");
    } else if (Cont > 12 && Cont < 26){
      printf("frase quase completa\n");
    } else{
      printf("frase mal elaborada\n");
    }
    Flag = 0;
    Cont = 0;
    memset(Palavra, 0, sizeof(Palavra));
  }
}