#include <stdio.h>

int main(void) {
   int n, valor, i, verifica=1;

  scanf("%d", &n);
   while(n > 0){
      scanf("%d", &valor); 
      if(valor == 1 && valor == 2){ 
        printf("%d nao eh primo\n", valor);   
      }else if(valor > 2){ 
        for(i = 2; i < valor; i++){
          if(valor % i == 0){
            verifica = 2; 
            break;
          }else{ 
            verifica = 1;
          }
        }
      }
      n--; 
     if(verifica == 2){ 
       printf("%d nao eh primo\n", valor);
      }else if(verifica ==1){
       printf("%d eh primo\n", valor);
      }
    }
   return 0;
}
