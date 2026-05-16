#include <stdio.h>
#include <stdbool.h>

int main() {
	printf("--- Enteros ---\n");
	// enteros no pueden tener decimas como .1, .2, .3...

	int edad = 15;
	int año = 2026;
	int cantidad = 2;

	// primero se pone %d para enteros, luego al terminar el print se usa coma y el nombre de la variable para que sepa que es esa integral en especifico

	printf("Tienes %d años\n", edad);
	printf("Estamos en el año %d\n", año);
	printf("Tu has ordenado %d items\n", cantidad);

	printf("--- Floats ---\n");
	// a diferencia de los enteros, los floats pueden tener decimas
	// segun el curso que me ando viendo tienen hasta 6 o 7 (si, enserio) digitos que puedes poner despues del entero

	float nota = 7.2;
	float precio = 19.99;

	// numero negativo, no cambia en absolutamente nada, solo pone un - al inicio, pero creo es que importante de recalcar
	float temperatura = -1.3;

	// y tambien a diferencia de los enteros, en vez de %d, se usa %f
	printf("Tu nota de matematicas es %.1f\n", nota);
	// el resultado del print es 7.200000 (5 ceros), para cambiar eso hay que utilizar %.1f, de esta forma solamente pone 1 digito decimal despues del entero

	// otro intento, en este caso se usa %.2f
	printf("El precio del item es de $%.2f\n", precio);

	/*
	Por algun motivo el GCC me dio el siguiente error al compilar:

	02-variables.c: In function ‘main’:
	02-variables.c:33:41: warning: format ‘%f’ expects a matching ‘double’ argument [-Wformat=]
	   33 |         printf("La temperatura es de %.1f grados centigrados\n");
	      |                                      ~~~^
	      |                                         |
	      |                                         double

	 El tipo del curso dijo que era un 'warning' y disque no son tan importantes, pero igualmente es medio raro
	 */
	printf("La temperatura es de %.1f grados centigrados\n");

	printf("--- Doubles ---\n");
	// a diferencia del float, los doubles tienen de 15 a 16 digitos despues del decimal
	// segun el tipo del curso no son tan importantes porque... quien va a usar mas de 7 digitos?
	
	double pi = 3.14159265265358979;
	double e = 2.7182818284590;

	// no se porque pero el tipo del curso puso long float para hacer print en vez de double? no se porque pero supongo que el tipo que hizo el curso es el profesional en eso
	printf("Los primeros 14 digitos de pi es: %.14lf\n", pi);

	printf("los primeros 12 digitos del numero de euler es: %.12lf\n", e);

	printf("--- Caracteres ---\n");

	// se debe usar ' ' o " " cuando se vaya a poner los caracteres, los caracteres solo pueden tener 1 solo caracter (duh)
	char grado = 'A';
	char simbolo = '!';
	char moneda = '$';

	printf("Tu nota del examen de matematicas es %c\n", grado);
	printf("Tu simbolo favorito (o tal vez no) es %c\n", simbolo);
	printf("La moneda que se va a utilizar es %c\n", moneda);

	printf("--- Strings (caracteres) ---");

	// para tener mas de un digito se utiliza char variable[]
	char nombre[] = "Alessandro";
	char comida[] = "papas fritas";
	char email[] = "tuputasexy666@example.com";

	// cuando se usa char variable[] se utiliza %s en vez de %c
	printf("Hola %s!\n", nombre);
	printf("Tu comida favorita es %s\n", comida);
	printf("Tu correo electronico es %s\n", email);

	printf("--- Bools ---");
	// IMPORTANTE: En los bools se tiene que poner #include <stdbool.h> para que el compilador sepa que usar para poder compilar los bools	
	// Los bools son binarios, son falsos (false) o positivos (true)

	// se puede usar false o 0 + true o 1, si quieres optimizar el codigo es mejor utilizar numeros
	bool enLinea = true;
	
	// al poner "%d", variableBool te da como resultado un 0 si es false o un 1 si es true
	printf("%d\n", enLinea);

	// aqui salen los ifs, que luego se usaran mas, pero va a ser despues, esto es solamente para usar los bools
	// si solo pones if(variableBool) va a ser cuando este en 1 y el else cuando sea 0
	if(enLinea){
		printf("Estas en linea\n");
	}
	else{
		printf("Estas offline\n");
	}

	return 0;
}
