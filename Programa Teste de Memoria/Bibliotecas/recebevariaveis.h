#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

short int recebenr(short int nr)
{
	printf("Quantas vezes você gostaria de jogar?\nDigite um número de 1 a 20: ");
	scanf("%i", &nr);
	printf("\n");

	while (nr < 1 && nr > 20)
	{
		printf("Número inválido, tente novamente: ");
		scanf("%i", &nr);
		printf("\n");
	}

	return nr;
}

short int recebenn(short int nn)
{
	printf("Quantas números você gostaria de ver?\nDigite um número de 1 a 20: ");
	scanf("%i", &nn);
	printf("\n");

	while (nn < 1 && nn > 20)
	{
		printf("Número inválido, tente novamente: ");
		scanf("%i", &nn);
		printf("\n");
	}

	return nn;
}

float recebetempo(float t)
{
	printf("Por quantos segundos você gostaria de ver os números?\nDigite um número de 0.1 a 0.9 ou de 1 a 10: ");
	scanf("%f", &t);
	printf("\n");

	while (t != 0.1 && t != 0.2 && t != 0.3 && t != 0.4 && t != 0.5 && t != 0.6 && t != 0.7 && t != 0.8 && t != 0.9 && t != 1 && t != 2 && t != 3 && t != 4 && t != 5 && t != 6 && t != 7 && t != 8 && t != 9 && t != 10)
	{
		printf("Número inválido, tente novamente: ");
		scanf("%f", &t);
		printf("\n");
	}
	return t;
}

bool recebel(short int iii, bool l[])
{
	printf("Gostaria de ver os números em linha ou em coluna?\n\n0 - coluna\n1 - linha\n\nDigite a opção desejada:");
	scanf("%i", &l[iii]);
	printf("\n");

	while (l[iii] > 1 && l[iii] < 0)
	{
		printf("Número inválido, tente novamente: ");
		scanf("%i", &l[iii]);
		printf("\n");
	}

	return l[iii];
}
