#include "stdio.h"
#include "stdbool.h"

void mostranumeros(short int i, short int iii, short int nn, bool l[], short int n[])
{
	for (i = 0; i < nn; ++i) // Exibe os números na tela em linha ou em coluna, de acordo com a opção escolhida pelo usuário
	{
		switch (l[iii])
		{
			case true:
				printf("%i ", n[i]);
				break;

			case false:
				printf("%i\n", n[i]);
				break;

			default:
				printf("Opção invalida\n\n");
		}
	}
	printf("\n");
}	
