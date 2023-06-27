#include <iostream> 
#include <set> 
#include <string> 
using namespace std; 

int main(){ 

  string joia;
  set <string> s; 
  while(cin >> joia){
    s.insert(joia); 
  }
  cout << s.size() << endl; 
  
  return 0; 
}
