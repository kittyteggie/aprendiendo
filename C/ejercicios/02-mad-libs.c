#include <stdio.h>
#include <string.h>

int main(){

	char sustantivo[50] = "";
	char verbo[50] = "";
	char adjetivo1[50] = "";
	char adjetivo2[50] = "";
	char adjetivo3[50] = "";

	printf("Pon un adjetivo (descripcion): ");
	fgets(adjetivo1, sizeof(adjetivo1), stdin);
	adjetivo1[strlen(adjetivo1) - 1] = '\0';

	printf("Pon un sustantivo (animal o persona): ");
	fgets(sustantivo, sizeof(sustantivo), stdin);
	sustantivo[strlen(sustantivo) - 1] = '\0';

	printf("Pon otro adjetivo (descripcion): ");
	fgets(adjetivo2, sizeof(adjetivo2), stdin);
	adjetivo2[strlen(adjetivo2) - 1] = '\0';

	printf("Pon un verbo (que termine en -ando o -endo): ");
	fgets(verbo, sizeof(verbo), stdin);
	verbo[strlen(verbo) - 1] = '\0';

	printf("Pon otro adjetivo mas, este es el ultimo (verbo estaba): ");
	fgets(adjetivo3, sizeof(adjetivo3), stdin);
	adjetivo3[strlen(adjetivo3) - 1] = '\0';

	printf("\nHoy fui a un zoologico %s.\n", adjetivo1);
	printf("Durante la exposicion vi a un %s.\n", sustantivo);
	printf("%s era %s y estaba %s!\n", sustantivo, adjetivo2, verbo);
	printf("Yo estaba %s\n", adjetivo3);

	return 0;
}
