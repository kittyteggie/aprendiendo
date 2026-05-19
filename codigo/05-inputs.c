#include <stdio.h>
#include <string.h>

int main(){

	int edad = 0;
	float nota = 0.0f;
	char grado = '\0';
	char nombre[31] = "";

	printf("Pon tu primer nombre: ");

	scanf("%30s", nombre);

	printf("Pon tu edad: ");
	scanf("%d", &edad);

	printf("Pon tu nota (0-10): ");
	scanf("%f", &nota);

	printf("Pon tu grado (F-A): ");

	scanf(" %c", &grado);

	printf("--- Resultado ---\n");

	printf("Nombre: %s\n", nombre);
	printf("Edad: %d\n", edad);
	printf("Nota: %.1f\n", nota);
	printf("Grado: %c\n", grado);

	printf("-----------------\n\n");

	char nombrecompleto[51] = "";
  
	getchar();
	printf("Ahora danos tu nombre completo: ");
	fgets(nombrecompleto, sizeof(nombrecompleto), stdin);

	nombrecompleto[strlen(nombrecompleto) - 1] = '\0';

	printf("Nombre completo: %s\n", nombrecompleto);

	return 0;
}
