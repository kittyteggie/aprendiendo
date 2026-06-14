#include <iostream>

namespace MiNamespace {
  int x = 2;
  int y = 3;
}

namespace sumar {
  using namespace MiNamespace;
  int z = x + y;
}

int main(){
  using namespace sumar;
  using namespace std;
  cout << z;
  return 0;
}
