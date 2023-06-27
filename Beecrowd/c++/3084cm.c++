#include <stdio.h>
#include <stdlib.h> 


int main(){

    int valueH; int valueM; int H; int M;
    while(scanf("%d %d", &valueH, &valueM) != EOF){
        H = valueH/30;
        M = valueM/6;
        if(H > 9 && M >9){
            printf("%d:%d\n", H, M);
        }else if(H <= 9 && M > 9){
            printf("0%d:%d\n", H, M);
        }else if(H > 9 && M <= 9){
            printf("%d:0%d\n", H, M);
        }else if(H <= 9 && M <= 9){
            printf("0%d:0%d\n", H, M);
        }else if(H == 0 && M == 0){
            printf("00:00\n");
        }else if(H == 0 && M > 9){
            printf("00:%d\n", M);
        }else if(H > 9 && M == 0){
            printf("%d:00\n", H);
        }else if(H == 0 && M <= 9){
            printf("00:0%d\n", M);
        }else if(H <= 9 && M == 0){
            printf("0%d:00\n", H);
        }
    }
    return 0;
}