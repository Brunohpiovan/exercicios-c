#include <stdio.h>


int main(int argc, char** argv)
{
	
	int IDD;
	
	printf("Informe sua idade: ");
	scanf("%d",&IDD);
	if(IDD>=18 && IDD<=65){
		printf("Voce e obrigado a votar.");
	}else
	{
		printf("Voce nao e obrigado a votar.");
	}
	
	return 0;
}