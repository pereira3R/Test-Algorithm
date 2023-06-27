#include <stdio.h> 
#include <stdlib.h> 
 
int main() {
 
    double conta, cachorroQ, Xsalada, Xbacon, Torrada, Refrigerante;
    int qtda, i; 
 
    scanf("%i", &i);
    scanf("%i", &qtda);
 
        if(i == 1){
            cachorroQ = 4; 
            conta = qtda * cachorroQ;
            printf("Total: R$ %.2lf\n", conta);
        }else if(i == 2){ 
            Xsalada = 4.5; 
            conta = qtda * Xsalada; 
            printf("Total: R$ %.2lf\n", conta);
        }else if(i == 3){
            Xbacon = 5; 
            conta = Xbacon * qtda;
            printf("Total: R$ %.2lf\n", conta);
        }else if(i == 4){ 
            Torrada = 2; 
            conta = Torrada * qtda; 
            printf("Total: R$ %.2lf\n", conta);
        }else if(i == 5){ 
            Refrigerante = 1.5; 
            conta = qtda * Refrigerante;  
            printf("Total: R$ %.2lf\n", conta);
        }

 
    return 0;
}