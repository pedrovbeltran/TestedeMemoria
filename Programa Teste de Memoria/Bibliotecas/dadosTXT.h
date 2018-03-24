#include "stdio.h"
#include "stdlib.h"


	void TXT (short int nr, float t, short int nn, short int j, short int i, short int ii, bool resultado[][20], bool l[], short int vgg[])
    {
    	//********* Criando o .TXT ************
		FILE *fp;
		fp = fopen("Dados.txt", "w+");
		//-------------------------------------
	
    	//********* Colocando os resultados no .TXT ************
    	j=  fprintf(fp,"Dados do jogo\n\n\n");
        j=  fprintf(fp, "Tempo do jogo: %.1f segundos\n" ,t);
        j=  fprintf(fp, "Número de rodadas: %i\n",nr);
        j=  fprintf(fp, "Número de valores: %i\n\n",nn);
        //------------------------------------------------------
        
        for (i = 1; i <= nr; ++i)
		{
        	j=  fprintf(fp, "Na %ia rodada o usuário pediu para ver os números em: ", i);

        	if(l[i-1]==1)
            {
            	j=fprintf(fp, "LINHA\n\n");
            }
                                   
            if(l[i-1]==0)
            {
            	j=fprintf(fp, "COLUNA\n\n");
            }     
		}
		
		j = fprintf(fp, "--------------------------------------====---------------------------------------\n\n");
		j = fprintf(fp, "Matriz dos Resultados:\n\n");

		for (ii = 0; ii < nr; ++ii)
		{
			for (i = 0; i < nn; ++i)
			{
				j = fprintf(fp,"%i ", resultado[ii][i]);
			}

			j = fprintf(fp, "\n");
		}

		j = fprintf(fp, "--------------------------------------====---------------------------------------\n\n");
		j = fprintf(fp, "Número de acertos por rodada:\n\n");

		for (i = 0; i < nr; ++i)
		{
			j = fprintf(fp, "%ia rodada: %i acertos\n", i+1, vgg[i]);
		}

		j = fprintf(fp, "\nAbra o Programa 'Gráfico Teste de Memória.exe' para ver o gráfico de conhecimento do usuário");
		//------------------------------------------------------------------------------------------------------

		fclose(fp); //Fecha o arquivo .TXT
	}
