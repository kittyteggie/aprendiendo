#include <stdio.h>
#include <math.h>

int main()
{
	double principal = 0.0;
	double tasaDeInteres = 0.0;
	int años = 0;
	int vecesCompuesto = 0;
	double total = 0;

	printf("Calculadora de interés compuesto\n");
	printf("--------------------------------\n");

	printf("Pon el principal (P): ");
	scanf("%lf", &principal);

	printf("Pon la tasa de interés % (r): ");
	scanf("%lf", &tasaDeInteres);
	tasaDeInteres = tasaDeInteres / 100;

	printf("Pon el numero de años (t): ");
	scanf("%d", &años);

	printf("Pon la cantidad de veces compuesto por año (n): ");
	scanf("%d", &vecesCompuesto);

	total = principal * pow(1 + tasaDeInteres / vecesCompuesto, vecesCompuesto * años);

	printf("Despues de %d años, el total seria $%.2lf\n", años, total);

	return 0;
}
