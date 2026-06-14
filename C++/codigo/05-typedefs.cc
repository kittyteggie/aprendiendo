#include <iostream>
#include <vector>

// typedef std::string texto_t;
// typedef int numero_t;
using texto_t = std::string;
using numero_t = int;

int main(){
  texto_t primerNombre = "Alessandro";
  numero_t edad = 15;

  std::cout << primerNombre << '\n';
  std::cout << edad << '\n';

  return 0;
}
