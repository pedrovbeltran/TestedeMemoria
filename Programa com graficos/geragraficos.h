#include <iostream>
#include <stdlib.h>// necessário p/ as funções rand() , srand() e fopen()
#include <time.h>//necessário p/ função time()
#include <stdio.h>
#include <winbgim.h>
#include<conio.h>
#include <locale.h>

void geragraficos(int nn, int acerto[])
{
	
	initwindow(610, 500);					// Abrindo a janela gráfica do windows
	setbkcolor(15);							// Cor do fundo
   	cleardevice();
	setcolor(1);							// Cor do texto
	outtextxy(30,15,"Questoes acertadas");// impimindo o nome do eixo y
	outtextxy(450,470,"Número da rodada");//imprimindo o nome do eixo X
	setcolor(10);
	line(0,450,6000,450);// traça o eixo y
	line(542,440,550,450);
	line(542,460,550,450);
	line(25,0,25,6000);// traça o eixo x
	line(25,0,15,8);
	line(25,0,35,8);
	
	int i;
	int eixox=500/nn;
	int eixoy=440/nn;
	char grafico[50];
	
	for(i=1;i<=nn;i=i+1){       // desenha o gráfico no eixo x
	setcolor(1); 
	circle(i,450,2);
	sprintf(grafico, "%d",i );
	outtextxy(25+i*eixox,455,grafico);
	
}
	
	for(i=1;i<=nn;i=i+1){       // desenha o gráfico no eixo y
	setcolor(1);
	circle(25,450-i,2);
	sprintf(grafico, "%d",i );
	outtextxy(10,450-i*eixoy,grafico);
	
}

	setcolor(7);
	
	for(i=1;i<=nn;i++){
	
	line(eixox*(i-1) + 25,(nn-acerto[i])*eixoy +10,eixox*i + 25,(nn-acerto[i])*eixoy +10);
}

for(i=1;i<=nn;i++){
	acerto[nn +1]=0;
	line(eixox*i+25,(nn-acerto[i])*eixoy +10,eixox*i + 25,(nn-acerto[i+1])*eixoy +10);
}
	while(!kbhit()) delay(1);//Trava o gráfico na tela
}
