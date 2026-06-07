#include <stdio.h>

typedef enum{
  DOMINGO = 1, LUNES = 2, MARTES = 3, MIERCOLES = 4,
  JUEVES = 5, VIERNES = 6, SABADO = 7
};
int main(){

  Dia hoy = SABADO;

  printf("%d\n", hoy);

  if(hoy = DOMINGO || hoy == SABADO){
    printf("Es el fin de semana\n");
  }else{
    printf("Es un dia de la semana\n");
  }

  return 0;
}
