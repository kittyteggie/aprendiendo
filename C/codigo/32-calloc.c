#include <stdio.h>
#include <stdlib.h>

int main(){
  int numero = 0;
  printf("Coloca el numero de jugadores: ");
  scanf("%d", &numero);

  int *puntuaciones = calloc(numero, sizeof(int));

  if(puntuaciones == NULL){
    printf("Error en la asignación de memoria!");
    return 1;
  }

  for(int i = 0;i < numero; i++){
    printf("Coloca la puntuación numero %d: ", i + 1);
    scanf("%d", &puntuaciones[i]);
  }
  for(int i = 0;i < numero;i++){
    printf("%d", puntuaciones[i]);
  }

  free(puntuaciones);
  puntuaciones = NULL;
  return 0;
}
