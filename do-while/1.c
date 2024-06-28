#include <stdio.h>



int main(int argc, char** argv)
{
	
	int SN;
	do{
		printf("\nInforme a senha numerica: ");
		scanf("%d",&SN);
		if(SN!=123456){
			printf("Senha incorreta.\n");
		}	
	}while(SN!=123456);
	
	printf("Senha correta.Seja bem-vindo!");
	
	
	
	return 0;
}