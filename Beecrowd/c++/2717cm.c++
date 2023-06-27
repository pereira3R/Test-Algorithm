#include <iostream> 
using namespace std; 

int main(){

    int n, a, b; 
    cin >> n; 
    if(2 <= n <= 100){
      scanf("%d %d", &a, &b);
      if(a >= 1 && b <= 100){
        int soma = 0; 
        soma = a + b; 
        if(soma > n){
          cout << "Deixa para amanha!" << endl; 
        }else{
          cout << "Farei hoje!" << endl; 
        }
      }
    }
    return 0; 

}