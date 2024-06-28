#include <stdio.h>

int main()
{
	char NOME[50];
	char GENERO;

	
	printf("informe seu nome: ");
	scanf("%s",&NOME);
	printf("informe seu genero(F/M)");
	scanf(" %c",&GENERO);
	if (GENERO == 'M'){
	printf("Ola,senhor %s.",NOME);
	}else{
		printf("Ola,senhora %s.",NOME);
	}
	
	
	

	
	
	
	return 0;
}