#include <stdio.h>

int main(){

	int diaDeLaSemana = 0;

	printf("Pon un dia de la semana (1-7): ");
	scanf("%d", &diaDeLaSemana);

	switch(diaDeLaSemana){
		case 1:
			printf("Es Lunes\n");
			break;
		case 2:
			printf("Es Martes\n");
			break;
		case 3:
			printf("Es Miercoles\n");
			break;
		case 4:
			printf("Es Jueves\n");
			break;
		case 5:
			printf("Es Viernes\n");
			break;
		case 6:
			printf("Es Sabado\n");
			break;
		case 7:
			printf("Es Domingo\n");
			break;
		default:
			printf("ERROR: Opción invalida");
			break;
	}

	return 0;
}
