#include <stdio.h>

int substraer(int x, int y){
	int resultado = x - y;
	return resultado;
}
int añadir(int x, int y){
	int resultado = x + y;
	return resultado;
}

int main(){

	int resultado = añadir(3, 4);
	int resultado2 = substraer(3, 4);

	printf("Resultado 1: %d\n", resultado);
	printf("Resultado 2: %d\n", resultado2);

	return 0;
}
