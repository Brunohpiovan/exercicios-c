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
	int X,Y;
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
	
	do{
	   	printf("\nDigite de 0 a 9,de qual produto deseja ver os dados: \n");
	   	scanf("%d",&Y);
	   	printf("\nDADOS PRODUTO: \n");
		printf("Codigo: %d\n",prod[Y].codigo);
		printf("Descricao: %s\n",prod[Y].descricao);
		printf("Marca: %s\n",prod[Y].marca);
		printf("Preco: %.2f\n",prod[Y].preco);
	}while(Y>=0 && Y<=9);
	printf("\nPrograma encerrado!!");
	
	return 0;
}