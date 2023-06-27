#include <stdlib.h> 
#include <stdio.h>
 
int main() {
 
    double A,B,nota,media; 
    
    scanf("%lf", &A); 
    scanf("%lf", &B);
    
    A = A * 3.5; 
    B = B * 7.5;
    media = (A + B) / 11;
    printf("MEDIA = %.5lf\n", media);
    
    return 0;
}