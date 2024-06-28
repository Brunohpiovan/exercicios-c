/*
ENTRADA:preco na montadora
PROCESSAMENTO:L=PM*15/100;
		IPI=PM*11/100;
		ICM=PM*17/100;
		PV=PM+L+IPI+ICM;
		IM=IPI+ICM;
SAIDA:preco de venda e impostos

*/

#include <stdio.h>
#include <math.h>

int main()
{	
	float PM,L,IPI,ICM,PV,IM;
	
		printf("qual o valor do carro na montadora? ");
		scanf("%f",&PM);
		L=PM*15/100;
		IPI=PM*11/100;
		ICM=PM*17/100;
		PV=PM+L+IPI+ICM;
		IM=IPI+ICM;
		printf("o valor de venda e R$%.2f %s\n",PV);
		printf("com um total de R$%.2f %s",IM,"de impostos.");
		
	return 0;
}