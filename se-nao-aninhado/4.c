#include <stdio.h>
#include <locale.h>


int main(int argc, char** argv)
{
	
	int SN,M;
	
	setlocale(LC_ALL,"Portuguese");
	printf("Qual a sua senha de fila? ");
	scanf("%d",&SN);
	printf("(1)PRIORIDADE\n");
	printf("(2)APOSENTADO\n");
	printf("(3)COMUM\n");
	scanf("%d",&M);
	if(SN<100){
		printf("\nAguarde para ser atendido.\n");
	}else if(M==1){
		printf("Voc� ser� reagendado para amanh�.");
	}else if(M==2){
		printf("Voc� ser� reagendado para depois de amanh�.");
	}else if (M==3){
		printf("Voc� deve tentar outro dia.");
	}else
	{
		printf("Erro");
	}
	
	return 0;
}