#include <stdio.h>
#include <string.h>

int main(){

	// en las variables se puede dejar sin ningun valor (int edad;) pero el tipo del curso dijo que era mas recomendable dejarles un "valor null"
	// otra cosa es que tuve que pedirle a chatgpt que me arreglara unas cosas porque el codigo estaba medio bugueado

	int edad = 0;
	float nota = 0.0f;
	char grado = '\0';
	char nombre[31] = "";

	printf("Pon tu primer nombre: ");

	// segun chatgpt hay un caracter extra que es el \0 (null), y hay que poner 30 para ponerle limite de caracteres y que no haya mas de 30
	// otra cosa es que por algun motivo no puede haber un & porque el clang y el gcc te dan un warning
	scanf("%30s", nombre);

	printf("Pon tu edad: ");
	scanf("%d", &edad);

	printf("Pon tu nota (0-10): ");
	scanf("%f", &nota);

	printf("Pon tu grado (F-A): ");

	// segun chatgpt (denuevo), al hacer enter en la nota cuenta el \n (salto de linea) y piensa que el salto de linea es un caracter y por eso hay que poner espacio para que ignore los espacios, tabs y enters anter de leer
	scanf(" %c", &grado);

	// ok me acabo de dar cuenta de que el curso si decia esas cosas que arregle con ayuda de chatgpt pero fue porque puse todos los scanfs sin ver el resto del curso paso a paso por ser inpaciente, menos lo de %30f, eso si no lo puso

	printf("--- Resultado ---\n");

	printf("Nombre: %s\n", nombre);
	printf("Edad: %d\n", edad);
	printf("Nota: %.1f\n", nota);
	printf("Grado: %c\n", grado);

	printf("-----------------\n\n");

	char nombrecompleto[51] = "";
  
	// getchar es importante porque es el equivalente de poner un espacio antes de %c
	getchar();
	printf("Ahora danos tu nombre completo: ");
	fgets(nombrecompleto, sizeof(nombrecompleto), stdin);

	// el tipo del curso dijo que esta parte no hay que darle mucha visibilidad por ahora porque es "algo complejo que tendra mas sentido en el futuro", aunque ni idea a lo que se refiera
	nombrecompleto[strlen(nombrecompleto) - 1] = '\0';

	printf("Nombre completo: %s\n", nombrecompleto);

	return 0;
}
