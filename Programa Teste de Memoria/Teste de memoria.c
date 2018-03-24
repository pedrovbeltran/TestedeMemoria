/*------------------------------------------------------------------------------------------------------

	Programa de Teste de Memória
	
	Feito por Saulo Alexandre, Pedro Victor e Jardson Bruno
	Para a disciplina Fundamentos da Programação
	do curso Técnico em Eletrônica 
	Do Instituto Federal de Ciencia e Tecnologia de Pernambuco
	Dada pelo professor Doutor Paulo Sérgio

	Esta obra está licenciada com uma licença Creative Commons Atribuição-NãoComercial 4.0 Internacional

------------------------------------------------------------------------------------------------------*/
	

#include "stdio.h" // Entrada e Saída padrão (Standart Input Output)
#include "time.h" // Biblioteca para a geração dos nÃúmeros (pseudo)aleatórios com base no tempo
#include "stdlib.h" // Biblioteca padrão
#include "stdbool.h" // Biblioteca para as variáveis Booleanas
#include "locale.h" // Biblioteca para a formatação em Português

//**************************************** Funções de modularização *****************************************//
#include "apresentacao.h"//Biblioteca que exibe ao usuário a função do programa
#include "temporizador.h" // Biblioteca para geração de temporização
#include "dadosTXT.h" // Biblioteca para transporte dos dados do programa para o arquivo .txt
#include "recebevariaveis.h" // Biblioteca para receber os valores das variáveis
#include "fgvr.h" // Função Geradora da Variável de Reindexação
#include "fgna.h" // Função Geradora de Números (pseudo)Aleatórios
#include "exibicao.h" // Exibe os números gerados pela função anterior na tela do usuário pela primeira vez
#include "teste.h" // Testa o usuário
#include "fgg.h" //contabiliza as quantidades de erros e acertos
//--------------------------------------------------------------------------------------------------------------


int main(int argc, char const *argv[])

{
	setlocale(LC_ALL,"");// Para a inclusão da formatação em português
    srand(time(NULL)); //Para a geração de números (pseudo)aleatórios

    //*********** Declaração das variáveis ***********//
    float t;
	short int i, ii, iii, nn, n[20], reindex[20], j, nr,vgg[20]; 
	bool l[20], resultado[20][20];
	//--------------------------------------------------
	
	apresentacao();//Apresenta o programa ao usuário
	
		
	//* Recebendo os dados do usuário *//
	t = recebetempo (t);
	nr = recebenr (nr);
	nn = recebenn (nn);
    //-----------------------------------

    system("cls"); /// Limpa a tela

	for (iii = 0; iii < nr; ++iii) /// Dá início ao ciclo  de repetição do jogo
	{
		l[iii] = recebel (iii, l);

		//******* Gerando números (pseudo)aleatórios não repetitivos *******//
		gerareindex (i, ii, reindex, nn);
		geranumerosaleatorios (i, ii, n, nn);
		//--------------------------------------------------------------------

		mostranumeros (i, iii, nn, l, n); // Exibe os números na tela do usuário

		pausa(t); //Temporização

		system("cls");

		testausuario (i, iii, nn, l, n, resultado, reindex); // Testa o usuário, fazendo perguntas e coletando resultados
	}

		printf("\nFim do teste\n\nObrigado por jogar!\n\n");
		
		geravgg(nr, nn, resultado, vgg, i, ii);// soma as quantidades de erros e acertos em cada rodada

    	TXT(nr, t, nn, j, i, ii, resultado, l, vgg ); // Insere todos os dados do jogo na matriz

		system("pause"); //O programa só finaliza quando o usuário pressionar qualquer tecla

		return 0; //Retorna o valor 0 para a função principal
}
