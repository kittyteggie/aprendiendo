#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

	int numero = 0;

	do{
		printf("Pon un numero mayor que 0: ");
		scanf("%d", &numero);
	}while (number <= 0);

	char nombre[50] = "";

	printf("Pon tu nombre: ");
	fgets(nombre, sizeof(nombre), stdin);
	nombre[strlen(nombre) - 1] = '\0';

	while(strlen(name) == 0){
		printf("El nombre no puede estar vacio! Por favor pon tu nombre: ");
		fgets(nombre, sizeof(nombre), stdin);
		nombre[strlen(nombre) - 1] = '\0';
	}

	printf("Hola %s!\n", nombre);

	bool estaEjecutado = 1;
	char respuesta = '\0';

	while(estaEjecutado){
		printf("Estas jugando un juego\n");
		printf("Te gustaria continuar? (Y/N): ");
		scanf(" %c", &respuesta);
		if(respuesta != 'Y' && respuesta != 'y'){
			estaEjecutando = 0;
		}
	}
	printf("Haz salido del juego\n");

	return 0;
}
