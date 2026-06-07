#include <stdio.h>
#include <stdbool.h>

int main(){

	int temperatura = 25;

	if(temperatura <= 0 && temperatura >= 30){
		printf("La temperatura esta mala\n");
	}
	else{
		printf("La temperatura esta buena\n");
	}

	bool estaSoleado = 1;

	if(!estaSoleado){
		printf("Esta nublado afuera\n");
	}else{
		printf("Esta soleado afuera\n");
	}

	return 0;
}
