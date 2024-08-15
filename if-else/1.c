#include <stdio.h>


int main(int argc, char** argv)
{
	
	float SAL;
	
	printf("informe seu salario:");
	scanf("%f",&SAL);
	if(SAL>=10000){
		printf("Voce ganha bem!!");
	}else
	{
		printf("Voce nao ganha relativamente bem.Mas pode melhorar!");
	}
	
	
	
	
	return 0;
}