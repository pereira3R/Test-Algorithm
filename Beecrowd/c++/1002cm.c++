#include <iostream>
#include <stdlib.h> 
#include <stdio.h> 

using namespace std;
 
int main() {
 
    double n, area, raio; 
    scanf("%lf", &raio);
    n = 3.14159;
    area = n * (raio*raio);
    printf("A=%.4lf\n", area); 
    return 0;
}