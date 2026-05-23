#include <stdio.h>
#include <unistd.h>

int main(){

	for(int i = 10; int i >= 10; i--){
		sleep(1);
		printf("%d\n", i);
	}

	printf("FELIZ AÑO NUEVO");

	return 0;
}
