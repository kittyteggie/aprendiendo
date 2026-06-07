#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct{
  char nombre[50];
  int edad;
  float media;
  bool tiempoCompleto;
}Estudiante;

void printEstudiante(Estudiante estudiante);

int main(){
  Estudiante estudiante1 = {"Bob Esponja", 30, 2.5, 1};
  Estudiante estudiante2 = {0};

  strcpy(estudiante2.nombre, "Patricio");
  estudiante2.edad = 36;
  estudiante2.media = 1.0;
  estudiante2.tiempoCompleto = false;

  printEstudiante(estudiante1);
  printEstudiante(estudiante2);
  return 0;
}

void printEstudiante(Estudiante estudiante){
  printf("Nombre: %s\n", estudiante.nombre);
  printf("Edad: %d\n", estudiante.edad);
  printf("Media: %f\n", estudiante.media);
  printf("Tiempo Completo?: %s\n", (estudiante.tiempoCompleto) ? "Si" : "No");
  printf("\n");  
  return;
}
