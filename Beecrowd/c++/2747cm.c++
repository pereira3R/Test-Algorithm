#include <stdio.h> 
#include <stdlib.h> 
 
int main() {
    int i, j, h; 
    for(i=1;i<=39;i++){ 
      printf("-"); 
      if(i==39){
        printf("\n");
      }
    }
    for(h=1;h<=5;h++){
      printf("|                                     |\n");
    }
    for(i=1;i<=39;i++){ 
      printf("-"); 
      if(i==39){
        printf("\n");
      }
    }
 
    return 0;
}