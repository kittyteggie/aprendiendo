#include <stdio.h>

int main(){

	// los especificadores de formato, format specifiers, o formatos son los % que pones en los prints para que te imprima una variable
	int edad = 15;
	float precio = 19.99;
	double pi = 3.1415926536;
	char moneda = '$';
	char nombre[] = "Alessandro";

	// %d = enteros
	// %f = floats
	// %f / %lf = dobles
	// %c = chars de 1 solo caracter
	// %s = chars de varios caracteres (strings)

	printf("Edad: %d\n", edad);
	printf("Precio: %.2f\n", precio);
	printf("Pi: %lf\n", pi);
	printf("Moneda: %c\n", moneda);
	printf("Nombre: %s\n", nombre);

	printf("--- Modifiers ---\n");

	// Los modifiers son caracteres especiales opcionales para cambiar lo que va a imprimir, como width, precision o flags
	
	int num1 = 1;
	int num2 = -10;
	int num3 = 100;

	// poner un numero hara que en vez de hacer print tipo "1" va a hacer print de "  1" en el caso de que sea 3
	// usar numeros negativos, por ejemplo -3 va a imprimir "3  " en vez de "3"
	printf("Numero 1: %3d\n", num1);

	// al poner + va a poner si un numero es negativo o positivo, por ejemplo, el numero 2 es -10, por ende pondra -10, pero en caso de que un numero entero sea positivo pondra +10
	printf("Numero 2: %+d\n", num2);

	// lo que dije anteriormente
	printf("Numero 3: %+d\n", num3);

	float precio1 = 19.99;
	float precio2 = 1.50;
	float precio3 = -100.00;

	// al hacer print con solamente %f resultara en imprimir "19.990000"
	printf("Precio 1: %f\n", precio1);

	// para resolver ese problema se utiliza %.2f (en este caso se va a utilizar %.1f)
	printf("Precio 2: %.1f\n", precio2);

	printf("Precio 3: %.2f\n", precio3);

	// al poner, por ejemplo, 19.99 y decir que solo imprima un numero despues de la decima lo que va a hacer es que lo va a redondear a 20.0
	printf("Precio 1 redondeado: %.1f\n", precio1);

	printf("--- Todos los modifiers juntos ---\n");

	printf("Precio 1: %+7.2f\n", precio1);
	printf("Precio 2: %+7.2f\n", precio2);
	printf("Precio 3: %+7.2f\n", precio3);

	return 0;
}
