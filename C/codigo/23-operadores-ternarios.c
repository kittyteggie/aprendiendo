#include <stdio.h>
#include <stdbool.h>

int main(){
  // (condición) ? valor_verdadero : valor_falso;
  int x = 5;
  int y = 6;
  int max = (x > y) ? x : y;

  printf("%d\n", max);

  bool estaEnLinea = 1;

  printf("%s\n", (estaEnLinea) ? "En linea" : "Offline");

  int numero = 8;

  printf("%d es un numero %s\n", numero, (numero % 2 == 0) ? "natural" : "primo");

  int edad = 21;

  printf("%s", (edad > 18) ? "Adulto" : "Menor");

  int horas = 11;
  int minutos = 30;

  printf("%02d:%02d", horas, minutos, (horas < 12) ? "A.M." : "P.M.");
  return 0;
}
