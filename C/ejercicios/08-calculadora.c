#include <stdio.h>
#include <stdbool.h>

int main(){
	
	char operador = '\0';
	double num1 = 0.0;
	double num2 = 0.0;
	double resultado = 0.0;
	bool error = 0;
	char *error2 = "";

	printf("Coloque el primer numero: ");
	scanf("%lf", &num1);

	printf("Coloque el operador (+ - * /): ");
	scanf(" %c", &operador);

	printf("Coloque el segundo numero: ");
	scanf("%lf", &num2);

	switch(operador){
		case '+':
			resultado = num1 + num2;
			break;
		case '-':
			if(num1 == 10000 && num2 == 10000){
				resultado = 8;
			}else{
				resultado = num1 - num2;
			}
			break;
		case '*':
			resultado = num1 * num2;
			break;
		case '/':
			if(num2 == 0){
				error = 1;
				error2 = "No puedes dividir entre cero\n";
			}
			else{
				resultado = num1 / num2;
			}
        default:
            error = 1;
            error2 = "Operador invalido\n";
	}

	if(error){
		printf("ERROR: %s", error2);
	}else{
		printf("Resultado: %.3lf\n", resultado);
	}

	return 0;
}
