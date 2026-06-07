#include <stdio.h>

typedef int Numero;
typedef char String[50];
typedef char Iniciales[3];
int main(){

  Numero x = 3;
  Numero y = 4;
  Numero z = x + y;

  printf("%d\n", z);

  String nombre = "Alessandro";

  printf("%s\n", nombre);

  Iniciales usuario1 = "AB";
  Iniciales usuario2 = "EF";
  Iniciales usuario3 = "IJ";
  Iniciales usuario4 = "JG";

  return 0;
}
