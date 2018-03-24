#include "stdio.h"
#include "stdlib.h"
#include "time.h"

short int gerareindex(short int i, short int ii, short int reindex[], short int nn)
{
	reindex[0] = rand() % nn; // Variável de reindexação, para apresentar novamente os números ao usuário em ordem aleatória
				
	for (i = 1; i < nn; ++i)
	{
		reindex[i] = rand() % nn;

		ii = 0;
								
		while(ii < i)
		{
			if (reindex[ii] == reindex[i])
			{
				--i;
				break;
			}	
			else
				++ii;
		}
	}
}
