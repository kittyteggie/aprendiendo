#include <stdio.h>

int main(){
	
	char opcion = '\0';
	float fahrenheit = 0.0f;
	float celcios = 0.0f;

	printf("Calculadora de temperatura\n");
	printf("--------------------------\n");

	printf("C. Celcios a Fahrenheit\n");
	printf("F. Fahrenheit a Celcios\n");

	printf("Escoje una opción (C/F): ");
	scanf(" %c", &opcion);

	if(opcion == 'C'){
		printf("Coloque la temperatura en Celcios: ");
		scanf("%f", &celcios);
		fahrenheit = (celcios * 9 / 5) + 32;
		printf("%.2f grados celcios es igual a %.2f Fahrenheit\n", celcios, fahrenheit);
	}else if(opcion == 'F'){
		printf("Coloque la temperatura en Fahrenheit: ");
		scanf("%f", &fahrenheit);
		celcios = (fahrenheit - 32) * 5 / 9;
		printf("%.2f Fahrenheit es igual a %.2f grados celcios\n", fahrenheit, celcios);
	}else{
		printf("ERROR: Opción invalida, por favor ponga C o F en el input\n");
	}

	return 0;
}
