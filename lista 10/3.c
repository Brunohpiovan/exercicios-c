#include <stdio.h>
#include <locale.h>


int main()
{	
	
	int E;
	
	setlocale(LC_ALL,"Portuguese");
	printf("informe sua idade: ");
	scanf("%d",&E);
	
	if(E>=18 && E<=65){
		printf("Voc� � obrigado a votar.");
	}else
	{
		printf("Voc� n�o � obrigado a votar.");
	}
	
	return 0;
}