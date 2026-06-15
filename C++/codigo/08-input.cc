#include <iostream>

int main(){
  using namespace std;
  string nombre;
  int nombre;

  cout << "Cual es tu nombre completo?: ";
  getline(cin >> ws, nombre);

  cout << "Cual es tu edad?: ";
  cin >> edad;

  cout << "Hola " << nombre << '\n';
  cout << "Tienes " << edad;
  return 0;
}
