#include <iostream>
#include <iomanip> 
using namespace std; 

int main() {
  double a, b, c, AreaC, AreaT, AreaTT, AreaQ, AreaR;
  double pi =  3.14159; 
  cin >> a >> b >> c; 
  AreaC = pi*(c*c); 
  AreaT = (a*c)/2;
  AreaTT = ((a + b)*c)/2;
  AreaQ = b*b;
  AreaR = a*b;
  cout.setf(ios::fixed | ios::showpoint);
  cout.precision(3);
  cout << "TRIANGULO: " << AreaT << endl; 
  cout << "CIRCULO: " << AreaC << endl; 
  cout << "TRAPEZIO: " << AreaTT << endl; 
  cout << "QUADRADO: " << AreaQ << endl; 
  cout << "RETANGULO: " << AreaR << endl; 
  
 }