#include <stdio.h>

int main(){
	
	char opcion = '\0';
	float fahrenheit = 0.0f;
	float celcius = 0.0f;

	printf("Calculadora de temperatura\n");
	printf("--------------------------\n");

	printf("C. Celcius a Fahrenheit\n");
	printf("F. Fahrenheit a Celcius\n");

	printf("Escoje una opción (C/F): ");
	scanf(" %c", &opcion);

	if(opcion == 'C'){
		printf("Coloque la temperatura en Celcius: ");
		scanf("%f", &celcius);
		fahrenheit = (celcius * 9 / 5) + 32;
		printf("%.2f grados celcius es igual a %.2f Fahrenheit\n", celcius, fahrenheit);
	}else if(opcion == 'F'){
		printf("Coloque la temperatura en Fahrenheit: ");
		scanf("%f", &fahrenheit);
		celcius = (fahrenheit - 32) * 5 / 9;
		printf("%.2f Fahrenheit es igual a %.2f grados celcius\n", fahrenheit, celcius);
	}else{
		printf("ERROR: Opción invalida, por favor ponga C o F en el input\n");
	}

	return 0;
}
