#include <stdlib.h> 
#include <stdio.h> 
 
int main() {

  int dia1, dia2, hora1, minuto1, segundo1, hora2, minuto2, segundo2;
  int conta=0, calMinutos, calHoras, calDia, calculaSegundos1, calGasto, calculaSegundos2, calculaSegundos, calSegundos, calTotal;

  scanf("Dia %d\n", &dia1);
  scanf("%d : %d : %d\n", &hora1, &minuto1, &segundo1);
  scanf("Dia %d\n", &dia2);
  scanf("%d : %d : %d", &hora2, &minuto2, &segundo2);

  if(dia2 < 31){
    calculaSegundos1 = abs(dia1*86400) + hora1*3600 + minuto1*60 + segundo1;
    calculaSegundos2 = abs(dia2*86400) + hora2*3600 + minuto2*60 + segundo2;
    calTotal = abs(calculaSegundos1 - calculaSegundos2); 
    calGasto = (calTotal / 86400);
    calTotal = (calTotal % 86400);
    calHoras = calTotal / 3600; 
    calTotal = (calTotal%3600);
    calMinutos = (calTotal / 60); 
    calTotal = (calTotal%60);
    calSegundos = calTotal;
    
    printf("%d dia(s)\n", calGasto);
    printf("%d hora(s)\n", calHoras); 
    printf("%d minuto(s)\n", calMinutos); 
    printf("%d segundo(s)\n", calSegundos);
  }

  return 0;
}