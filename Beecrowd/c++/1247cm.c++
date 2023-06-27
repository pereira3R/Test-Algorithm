#include <stdlib.h> 
#include <stdio.h>
#include <math.h> 
 
int main() {
 int D, VF, VG;
 double difV, difF; 
  while(scanf("%d %d %d", &D, &VF, &VG) != EOF){
    difF = (12 / (double)VF);
    difV  = (sqrt(144 + D*D) / (double)VG); 
    if(difV <= difF){
      printf("S\n"); 
    }else{
      printf("N\n");
    }
  }
  return 0;
}