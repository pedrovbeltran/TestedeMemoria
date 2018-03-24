#include "stdio.h"
#include "stdlib.h"

void geranumerosaleatorios(short int i, short int ii, short int n[], short int nn)
{
	n[0] = rand() % 100; //Números propriamente ditos, que aparecerão na tela do usuário durante o teste de memória

	for (i = 1; i < nn; ++i)
	{
		n[i] = rand() % 100;

		ii = 0;

		while(ii < i)
		{
			if (n[ii] == n[i])
			{
				--i;
				break;
			}
			else
				++ii;
		}
	}
}
