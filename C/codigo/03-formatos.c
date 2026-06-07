#include <stdio.h>

int main(){

	int edad = 15;
	float precio = 19.99;
	double pi = 3.1415926536;
	char moneda = '$';
	char nombre[] = "Alessandro";

	printf("Edad: %d\n", edad);
	printf("Precio: %.2f\n", precio);
	printf("Pi: %lf\n", pi);
	printf("Moneda: %c\n", moneda);
	printf("Nombre: %s\n", nombre);

	printf("--- Modifiers ---\n");
	
	int num1 = 1;
	int num2 = -10;
	int num3 = 100;

	printf("Numero 1: %3d\n", num1);

	printf("Numero 2: %+d\n", num2);

	printf("Numero 3: %+d\n", num3);

	float precio1 = 19.99;
	float precio2 = 1.50;
	float precio3 = -100.00;

	printf("Precio 1: %f\n", precio1);

	printf("Precio 2: %.1f\n", precio2);

	printf("Precio 3: %.2f\n", precio3);

	printf("Precio 1 redondeado: %.1f\n", precio1);

	printf("--- Todos los modifiers juntos ---\n");

	printf("Precio 1: %+7.2f\n", precio1);
	printf("Precio 2: %+7.2f\n", precio2);
	printf("Precio 3: %+7.2f\n", precio3);

	return 0;
}
