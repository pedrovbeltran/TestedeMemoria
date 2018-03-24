/*------------------------------------------------------------------------------------------------------

	Programa de Gerador de gráficos do Teste de Memória
	
	Feito por Saulo Alexandre, Pedro Victor e Jardson Bruno
	Para a disciplina Fundamentos da Programação
	do curso Técnico em Eletrônica 
	Do Instituto Federal de Ciencia e Tecnologia de Pernambuco
	Dada pelo professor Doutor Paulo Sérgio

	Esta obra está licenciada com uma licença Creative Commons Atribuição-NãoComercial 4.0 Internacional

------------------------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <locale.h>
#include "geragraficos.h"// Função que cria gráficos das respostas no plano cartesiano
main(){
	int num,i;
		setlocale(LC_ALL,"");// Para a inclusão da formatação em português
	printf("Quantas números o usuário pediu para ver? ");
	scanf("%d",&num);
	
	int acerto[num+1];
	for(i=1;i<=num;i++){
	
		printf("Soma de vezes acertadas na %da rodada : ",i);
	scanf("%d",&acerto[i]);
	
}
	geragraficos(num,acerto);
}
