#include <stdio.h>

int main(){
	
	int x = 2;
	int y = 3;
	int z = 0;

	z = x + y;
	
	printf("%d\n", z);

	z = x - y;

	printf("%d\n", z);

	z = x * y;

	printf("%d\n", z);

	z = x / y;

	printf("%d\n", z);

	float zdivision = x / y;

	printf("%f\n", zdivision);

	float xdivision = 2;
	float ydivision = 3;

	zdivision = xdivision / ydivision;

	printf("%f\n", zdivision);

	int xporcentaje = 10;
	int yporcentaje = 3;

	int zporcentaje = 0;

	zporcentaje = xporcentaje % yporcentaje;
	
	printf("%d\n", zporcentaje);

	yporcentaje = 2;
	zporcentaje = xporcentaje % yporcentaje;

	printf("%d\n", zporcentaje);

	int zincremento = 10;

	zincremento++;

	printf("%d\n", zincremento);

	int zresta = 10;

	zresta--;

	printf("%d\n", zresta);

	int xreasignar = 10;
	
	xreasignar = xreasignar + 2;

	printf("%d\n", xreasignar);

	xreasignar = 10;
	xreasignar+=2;

	printf("%d\n", xreasignar);

	xreasignar = 10;
	xreasignar-=2;

	printf("%d\n", xreasignar);

	xreasignar = 10;
	xreasignar*=2;

	printf("%d\n", xreasignar);

	xreasignar = 10;
	xreasignar/=2;

	printf("%d\n", xreasignar);

	return 0;
}
