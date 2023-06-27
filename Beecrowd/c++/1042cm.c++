#include <iostream> 
#include <iomanip>
using namespace std; 

int main(){ 
  int i, j;
  int vet[3], a, b, c, bkp;
  cin >> vet[0] >> vet[1] >> vet[2]; 
  a = vet[0];
  b = vet[1]; 
  c = vet[2];
  for(i=0;i<3;i++){ 
    for(j=0;j<3;j++){ 
      if(vet[i] < vet[j]){ 
        bkp = vet[j]; 
        vet[j]= vet[i];
        vet[i] = bkp;
      }
    }
  }
  cout << vet[0] << "\n" << vet[1] << "\n" << vet[2] << endl;
  cout << endl;
  cout << a << "\n" << b << "\n" << c << endl;
  return 0; 
}