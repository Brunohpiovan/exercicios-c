/*
ENTRADA:alunos
PROCESSAMENTO:GP=ALUNOS/4;
		GR=ALUNOS%4;
SAIDA:grupos inteiro,e resto
*/
#include <stdio.h>
#include <math.h>


int main()
{	
	int ALUNOS,GP,GR;
	
		
		printf("quantos alunos tem ao total na sala? ");
		scanf("%d",&ALUNOS);
		GP=ALUNOS/4;
		GR=ALUNOS%4;
		printf("o total de grupos inteiros e %d %s %d",GP,"e o resto foi de",GR);
	
	return 0;
}