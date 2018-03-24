#include "stdio.h"
#include "stdbool.h"

geravgg(short int nr, short int nn, bool resultado[][20], short int vgg[], short int i, short int ii)
{
	for (i = 0; i < nr; ++i)
	{
		vgg[i] = 0;

		for (ii = 0; ii < nn; ++ii)
		{
			vgg[i] = vgg[i] + resultado[i][ii];
		}
	}
}
