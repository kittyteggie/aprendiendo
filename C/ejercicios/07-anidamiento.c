#include <stdio.h>
#include <stdbool.h>

int main(){

	float precio = 10.00;
	bool = esEstudiante = 1;
	bool = esSeñor = 0;
	
	if(esEstudiante){
		if(esSeñor){
			printf("Tiene un descuento de señor mayor de 20% + un descuento de estudiante de 10%\n");
			precio *= 0.7;
		}
		else{
			printf("Tienes un descuento de estudiante de 10%\n");
			precio *= 0.9;
		}
	}
	else{
		if(esSeñor){
			printf("Tiene un descuento de señor mayor de 20%\n");
			precio *= 0.8;
		}
	}

	printf("El precio del ticket es: $%.2f\n", precio);

	return 0;
}
