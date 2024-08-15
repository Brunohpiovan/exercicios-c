#include <stdio.h>
#define TAM 10

struct produto
{
	int codigo;
	char descricao[100],marca[50];
	float preco;
};

int main(int argc, char** argv)
{
	int X;
	struct produto prod[TAM];
	
	for(X=0;X<TAM;X++){
		printf("\nQual o codigo do produto? ");
		scanf("%d",&prod[X].codigo);
		fflush(stdin);
		printf("Qual a descricao do produto? ");
		gets(prod[X].descricao);
		fflush(stdin);
		printf("Qual a marca do produto? ");
		gets(prod[X].marca);
		printf("Qual o preco do produto? ");
	   	scanf("%f",&prod[X].preco);
	   	printf("\n-----------------------\n");
	}
	
	for(X=0;X<TAM;X++){
		printf("\nDADOS PRODUTO:%d\n",X);
		printf("Codigo: %d\n",prod[X].codigo);
		printf("Descricao: %s\n",prod[X].descricao);
		printf("Marca: %s\n",prod[X].marca);
		printf("Preco: %.2f\n",prod[X].preco);
		printf("\n-----------------------\n");
		
	}
	
	return 0;
}