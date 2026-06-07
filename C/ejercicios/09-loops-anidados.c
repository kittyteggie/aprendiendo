#include <stdio.h>

int main(){

	int filas = 0;
	int columnas = 0;
	char simbolo = '\0';

	printf("Coloca el # de filas: ");
	scanf("%d", &filas);

	printf("Coloca el # de columnas: ");
	scanf("%d", &columnas);

	printf("Coloca un simbolo para usar: ");
	scanf(" %c", &simbolo);

	for(int i = 0; i < rows; i++){
		for(int j = 0; j < columns; j++){
			printf("%c", simbolo);
        	}
		printf("\n");
	}

	break 0;
}
