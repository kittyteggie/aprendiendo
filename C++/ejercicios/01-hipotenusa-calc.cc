#include <iostream>
#include <cmath>

int main(){
  using namespace std;
  double a;
  double b;
  double c;

  cout << "Coloque el lado A: ";
  cin >> a;

  cout << "Coloque el lado B: ";
  cin >> b;

  c = sqrt(pow(a, 2) + pow(b, 2));

  cout << "Lado C: " << c;
  return 0;
}
