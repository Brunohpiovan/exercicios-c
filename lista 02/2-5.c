/*
ENTRADA:salario,dependentes
PROCESSAMENTO:SF=S*2/100;
		SL=D*SF;
SAIDA:salario familia
*/

#include <stdio.h>
#include <math.h>

int main()
{	
	int D;
	float S,SF,SL;
	
		printf("qual o valor do seu salario? ");
		scanf("%f",&S);
		printf("quantos dependentes voce tem em sua familia? ");
		scanf("%d",&D);
		SF=S*2/100;
		SL=D*SF;
		printf("o valor a mais que voce recebera,como salario familia e de %.2f",SL);
	
	return 0;
}