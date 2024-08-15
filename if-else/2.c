#include <stdio.h>



int main(int argc, char** argv)
{

	float SAL;

	printf("Informe seu salario:");
	scanf("%f",&SAL);
	if(SAL<1045){
		printf("Voce ganha menos que um salario minimo.");
	}else
	{
		printf("Voce ganha pelo menos um salario minimo.");
	}
	return 0;
}