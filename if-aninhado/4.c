#include <stdio.h>


int main(int argc, char** argv)
{
	
	
	int SEN,E;
	
	printf("Informe o numero da sua senha: ");
	scanf("%d",&SEN);
	if(SEN>100){
		printf("MENU\n");
		printf("1-Prioridade\n");
		printf("2-Aposentado\n");
		printf("3-Comum\n");
		scanf("%d",&E);
		if(E==1){
			printf("Voce sera reagendado para amanha.");
		}else if(E==2){
			printf("Voce sera reagendado para depois de amanha.");
		}else if(E==3){
			printf("VocE deve tentar outro dia.");
		}
		
	}else
	{
		printf("Aguarde para ser atendido.");
	}
	return 0;
}