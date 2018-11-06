/******************************************************************************
                            TD Informatique
							 Aloïs GAUCHER
*******************************************************************************/

#include <stdio.h>

float a,b,c = 0;
int selection;

int main()
{

	//Saisie des opérandes
	printf("Saisissez le premier nombre: \n");
    scanf("%f" ,&a);
    printf("Saisissez le second nombre: \n");
    scanf("%f" ,&b);

    printf("Veuillez choisir l'opération à réaliser: \n");
	printf("1 - Multiplication\n");
	printf("2 - Addition\n");
	printf("3 - Soustraction\n");
	printf("4 - Division\n");
	scanf("%d" ,&selection);
	switch(selection)
		{
			case 1:
			c = a * b;
			break;
			case 2:
			c = a + b;
			break;
			case 3:
			c = a - b;
			break;
			case 4:
			c = a / b;
			break;
			default:
			printf("Veuillez choisir une opération à réaliser (1 - 4) !\n");
		}

	//Résultat
	printf("Le résultat de l'opération est %f", c);
    return 0;
}