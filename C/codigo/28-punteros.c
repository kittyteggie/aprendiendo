#include <stdio.h>

void cumple();

int main(){
  int edad = 15;
  int *pEdad = &edad;

  cumple(pEdad);

  printf("Tienes %d años\n", edad);
  return 0;
}

void cumple(int *edad){
  (*edad)++;
}
