#include <stdio.h>
#include <math.h>

int main()
{
	double radio = 0.0;
	double area = 0.0;
	const double PI = 3.141592653589793;

	printf("Pon el radio: ");
	scanf("%lf", &radio);

	area = PI * pow(radio, 2);

	printf("Area: %lf", area);

	return 0;
}
