#include <iostream> 
#include <set> 
#include <string> 
using namespace std; 

int main(){ 

  string fruta; 
  int n, contador = 1, t, contadorT = 0; 
  int meio, final; 
  cin >> n; 
  while(contador <= n){ 
    cin >> t; 
    int vet[t];
    contadorT = 0; 
    while(contadorT < t){
      cin >> vet[contadorT];
      contadorT++;    
    }
    meio = t / 2; 
    if(t % 2 != 0){
      cout << "Case " << contador << ": " << vet[meio] << endl; 
    }else{
      if(vet[meio] > vet[meio-1]){
        final = meio;
      }else{
        final = meio -1;
      }
      cout << "Case " << contador << ": " << vet[final] << endl;
    } 
    contador++; 
  }
  
  return 0; 
}
