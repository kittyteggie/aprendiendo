#include <stdio.h>

int main(){
  FILE *pArchivo = fopen("output.txt", "w");
  char texto[] = "Hola Mundo\n";
  if(pArchivo == NULL){
    printf("Ocurrio un error al intentar abrir el archivo");
    return 1;
  }
  fprintf(pArchivo, "%s", texto);
  printf("El archivo fue escrito correctamente!");
  fclose(pArchivo);
  return 0;
}
