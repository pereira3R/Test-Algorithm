#include <stdlib.h> 
#include <stdio.h>
 
int main() {
 
    int Numero100, Numero50, Numero20, Numero10, Numero5, Numero2, Numero1;
    int Numero050, Numero001, Numero010,Numero005,Numero025, Numer050;  
  double N;
    scanf("%lf", &N);
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
    Numero050 = N / 0.5;
    N = N - (Numero050 * 0.5); 
    Numero025 = N / 0.25; 
    N = N - (Numero025 * 0.25); 
    Numero010 = N / 0.1; 
    N = N - (Numero010 *0.1); 
    Numero005 = N / 0.05; 
    N = N - (Numero005 * 0.05);
    Numero001 = 0.01 + (N / 0.01); 
    N = N - (Numero001 * 0.01);
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", Numero100);
    printf("%d nota(s) de R$ 50.00\n", Numero50); 
    printf("%d nota(s) de R$ 20.00\n", Numero20);
    printf("%d nota(s) de R$ 10.00\n", Numero10); 
    printf("%d nota(s) de R$ 5.00\n", Numero5);
    printf("%d nota(s) de R$ 2.00\n", Numero2); 
    printf("MOEDAS:\n"); 
    printf("%d moeda(s) de R$ 1.00\n", Numero1);
    printf("%d moeda(s) de R$ 0.50\n", Numero050); 
    printf("%d moeda(s) de R$ 0.25\n", Numero025);
    printf("%d moeda(s) de R$ 0.10\n", Numero010); 
    printf("%d moeda(s) de R$ 0.05\n", Numero005);
    printf("%d moeda(s) de R$ 0.01\n", Numero001); 
    return 0;
}