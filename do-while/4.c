#include <stdio.h>



int main(int argc, char** argv)
{
	
	int N1,N2;
	
	printf("Informe um numero: ");
	scanf("%d",&N1);
	do{
		printf("Tente adivinhar o numero informado: ");
		scanf("%d",&N2);	
	}while(N1!=N2);
	
	printf("Parabens,voce acertou!!");
	
	
	
	return 0;
}