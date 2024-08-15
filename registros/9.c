#include <stdio.h>
#define TAM 100

struct funcionario
{
	char nome[50],cargo[20];
	float salario;
};

int main(int argc, char** argv)
{
	int X;
	float MAIORSAL;
	struct funcionario func[TAM];
	for(X=0;X<TAM;X++){
		fflush(stdin);
		printf("\nInforme seu nome: ");
		gets(func[X].nome);
		fflush(stdin);
		printf("\nInforme seu cargo: ");
		gets(func[X].cargo);
		printf("\nInforme seu salario: ");
		scanf("%f",&func[X].salario);
		if(X==0){
			MAIORSAL=func[X].salario;
		}else if(func[X].salario>MAIORSAL){
			MAIORSAL=func[X].salario;
		}
	}
	printf("O maior salario da empresa e de R$%.2f",MAIORSAL);
	return 0;
}