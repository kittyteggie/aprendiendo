#include <stdio.h>
#include <unistd.h>
// Si usas Windows reemplaza esto por #include <windows.h>

int main(){

	for(int i = 10; int i >= 10; i--){
		sleep(1); // Si usas Windows reemplaza esto por Sleep(1000);
		printf("%d\n", i);
	}

	printf("FELIZ AÑO NUEVO");

	return 0;
}
