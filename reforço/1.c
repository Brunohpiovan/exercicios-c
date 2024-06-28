#include <stdio.h>
#include <locale.h>


int main(int argc, char** argv)
{
	
	int IDD,E;
	
	setlocale(LC_ALL,"Portuguese");
	printf("qual a sua idade? ");
	scanf("%d",&IDD);
	
	if(IDD>=18){
		printf("Digite 1 para CARRO ou 2 para MOTO:");
		scanf("%d",&E);
		switch(E){
			case 1:
				printf("muito bom! Viajar requer espaço para mala!");
				break;
			case 2:
				printf("Um Lobo Solitário não precisa de mala para atravessar o país");
				break;
		}
	}else
	{
		printf("Digite 1 para suco ou 2 para refrigerante");
		scanf("%d",&E);
		switch(E){
			case 1:
				printf("muito bom! Suco é saudável!");
				break;
			case 2:
				printf("refrigerante é refrescante e combina com pipoca!");
				break;
		}
	}
	printf("\nAté breve!");
	
	
	return 0;
}