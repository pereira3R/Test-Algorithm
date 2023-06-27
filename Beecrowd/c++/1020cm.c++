#include <stdio.h> 
#include <stdlib.h> 

int main() {
    
    int ano, calculaAno, calculaMes, calculaDia; 
    scanf("%d", &ano); 
    calculaAno = (ano / 365.); 
    ano = ano - (calculaAno * 365); 
    calculaMes = (ano / 30); 
    ano = ano - (calculaMes * 30);
    calculaDia = ano;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", calculaAno, calculaMes, calculaDia);
 
    return 0;
}