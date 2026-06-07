#include <stdio.h>

int main(){
  int puntuaciones[5] = {0};

  printf("Coloca una puntuación: ");
  scanf("%d", &puntuaciones[0]);

  for(int i = 1; i < 5; i++){
    printf("Coloca otra puntuación: ");
    scanf("%d", &puntuaciones[i])
  }

  for(int i = 0; i < 5; i++){
    printf("%d ", puntuaciones[i]);
  }

  return 0;
}
