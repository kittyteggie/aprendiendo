#include <stdio.h>

void chequearBalance(float balance);
float deposito();
float retirarDinero(float balance); 

int main(){
  int opcion = 0;
  float balance = 0.f;

  printf("*** BIENVENIDO AL BANCO ***\n");

  do{
    printf("\nSelecciona una opcion:");
    printf("\n1. Chequear Balance");
    printf("\n2. Deposito");
    printf("\n3. Retirar Dinero");
    printf("\n4. Salir del programa\n");

    printf("Coloque su opcion: ");
    scanf("%d", &opcion);

    switch(opcion){
      case 1:
        chequearBalance(balance);
        break;
      case 2:
        balance = balance + deposito();
        break;
      case 3:
        balance = balance - retirarDinero(balance); 
        break;
      case 4:
        printf("\nGracias por usar el banco!\n");
        break;
      default:
        printf("\nERROR: Opcion invalida, por favor elige 1 - 4\n");
    }
  } while(opcion != 4);

  return 0;
}

void chequearBalance(float balance){
  printf("\nTu balance actual: $%.2f\n", balance);
}

float deposito(){
  float cantidad = 0.0f;
  
  printf("\nPon la cantidad que quieres depositar: $");
  scanf("%f", &cantidad);

  if (cantidad < 0){
    printf("Monto invalido\n");
    return 0.0f;
  }
  else{
    printf("Has depositado $%.2f correctamente\n", cantidad);
    return cantidad;
  }
}

float retirarDinero(float balance){
  float cantidad = 0.0f;

  printf("\nColoque una cantidad para retirar: $");
  scanf("%f", &cantidad);

  if(cantidad < 0){
    printf("ERROR: Cantidad invalida\n");
    return 0.0f;
  }
  else if(cantidad > balance){
    printf("ERROR: Balance insuficiente, su balance es de $%.2f\n", balance);
    return 0.0f;
  }
  else{
    printf("Has retirado $%.2f correctamente\n", cantidad);
    return cantidad;
  }
}
