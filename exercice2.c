#include <stdio.h>

int main(void)
{
	int	purchases = 0, amount_paid = 0, result = 0;
	int	bill20 = 0, bill10 = 0, bill5 = 0, coin2 =0, coin1 = 0;

	printf("Entrez le total des achats : \n");
	scanf("%d", &purchases);
	printf("Entrez la somme payée : \n");
	scanf("%d", &amount_paid);

	if(amount_paid < purchases)
	{
		printf("Il manque de l'argent...\n");
		return -1;
	}

	else if(amount_paid == purchases)
	{
		printf("C'est parfait, vous avez paye en totalite ! \n");
		return 0;
	}
	else
	{
		result = amount_paid - purchases;

		bill20 = result / 20;
		result %= 20;

		bill10 = result / 10;
		result %= 10;

		bill5 = result / 5;
		result %= 5;

		coin2 = result / 2;
		result %= 2;

		coin1 = result / 1;
		result %= 1;

		if(bill20 > 0)
			printf("Billet(s) de 20 euros : %d\n", bill20);
		if(bill10 > 0)
                        printf("Billet(s) de 10 euros : %d\n", bill10);
		if(bill5 > 0)
                        printf("Billet(s) de 5 euros : %d\n", bill5);

		if(coin2 > 0)
                        printf("Piece(s) de 2 euros : %d\n", coin2);
		if(coin1 > 0)
                        printf("Piece(s) de 1 euro : %d\n", coin1);
	}

	return 0;
}
