/******************************************************************************
                            TD Informatique
							 Aloïs GAUCHER
*******************************************************************************/

#include <stdio.h>

int prix, somme, total;

int main()
{
	do {
		printf("Prix de l'article: \n");
		scanf("%d", &prix);
		somme += prix;
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

	printf("Le montant des articles est: %d€ \n", total);

    return 0;
}