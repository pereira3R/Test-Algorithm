#include <stdio.h> 
#include <stdlib.h> 
 
int main() {
 
  int a, b, c, MaiorAB, MaiorAC; 
 
   scanf("%d", &a); 
   scanf("%d", &b); 
   scanf("%d", &c);
   
   MaiorAB = (a + b +abs(a - b))/2;
   MaiorAC = (MaiorAB + c + abs(MaiorAB - c))/2;
 
   printf("%d eh o maior\n", MaiorAC);
    return 0;
}