#include <iostream> 
#include <iomanip>
using namespace std; 

int main(){ 
  int vet[5], i, j;
  int counterP, counterI, counterPP, counterN; 
  counterP = counterI = counterPP = counterN = 0;
  for(i=0;i<5;i++){ 
    cin >> vet[i]; 
    if(i == 4){ 
      for(j=0;j<5;j++){
        if(vet[j] % 2 == 0){ 
          counterP++; 
        }else if(vet[j] % 2 != 0){ 
          counterI++; 
        }
        if(vet[j] > 0){ 
          counterPP++; 
        }else if(vet[j] < 0){
          counterN++; 
        }
      }
    }
  }
  cout << counterP << " valor(es)" << " par(es)" << endl; 
  cout << counterI << " valor(es)" << " impar(es)" << endl; 
  cout << counterPP << " valor(es)" << " positivo(s)" << endl; 
  cout << counterN << " valor(es)" << " negativo(s)" << endl; 
  return 0; 
}