#include <stdio.h>

int main(){
  int numeros[][3] = {{1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}};

  for(int i = 0; i < 3; i++){
    printf("%d ", numeros[i][0]);
    printf("%d ", numeros[i][1]);
    printf("%d\n", numeros[i][2]);
  }

  return 0;
}
