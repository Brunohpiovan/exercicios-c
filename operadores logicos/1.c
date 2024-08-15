#include <stdio.h>


int main(int argc, char** argv)
{
	
	int N;
	
	printf("Digite um numero entre 1 e 6: ");
	scanf("%d",&N);
	
	if(N>=1 && N<=6){
		printf("Valor digitado com sucesso!");
	}else
	{
		printf("Valor incorreto.");
	}
	return 0;
}