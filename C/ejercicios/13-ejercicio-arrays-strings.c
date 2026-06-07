#include <stdio.h>
#include <string.h>

int main(){
  char nombres[4][25] = {0};
  int filas = sizeof(nombres) / sizeof(nombres[0]);

  for(int i = 0; i < filas; i++){
    printf("Coloca un nombre: ");
    fgets(nombres[i], sizeof(nombres[i]), stdin);
    nombres[i](strlen(nombres[i]) - 1] = '\0';
  }

  for(int i = 0; i < filas; i++){
    printf("%s\n", nombres[0]);
  }

  return 0;
}
