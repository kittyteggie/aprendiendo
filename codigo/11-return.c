#include <stdio.h>
#include <stdbool.h>

int mayor(int x2, int y2){
	if(x2 >= y2){
		return x2;
	}
	else{
		return y2;
	}
}

bool chequearEdad(int edad){
	if(edad >= 18){
		return 1;
	}
	else{
		return 0;
	}
}

double cubo(double num){
	return num * num * num;
}
double cuadrado(double num){
	return num * num;
}

int main(){

	double x = cubo(2.1);
	double y = cuadrado(3.2);
	double z = cuadrado(4.3);
	int edad = 21;

	printf("X: %.2lf\n", x);
        printf("Y: %.2lf\n", y);
        printf("Z: %.2lf\n", z);

	printf("--- EDAD ---\n");
	if(chequearEdad(edad)){
		printf("Eres un adulto\n");
	}
	else{
		printf("Eres un menor\n");
	}

	printf("--- MAYOR ---\n");

	int mayor = mayor(2, 3);

		printf("%d", mayor);

	return 0;
}
