#include <stdio.h>
#include <ctype.h>

int main(){
  char preguntas[][100] = {"Cual es el planeta mas grande del sistema solar?","Cual es el planeta mas caliente?","Cual es el planeta con mas lunas?","La tierra es plana?"};
  char opciones[][100] = {"A. Jupiter\nB. Saturno\nC. Urano\n Neptuno","A. Mercurio\nB. Venus\nC. Tierra\nD. Marte","A. Tierra\nB. Marte\nC. Jupiter\nD. Saturno","A. Si\nB. No\nC. Probablemente\nD. Depende del clima"};
  char respuesta[] = {'A','B','D','B'};
  int contarPreguntas = sizeof(preguntas) / sizeof(preguntas[0]);
  char input = '\0';
  int puntuacion = 0;

  printf("*** QUIZ ***\n");

  for(int i = 0; i < contarPreguntas; i++){
    printf("\n%s\n", preguntas[i]);
    printf("\n%s\n", opciones[i]);
    printf("Coloca tu respuesta: ");
    scanf(" %c", &input);
    input = toupper(input);
    if(input == respuesta[i]){
      printf("CORRECTO!\n");
      puntuacion++;
    }
    else{
      printf("INCORRECTO\n");
    }
  }
  printf("\nTu puntaje es de %d/4!\n", puntuacion);

  return 0;
}
