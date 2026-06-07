#include <stdio.h>
#include <stdbool.h>

void hola(char nombre[], int edad);
bool chequearEdad(int edad);

int main(){
	hola("Bob Esponja", 30);

	if(chequearEdad(30)){
		printf("Tienes la edad suficiente para trabajar en el Crustaceo Cascarudo\n");
	}
	else{
		printf("No tienes la edad suficiente para trabajar en el Crustaceo Cascarudo, debes tener 16 o mas.\n");
	}
	return 0;
}

void hola(char nombre[], int edad){
        printf("Hola %s\n", nombre);
        printf("Tienes %d años\n", edad);
}

bool chequearEdad(int edad){
	return edad >= 16;
}
