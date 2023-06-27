#include <stdio.h> 
#include <stdlib.h> 
#include <ctype.h>
int main(){
    char valor[64];
    while(scanf("%s", valor), valor[0] != '-'){
        if(valor[0] == '0' && valor[1] == 'x'){
            int inteiro = strtol(valor, NULL, 16);
            printf("%d\n", inteiro);
        }else{
            int inteiro = atoi(valor);
            printf("0x%X\n", inteiro);
        }
    }
    return 0;
}