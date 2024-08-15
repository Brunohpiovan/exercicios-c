#include <stdio.h>


int main(int argc, char** argv)
{
	
	float N1,N2,M;

	printf("Informe a N1:");
	scanf("%f",&N1);
	printf("Informe a N2:");
	scanf("%f",&N2);
	M=(N1+N2)/2;
	
	if(M>=6){
		printf("Voce foi aprovado!!");
	}else
	{
		printf("Voce foi reprovado.");
	}
	
	
	return 0;
}