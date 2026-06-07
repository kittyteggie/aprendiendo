#include <stdio.h>
#include <string.h>

int main(){

	char item[50] = "";
	float precio = 0.0f;
	int cantidad = 0;
	char moneda = '$';
	float total = 0.0f;

	printf("Que item te gustaria comprar?: ");
	fgets(item, sizeof(item), stdin);
	item[strlen(item) - 1] = '\0'; 

	printf("Cual es el precio de cada item?: ");
	scanf("%f", &precio);

	printf("Cuantos vas a comprar?: ");
	scanf("%d", &cantidad);

	total = precio * cantidad;

	printf("\nHaz comprado %d cantidad de %s(s)\n", cantidad, item);
	printf("Total a pagar: %c%.2f", moneda, total);

	return 0;
}
