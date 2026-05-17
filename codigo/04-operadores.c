#include <stdio.h>

int main(){
	// los operadores son basicamente matematicas como = + - * / % ++ --
	
	int x = 2;
	int y = 3;
	int z = 0;

	// primero se pone la variable y luego, en este caso, la suma para hacer que z pase de 0 a 5

	z = x + y;
	
	printf("%d\n", z);

	// ahora se sigue con los demas operadores
	
	z = x - y;

	printf("%d\n", z);

	z = x * y;

	printf("%d\n", z);

	z = x / y;

	// al hacer divisiones, debido a que z es un entero en vez de dar el resultado de 2 entre 3 el cual seria 0.666... da 0
	printf("%d\n", z);

	// ahora lo "arreglamos" entre comillas
	float zdivision = x / y;

	printf("%f\n", zdivision);

	// resultado del print: 0.0000...
	// para que en vez de ese resultado incorrecto de uno correcto necesitamos hacer que x e y sean floats

	float xdivision = 2;
	float ydivision = 3;

	zdivision = xdivision / ydivision;

	// ahora si va a funcionar y va a dar 0.666...
	printf("%f\n", zdivision);

	// ahora vamos con los porcentajes que son una cosa medio rara

	int xporcentaje = 10;
	int yporcentaje = 3;

	int zporcentaje = 0;

	zporcentaje = xporcentaje % yporcentaje;
	
	// el resultado del print sera "1", imagina que tomamos 10 y dividimos eso en grupos de 3, quedaria 1 sin grupo, por eso dara 1
	printf("%d\n", zporcentaje);

	yporcentaje = 2;
	zporcentaje = xporcentaje % yporcentaje;

	// ahora imaginemos que tomamos 10 y lo dividimos en grupos de 2, ahora da 0 porque quedan 0 que se quedaron sin grupo
	printf("%d\n", zporcentaje);

	// ahora vamos con incrementar
	int zincremento = 10;

	// vamos a poner el nombre de la variable mas dos simbolos de mas (++)
	zincremento++;

	// al hacer print nos imprimira "11", porque lo incremetamos por 1 anteriormente con el ++
	printf("%d\n", zincremento);

	// tambien podemos decrementar (no se si se diga asi, el curso esta en ingles), pero lo llamare simplemente resta
	int zresta = 10;

	// lo mismo pero con --
	zresta--;

	// el resultado sera "9" porque le restamos 1 anteriormente
	printf("%d\n", zresta);

	// ahora reasignemos

	int xreasignar = 10;
	
	xreasignar = xreasignar + 2;

	printf("%d\n", xreasignar);
	// el resultado del print va a imprimir "12", pero hay una forma de hacerlo mas facil
	xreasignar = 10;
	xreasignar+=2;

	printf("%d\n", xreasignar);

	// ahora da lo mismo, solamente que el proceso es mas corto

	// podemos hacer el mismo proceso solamente que restando en vez de sumar
	xreasignar = 10;
	xreasignar-=2;

	printf("%d\n", xreasignar);

	// tambien podemos hacerlos con los demas operadores

	xreasignar = 10;
	xreasignar*=2;

	printf("%d\n", xreasignar);

	xreasignar = 10;
	xreasignar/=2;

	printf("%d\n", xreasignar);

	return 0;
}
