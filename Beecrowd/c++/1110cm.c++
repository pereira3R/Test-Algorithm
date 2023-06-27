#include <iostream>
#include <queue> 
#include <vector> 
using namespace std;

int main() {
  int n; 
  cin >> n; 
  while(n){
    queue <int> q;
    int j = 0, top;
    vector <int> p(n);
    for(int i = 1; i <= n; i++){ 
      q.push(i);
    }
    while(q.size() >= 2){ 
      p[j] = q.front();
      q.pop();
      top = q.front();
      q.pop();
      q.push(top); 
      j++; 
    }
    if (n == 1){
      cout << "Discarded cards:" << endl;
      cout << "Remaining card: 1" << endl;
    } else{
      cout << "Discarded cards: ";
      for(int i = 0; i < (n-1); i++){
        if (i == (n-2)){
          cout << p[i] << endl;  
        } else{
          cout << p[i] << ", ";
        }
      }
      cout << "Remaining card: ";
      cout << q.front() << endl;
    }
    cin >> n; 
  }
  return 0;
}