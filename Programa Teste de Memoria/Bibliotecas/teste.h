#include "stdio.h"
#include "stdbool.h"

void testausuario(short int i, short int iii, short int nn, bool l[], short int n[], bool resultado[][20], short int reindex[])
{
	for (i = 0; i < nn; ++i) //Pergunta ao usuário se o número exibido foi visto anteriormente
	{
		printf("Você viu esse número?\n\n1 = sim\n0 = não\n==> %i ->", n[reindex[i]]);
		scanf("%i", &resultado[iii][i]);

		system("cls");
	}
}
