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
		printf("\nMENU: \n");
		printf("\n1-Alterar dados do produto:");
		printf("\n2-Ver dados do produto:");
		printf("\n0-Encerrar: \n");
		scanf("%d",&X);
		if(X==1){
			printf("De qual produto voce deseja alterar os dados?0 a 9:");
			scanf("%d",&Y);
			printf("\nQual o codigo do produto? ");
		   	scanf("%d",&prod[Y].codigo);
			fflush(stdin);
			printf("Qual a descricao do produto? ");
			gets(prod[Y].descricao);
			fflush(stdin);
			printf("Qual a marca do produto? ");
		   	gets(prod[Y].marca);
			printf("Qual o preco do produto? ");
	   	   	scanf("%f",&prod[Y].preco);
	   	   	printf("\nProduto alterado com sucesso.");
	   		printf("\n-----------------------\n");
		}else if(X==2){
			printf("De qual produto voce deseja ver os dados?0 a 9:");
			scanf("%d",&Y);
			printf("Codigo: %d\n",prod[Y].codigo);
			printf("Descricao: %s\n",prod[Y].descricao);
			printf("Marca: %s\n",prod[Y].marca);
			printf("Preco: %.2f\n",prod[Y].preco);
			printf("\n-----------------------\n");
		}
	}while(X!=0);
	printf("\nPrograma encerrado!!");
	
	return 0;
}