#include <iostream> 
#include <map> 
#include <string> 

using namespace std; 

int main() { 
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int m;
    cin >> m;

    map<string, float> precos;
    for (int j = 0; j < m; j++) {
      string produto;
      float preco;
      cin >> produto >> preco;
      precos[produto] = preco;
    }

    int p;
    cin >> p;
    float total = 0.0;
    for (int j = 0; j < p; j++) {
      string produto;
      int quantidade;
      cin >> produto >> quantidade;
      total += precos[produto] * quantidade;
    }

    cout.precision(2);
    cout << fixed << "R$ " << total << endl;
  }

  return 0; 
}