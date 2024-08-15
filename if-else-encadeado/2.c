#include <stdio.h>


int main(int argc, char** argv)
{
	
	float SAL;
	
	printf("Informe seu salario:");
	scanf("%f",&SAL);
	if(SAL>18000){
		printf("Voce e classe A!");
	}else if(SAL>9000){
		printf("Voce e classe B!");
	}else
	{
		printf("Voce e classe C ou menor.");
	}
	
	
	return 0;
}