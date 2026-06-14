#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

int main(){
  time_t tiempoCrudo = 0;
  struct tm *pTiempo = NULL;
  bool estaEjecutado = 1;

  printf("** RELOJ DIGITAL **\n");
  while(estaEjecutado){
    time(&tiempoCrudo);
    pTiempo = localtime(&tiempoCrudo);
    printf("\r%02d:%02d:%02d", pTiempo->tm_hour, pTiempo->tm_min, pTiempo->tm_sec);
    fflush(stdout);
    sleep(1);
  }
  return 0;
}
