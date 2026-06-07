#include <stdio.h>
#include <string.h>

void felizCumpleaños1(){

	printf("\nFeliz cumpleaños a ti!");
}

void felizCumpleaños2(char nombre[], int edad){

        felizCumpleaños1();
	felizCumpleaños1();
        printf("\nFeliz cumpleaños %s!");
	felizCumpleaños1();
        printf("\nFeliz %d años!");
}

int main(){

	char nombre[] = "";
	int edad = 0;

	printf("Coloca tu nombre: ");
	fgets(nombre, sizeof(nombre), stdin);
	nombre[strlen(nombre) - 1] = '\0';

	printf("Coloca tu edad: ");
	scanf("%d", &edad);

	felizCumpleaños2(nombre, edad);
	
	return 0;
}
