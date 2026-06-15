#include <iostream>
#include <cmath>

int main(){
  using namespace std;
  double x = 3;
  double y = 4;
  double z;

  z = max(x, y);
  cout << z << '\n';

  z = min(x, y);
  cout << z << '\n';

  z = pow(2, 3);
  cout << z << '\n';

  z = sqrt(9);
  cout << z << '\n';

  z = abs(-3);
  cout << z << '\n';

  x = 3.1415926536;
  z = round(x);
  cout << z << '\n';

  z = ceil(x);
  cout << z << '\n';

  x = 3.99;
  z = floor(x);
  cout << z << '\n';
  return 0;
}
