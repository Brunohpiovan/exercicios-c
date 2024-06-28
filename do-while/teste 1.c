#include <stdio.h>


int main(int argc, char** argv)
{
	
	char cont;
	
	do{
		int N1,N2,R;
		
		printf("PROGRAMA-ADICAO\n");
		printf("Informe o primeiro numero: ");
		scanf("%d",&N1);
		printf("Informe o segundo numero: ");
		scanf("%d",&N2);
		R=N1+N2;
		printf("o soma e %d",R);
		printf("\nVoce deseja continuar o programa?(S/N)\n");
		scanf(" %c",&cont);
	}while(cont == 's' || cont == 'S');
	printf("\nENCERRADO.");
	
	
	
	return 0;
}