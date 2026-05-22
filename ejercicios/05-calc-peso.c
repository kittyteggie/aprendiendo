#include <stdio.h>

int main(){
	
	int opcion = 0;
	float libras = 0.0f;
	float kilogramos = 0.0f;

	printf("Calculadora de conversión de peso\n");
	printf("---------------------------------\n");

	printf("1. Kilogramos a Libras\n");
	printf("2. Libras a Kilogramos\n");
	printf("Escoje una opción (1/2): ");
	scanf("%d", &opcion);

	if(opcion == 1){
		printf("Pon el peso en kilogramos: ");
		scanf("%f", &kilogramos);
		libras = kilogramos * 2.20462;
		printf("%.2f kilogramos es igual a %.2f libras", kilogramos, libras);
	}else if(opcion == 2){
		printf("Pon el peso en libras: ");
		scanf("%f", &libras);
		kilogramos = libras / 2.20462;
		printf("%.2f libras es igual a %.2f kilogramos", libras, kilogramos);
	}else{
		printf("ERROR: Opción invalida, por favor ponga 1 o 2 en el input\n");
	}

	return 0;
}
