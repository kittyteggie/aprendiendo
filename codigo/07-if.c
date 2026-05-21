#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
	int edad = 0;

	printf("Pon tu edad: ");
	scanf("%d", &edad);

	if(edad >= 60){
		printf("Eres un adulto mayor\n");
	}else if(edad >= 18){
		printf("Eres un adulto\n");
	}
	else if(edad == 0){
		printf("Onta bebe?\n");
	}else if(edad < 0){
		printf("Aun no has nacido, sigues siendo un fetito\n");
	}else{
		printf("Eres un menor\n");
	}

	bool estudiante = true;
	char estudianteinput;

	printf("Eres un estudiante? [Y/N]\n>");
	scanf(" %c", &estudianteinput);

	if(estudianteinput == 'Y'){
		estudiante = true;
	}else{
		estudiante = false;
	}

	if(estudiante){
		printf("Eres un estudiante\n");
	}else{
		printf("No eres un estudiante\n");
	}

	char nombre[50] = "";

	printf("Pon tu nombre: ");
	fgets(nombre, sizeof(nombre), stdin);
	nombre[strlen(nombre) - 1] = '\0';

	if(strlen(nombre) == 0){
		printf("Pendejo no pusiste tu nombre\n");
	}else{
			printf("Hola %s!", nombre);
	}

	return 0;
}
