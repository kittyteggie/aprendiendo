#include <iostream>

int main(){

  int x = 5;
  int y = 6;
  int suma = x + y;

  std::cout << x << '\n';
  std::cout << y << '\n';
  std::cout << suma << '\n';

  double precio = 10.99;
  double temperatura = 25.1;

  std::cout << precio << '\n';
  std::cout << temperatura << '\n';

  char grado = 'A';
  char inicial = 'B';

  std::cout << grado << '\n';
  std::cout << inicial << '\n';

  bool estudiante = true;
  bool enVenta = 1;

  std::cout << estudiante << '\n';
  std::cout << enVenta << '\n';

  std::string nombre = "Alessandro";
  std::string dia = "Sabado";
  std::string comida = "papas fritas";

  std::cout << "Hola " << nombre << ", hoy es " << dia << ", te gustan las " << comida << '\n';

  return 0;
}
