#include <stdio.h>
#include <string.h>


int main(int argc, char** argv)
{
	
	float A,PI;
	char GN[15];
	
	printf("Informe a sua altura(Metros): ");
	scanf("%f",&A);
	if(A>=1.6){
		fflush(stdin);
		printf("Qual o seu sexo?\n");
		printf("MASCULINO\n");
		printf("FEMININO\n");
		gets(GN);
		if(strcmp(GN,"masculino")==0 || strcmp(GN,"Masculino")==0 || strcmp(GN,"MASCULINO")==0 ){
			PI=(72.7*A)-58;
			printf("Seu peso ideal e %.2f kg",PI);
		}else if(strcmp(GN,"feminino")==0 || strcmp(GN,"Feminino")==0 || strcmp(GN,"FEMININO")==0 ){
			PI=(72.7*A)-58;
			printf("Seu peso ideal e %.2f kg",PI);
		}else
		{
			printf("ERRO");
		}
	}else
	{
		printf("Nao possui altura minima para o calculo.");
	}
	
	return 0;
}