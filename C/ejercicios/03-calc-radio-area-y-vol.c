#include <stdio.h>
#include <math.h>

int main()
{
	double radio = 0.0;
	double area = 0.0;
	double superficieDelArea = 0.0;
	double volumen = 0.0;
	const double PI = 3.141592653589793;

	printf("Calculadora de radio, area y volumen\n");
	printf("------------------------------------\n");
	printf("Pon el radio: ");
	scanf("%lf", &radio);

	area = PI * pow(radio, 2);
	superficieDelArea = 4 * PI * pow(radio, 2);
	volumen = (4.0 / 3.0) * PI * pow(radio, 3);

	printf("Area: %lf\n", area);
	printf("Superficie del Area: %lf\n", superficieDelArea);
	printf("Volumen: %lf\n", volumen);

	return 0;
}
