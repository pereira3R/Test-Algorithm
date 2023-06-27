#include <iostream> 
#include <map> 
#include <vector>
#include <string> 
using namespace std; 

int main(){ 

  int pessoas; 
  string nome, presente, p1, p2, p3; 
  cin >> pessoas; 
  
  map<string, vector<string>> lista_presentes;
  
  for(int i = 0; i < pessoas; i++){
    cin >> nome >> p1 >> p2 >> p3; 
    lista_presentes[nome] = {p1, p2, p3};
  }

  while(cin >> nome >> presente){
    if(lista_presentes.count(nome) == 0){ 
      cout << "Tente Novamente!\n";
    }
    else{
      bool acertou = false;
      for(auto opcao : lista_presentes[nome]){ 
        if(opcao == presente){
          cout << "Uhul! Seu amigo secreto vai adorar o/\n";
          acertou = true;
          break;
        }
      }
      if(!acertou){
        cout << "Tente Novamente!\n";
      }
    }
  }
  return 0; 
}