#include <stdio.h> 
#include <stdlib.h> 
 
int main() {
  int senha, senhaModelo;
  senhaModelo = 2002;
  while(scanf("%d", &senha) != senhaModelo){
    if(senha == senhaModelo){
      printf("Acesso Permitido\n");
      break;
    }else{
      printf("Senha Invalida\n");
    }
  } 
  return 0;
}