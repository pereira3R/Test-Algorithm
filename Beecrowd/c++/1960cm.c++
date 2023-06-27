#include <stdio.h>

int main(void) {
  int N;
  
  scanf("%d", &N);
  if(N > 0 && N < 1000){
  while(N > 0){
    if(N>=500){
      if(N >= 900 && N < 1000){ 
          printf("CM"); 
          N = N - 900; 
      }else{
          printf("D"); 
          N = N - 500; 
        }
      }
      else if(N >= 100 && N < 500){
        if(N>=400){
          printf("CD");
          N = N - 400; 
        }else{ 
          printf("C");
          N = N - 100; 
        }
      }
      else if(N >= 50 && N < 100){
        if(N >= 90){
          printf("XC");
          N = N - 90;
        }else{
          printf("L");
          N = N - 50;
        }
      }
      else if(N >= 10 && N < 50){
        if(N >= 40){
          printf("XL");
          N = N - 40;
        }else{
          printf("X");
          N = N - 10;
        }
      }
      else if(N >= 5 && N < 10){
        if(N>=9){
            printf("IX");
            N = N - 9;
          }else{
            printf("V");
            N = N - 5;
        }
      }
      else{
        if(N>=4 && N <5){
          printf("IV");
          N = N - 4;
        }else{
          
          printf("I"); 
          N = N - 1;
          
        }
      }
    }
  }
  printf("\n");
  return 0;
}