#include <stdio.h>

int main(){
  int numeros[] = {10, 20, 30, 40, 50};
  char grados[] = {'A', 'B', 'C', 'D', 'E', 'F'};
  char nombre[] = "Alessandro";

  numeros[0] = 100;
  numeros[1] = 90;
  numeros[2] = 80;
  numeros[3] = 70;
  numeros[4] = 60;

  printf("%d\n", numeros[0]);
  printf("%c\n", grados[3]);
  printf("%c\n", nombre[2]);

  for(int i = 0; i < 11; i++){
    printf("%c", nombre[i]);
  }

  printf("\n%d\n", sizeof(numeros));
  printf("%d\n", sizeof(numeros[1]));

  int tamaño = sizeof(numeros) / sizeof(numeros[0]);

  return 0;
}
