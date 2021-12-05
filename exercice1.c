#include <stdio.h>

int main(void)
{
	int nombre_entier = 0;

	printf("Choisir un nombre entier : ");
	scanf("%d", &nombre_entier);

	printf("Nombre choisi en octal : %o\n", nombre_entier);
	printf("Nombre choisi en hexadecimal : %x\n", nombre_entier);

	return 0;
}
