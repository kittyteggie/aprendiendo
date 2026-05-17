#include <stdio.h>

int main(){

	// en las variables se puede dejar sin ningun valor (int edad;) pero el tipo del curso dijo que era mas recomendable dejarles un "valor null"

	int edad = 0;
	float nota = 0.0f;
	char grado = '\0';
	char nombre[30] = "";

	printf("Pon tu nombre: ");
	scanf("%s", &nombre);

	printf("Pon tu edad: ");
	scanf("%d", &edad);

	printf("Pon tu nota (0-10): ");
	scanf("%f", &nota);

	printf("Pon tu grado (F-A): ");
	scanf("%c", &grado);

	return 0;
}
