#include <stdio.h>

int main(){
  FILE *pArchivo = fopen("input.txt", "r");
  char buffer[1024] = {0};
  if(pArchivo == NULL){
    printf("Ocurrio un error al intentar abrir el archivo");
    return 1;
  }
  while(fgets(buffer, sizeof(buffer), pArchivo) != NULL){
    printf("%s", buffer);
  }
  fclose(pArchivo);
  return 0;
}
