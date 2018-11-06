/******************************************************************************
                            TD Informatique
							 Aloïs GAUCHER
*******************************************************************************/

#include <stdio.h>

int a,b,c;

int main()
{
	printf("Saisissez le premier nombre à additionner \n");
    scanf("%d" ,&a);
    printf("Saisissez le second nombre à additionner \n");
    scanf("%d" ,&b);
    c = a + b;
    printf("Le résultat de l'opération est %d \n", c);

    return 0;
}