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
				printf("muito bom! Viajar requer espa�o para mala!");
				break;
			case 2:
				printf("Um Lobo Solit�rio n�o precisa de mala para atravessar o pa�s");
				break;
		}
	}else
	{
		printf("Digite 1 para suco ou 2 para refrigerante");
		scanf("%d",&E);
		switch(E){
			case 1:
				printf("muito bom! Suco � saud�vel!");
				break;
			case 2:
				printf("refrigerante � refrescante e combina com pipoca!");
				break;
		}
	}
	printf("\nAt� breve!");
	
	
	return 0;
}