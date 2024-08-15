#include <stdio.h>


int main(int argc, char** argv)
{
	
	char NOME[50],GEN;
	
	
	printf("Informe seu nome:");
	gets(NOME);
	printf("Voce se identifica de qual genero?\n");
	printf("(F)FEMININO\n");
	printf("(M)MASCULINO\n");
	scanf("%c",&GEN);
	if(GEN=='M' || GEN=='m'){
		printf("Bem vindo senhor %s!",NOME);
	}else if(GEN=='F' || GEN=='f')
		{
		   	printf("Bem vindo senhora %s!",NOME);
		}
	
	return 0;
}