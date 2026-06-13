#include <stdio.h>
#include <stdlib.h>

int main(){
  int numero = 0;
  printf("Pon el numero de grados: ");
  scanf("%d", &numero);

  char *grados = malloc(numero * sizeof(char));

  if(grados == NULL){
    printf("Error en la asignación de memoria!");
    return 1;
  }

  for(int i = 0;i < numero;i++){
    printf("Coloca el grado numero %d: ", i + 1);
    scanf(" %c", &grados[i]);
  }
  for(int i = 0;i < numero;i++){
    printf("%c\n", grados[i]);
  }

  free(grados);
  grados = NULL;
  return 0;
}
