#include <stdio.h>
#include <math.h>

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
	printf("%.1f\n", x3);

	return 0;
}
