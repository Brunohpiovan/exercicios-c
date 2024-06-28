#include <stdio.h>

int main()
{
	
	int E;
	
	printf("Escolha um numero entre 1 e 6:");
	scanf("%d",&E);
	
	if(E>=1 && E<=6){
		printf("Valor digitado com sucesso.");
	}else
	{
		printf("Valor fora do intervalo permitido.");
	}
	
	return 0;
}