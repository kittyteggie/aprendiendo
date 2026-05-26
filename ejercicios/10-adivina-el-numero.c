#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));

	int adivina = 0;
	int intentos = 0;
	int min = 1;
	int max = 100;
	int respuesta = (rand() % (max - min + 1)) + min;

	printf("** JUEGO DE ADIVINAR EL NUMERO **\n");

	do{
		printf("Adivina un numero entre %d - %d: ", min, max);
		scanf("%d", &adivina);
		intentos++;

		if(adivina < respuesta){
			printf("Muy bajo\n");
		}
		else if(adivina > respuesta){
			printf("Muy alto\n");
		}
		else{
			printf("LE ATINASTE!!\n");
		}

	}while(adivina != respuesta);

	printf("La respuesta es %d\n", respuesta);
	printf("Te tomo %d intentos", intentos);

	return 0;
}
