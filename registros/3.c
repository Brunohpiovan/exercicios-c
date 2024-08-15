#include <stdio.h>

struct produto
{
	int codigo;
	char descricao[100],marca[50];
	float preco;
};

int main(int argc, char** argv)
{
	
	struct produto prod;
	
	printf("Qual o codigo do produto? ");
	scanf("%d",&prod.codigo);
	fflush(stdin);
	printf("Qual a descricao do produto? ");
	gets(prod.descricao);
	fflush(stdin);
	printf("Qual a marca do produto? ");
	gets(prod.marca);
	printf("Qual o preco do produto? ");
	scanf("%f",&prod.preco);
	printf("\nDADOS PRODUTO: \n");
	printf("Codigo: %d\n",prod.codigo);
	printf("Descricao: %s\n",prod.descricao);
	printf("Marca: %s\n",prod.marca);
	printf("Preco: %.2f\n",prod.preco);
	
	
	
	return 0;
}