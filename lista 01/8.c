/*
entrada:idade
processamento:ANON=2024 - idade;
saida:"o seu provavel ano de nascimento e %d", ANON

*/
#include <stdio.h>

int main()
{	
	int idade,ANON;
	
	printf("qual a sua idade? ");
	scanf("%d",&idade);
	ANON=2024 - idade;
	printf("o seu provavel ano de nascimento e %d", ANON);
	
	
	return 0;
}