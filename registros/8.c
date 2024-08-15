#include <stdio.h>
#define TAM 100

struct cliente
{
	int cpf;
	char nome[50];
	char conta[20];
};

int main(int argc, char** argv)
{
	int X;
	struct cliente cli[TAM];
	
	for(X=0;X<TAM;X++){
		printf("\nInforme seu CPF: ");
		scanf("%d",&cli[X].cpf);
		printf("Informe seu nome: ");
		fflush(stdin);
		gets(cli[X].nome);
		printf("Conta corrente ou poupanca? ");
		fflush(stdin);
		gets(cli[X].conta);
		printf("\n-----------------------\n");
	}
	for(X=0;X<TAM;X++){
		printf("\nDADOS CLIENTE %d:\n",X+1);
		printf("CPF: %d\n",cli[X].cpf);
		printf("Nome: %s\n",cli[X].nome);
		printf("Conta: %s\n",cli[X].conta);
		printf("\n-----------------------\n");
	}
	
	return 0;
}