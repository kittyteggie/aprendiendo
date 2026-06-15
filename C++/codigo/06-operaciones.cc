#include <iostream>

int main(){
  using namespace std;

  int estudiantes = 20;
  estudiantes++;
  cout << estudiantes << '\n';

  estudiantes = 20;
  estudiantes-=2;
  cout << estudiantes << '\n';

  estudiantes = 20;
  estudiantes*=2;
  cout << estudiantes << '\n';

  estudiantes = 20;
  estudiantes/=2;
  cout << estudiantes << '\n';

  estudiantes = 20;
  int restante = estudiantes % 3;
  cout << restante << '\n';

  estudiantes = 6 - (5 + 4) * 3 / 2;
  cout << estudiantes;
  return 0;
}
