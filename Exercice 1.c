/******************************************************************************
                            TD Informatique
							 Aloïs GAUCHER
*******************************************************************************/

#include <stdio.h>

float a,b,c;

int main()
{
	printf("Saisissez le premier nombre à additionner \n");
    scanf("%f" ,&a);
    printf("Saisissez le second nombre à additionner \n");
    scanf("%f" ,&b);
    c = a + b;
    printf("Le résultat de l'opération est %f \n", c);

    return 0;
}