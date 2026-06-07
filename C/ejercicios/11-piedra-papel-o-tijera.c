#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int obtenerOpcionCompu();
int obtenerOpcionUsuario();
void chequearGanador(int opcionUsuario, int opcionCompu);

int main(){
	srand(time(NULL));

	printf("** PIEDRA PAPEL O TIJERA **\n");

	int opcionUsuario = obtenerOpcionUsuario();
	int opcionCompu = obtenerOpcionCompu();

	switch(opcionUsuario){
		case 1:
			printf("Escojiste PIEDRA\n");
			break;
		case 2:
			printf("Escojiste PAPEL\n");
			break;
		case 3:
			printf("Escojiste TIJERA\n");
			break;
	}

	switch(opcionCompu){
		case 1:
			printf("La computadora escojio PIEDRA\n");
			break;
		case 2:
			printf("La computadora escojio PAPEL\n");
			break;
		case 3:
			printf("La computadora escojio TIJERA\n");
			break;
	}

	chequearGanador(opcionUsuario, opcionCompu);

	return 0;
}

int obtenerOpcionCompu(){
	return (rand() % 3) + 1;
}

int obtenerOpcionUsuario(){
	int opcion = 0;
	do{
		printf("Elije una opción\n");
		printf("1. PIEDRA\n");
		printf("2. PAPEL\n");
		printf("3. TIJERA\n\n");

		printf("Coloque su opción: ");
		scanf("%d", &opcion);
	}while(opcion < 1 || opcion > 3);
}

void chequearGanador(int opcionUsuario, int opcionCompu){
	if(opcionUsuario == opcionCompu){
		printf("Es un Empate!\n");
	}
	else if((opcionUsuario == 1 && opcionCompu == 3) || (opcionUsuario == 2 && opcionCompu == 1) || (opcionUsuario == 3 && opcionCompu == 2)){
		printf("Ganaste!\n");
	}
	else{
		printf("Perdiste!");
	}
}
