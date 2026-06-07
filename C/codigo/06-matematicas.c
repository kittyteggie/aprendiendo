#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	double x = 9;
	printf("La raiz cuadrada de %.1f es: ", x);
	x = sqrt(x);
	printf("%.1f\n", x);

	int x2 = 2;
	printf("%d elevado al cuadrado da: ", x2);
	x2 = pow(x2, 2);
	printf("%d\n", x2);

	float x3 = 3.14;
	printf("%.2f redondeado da: ", x3);
	x3 = round(x3);
	printf("%.0f\n", x3);

	float x4 = 3.14;
	printf("%.2f redondeado arriba da: ", x4);
	x4 = ceil(x4);
	printf("%.0f\n", x4);
	
	float x5 = 3.99;
	printf("%.2f redondeado abajo da: ", x5);
	x5 = floor(x5);
	printf("%.0f\n", x5);

	int x6 = -3;
	printf("El valor absoluto de %d es: ", x6);
	x6 = abs(x6);
	printf("%d\n", x6);

	float x7 = 3;
	printf("El logaritmo natural de %.0f es: ", x7);
	x7 = log(x7);
	printf("%.0f\n", x7);

	float x8 = 45;
	printf("El seno trigonometrico de %.0f es: ", x8);
	x8 = sin(x8);
	printf("%f\n", x8);

	float x9 = 45;
	printf("El coseno de %0.f es: ", x9);
	x9 = cos(x9);
	printf("%f\n", x9);

	float x0 = 45;
	printf("La tangente de %0.f es: ", x0);
	x0 = tan(x0);
	printf("%0.f\n", x0);

	return 0;
}
