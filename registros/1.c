#include <stdio.h>

struct cliente{
		int cod;
		char nome[50];
		char endereco[50];
	};

int main(int argc, char** argv)
{
	struct cliente CLI;
	
	printf("Informe seu codigo: ");
	scanf("%d",&CLI.cod);
	fflush(stdin);
	printf("Informe seu nome: ");
	gets(CLI.nome);
	fflush(stdin);
	printf("Informe seu endereco: ");
	gets(CLI.endereco);
	
	printf("\nDADOS:\n");
	printf("Codigo:%d\n",CLI.cod);
	printf("Nome:%s\n",CLI.nome);
	printf("Endereco:%s\n",CLI.endereco);
	
	
	
	return 0;
}