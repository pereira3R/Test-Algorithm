#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main(){
    int valorUser; char valor[1000]; int totalLeds;
    scanf("%d", &valorUser);
    while(valorUser){
        scanf("%s", valor);
        totalLeds = 0;
        for(int i = 0; valor[i] != '\0'; i++){
            if(valor[i] == '0'){
                totalLeds += 6;
            }else if(valor[i] == '1'){
                totalLeds += 2;
            }else if(valor[i] == '2'){
                totalLeds += 5;
            }else if(valor[i] == '3'){
                totalLeds += 5;
            }
            else if(valor[i] == '4'){
                totalLeds += 4;
            }else if(valor[i] == '5'){
                totalLeds += 5;
            }else if(valor[i] == '6'){
                totalLeds += 6;
            }
            else if(valor[i] == '7'){
                totalLeds += 3;
            }else if(valor[i] == '8'){
                totalLeds += 7;
            }else if(valor[i] == '9'){
                totalLeds += 6;
            }
        }
        printf("%d leds\n", totalLeds);
        valorUser--; 
    }

    return 0;
}