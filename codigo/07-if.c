#include <stdio.h>

int main()
{
	int edad = 0;

	printf("Pon tu edad: ");
	scanf("%d", &edad);

	if(edad >= 60){
		printf("Eres un adulto mayor\n");
	}else if(edad >= 18){
		printf("Eres un adulto\n");
	}
	else if(edad == 0){
		printf("Onta bebe?\n");
	}else if(edad < 0){
		printf("Aun no has nacido, sigues siendo un fetito\n");
	}else{
		printf("Eres un menor\n");
	}

	return 0;
}
