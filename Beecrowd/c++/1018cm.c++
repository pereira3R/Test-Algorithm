#include <stdlib.h> 
#include <stdio.h>
 
int main() {
 
    int Numero100, Numero50, Numero20, Numero10, Numero5, Numero2, Numero1;
    int N;    
    scanf("%d", &N);
    printf("%d\n", N);
    Numero100 = N / 100; 
    N = N - (Numero100*100);
    Numero50 = N / 50;
    N = N - (Numero50*50);
    Numero20 = N / 20;
    N = N - (Numero20*20);
    Numero10 = N / 10;
    N = N - (Numero10*10); 
    Numero5 = N / 5; 
    N = N - (Numero5*5);
    Numero2 = N / 2; 
    N = N - (Numero2*2); 
    Numero1 = N / 1; 
    N = N - (Numero1*1); 
    printf("%d nota(s) de R$ 100,00\n", Numero100);
    printf("%d nota(s) de R$ 50,00\n", Numero50); 
    printf("%d nota(s) de R$ 20,00\n", Numero20);
    printf("%d nota(s) de R$ 10,00\n", Numero10); 
    printf("%d nota(s) de R$ 5,00\n", Numero5);
    printf("%d nota(s) de R$ 2,00\n", Numero2); 
    printf("%d nota(s) de R$ 1,00\n", Numero1);
    return 0;
}