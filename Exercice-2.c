/******************************************************************************
                            TD Informatique
							 Aloïs GAUCHER
*******************************************************************************/

#include <stdio.h>

float prix, somme, total, moyenne;
int nb = 0;

int main()
{
	do {
		printf("Prix de l'article: \n");
		scanf("%f", &prix);
	if ( prix != (0) ) {
		somme += prix;
		nb += 1;
	}
	} while ( prix != (0) ); // Condition de sortie de la boucle 0
	if ( somme < 99 ) {
		total = somme;
	}
	else if ( somme >= 100 && somme <= 499 ) { // 10% de réduction
		total = somme * 0.90;
	}
	else if ( somme >= 500 && somme <= 999 ) { // 20% de réduction
		total = somme * 0.80;
	}
	else if ( somme > 999 ) { // 30% de réduction
		total = somme * 0.70;
	}

	printf("Le montant des articles est: %f€ \n", total);
	moyenne = total/nb;
	printf("La moyenne est égale à: %f€ \n", moyenne);

    return 0;
}