#include <iostream>

int main(){
  using namespace std;
  double x = (int) 3.14;

  cout << x << '\n';

  cout << (char) 100 << '\n';

  int correctos = 8;
  int preguntas = 10;
  double puntaje = correctos/(double)preguntas * 100;

  cout << puntaje << "%" << '\n';

  return 0;
}
