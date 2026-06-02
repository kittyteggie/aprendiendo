#include <stdio.h>

int main(){

  char frutas[][10] = {"Manzana", "Banana", "Coco"}
  int tamaño = sizeof(frutas) / sizeof(frutas[0]);

  frutas[0][0] = 'e';
  frutas[0][6] = 'a';

  for(int i = 0; i < tamaño; i++){
    printf("%s\n", frutas[i]);
  }

  return 0;
}
