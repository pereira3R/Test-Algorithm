#include <stdlib.h>
#include <stdio.h> 

int main(){
    int pontuacaoJ = 0; int pontuacaoM = 0;
    int valorUser; int valorFixed; int x, d;
    scanf("%d", &valorUser);
    while(valorUser){
        pontuacaoJ = 0;
        pontuacaoM = 0;
        valorFixed = 6;
        while(valorFixed){
            scanf("%d %d", &x, &d);
            if(valorFixed > 3){
                pontuacaoJ = pontuacaoJ + (x*d);
            }else{
                pontuacaoM = pontuacaoM + (x*d);
            }
            valorFixed--;
        }
        valorUser--;
        if(pontuacaoJ >= pontuacaoM){
            printf("JOAO\n");
        }else{
            printf("MARIA\n");
        }
    }
    return 0;
}