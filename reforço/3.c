#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(int argc, char** argv)
{
	
	int NL;
	float AT,M,AQ,AP,A;
	
	setlocale(LC_ALL,"Portuguese");
	printf("Quantos lados tem o seu pol�gono regular? ");
	scanf("%d",&NL);
	printf("qual a medida de seus lados?(cm) ");
	scanf("%f",&M);
	
	if(NL==3)
	{
		AT=(pow(M,2)*sqrt(3))/4;
		printf("TRI�NGULO.\n");
		printf("A �rea do tri�ngulo � %.2f %s",AT,"cm^2");
	}else if(NL==4){
		AQ=M*M;
		printf("QUADRADO.\n");
		printf("A �rea do quadrado � %.2f %s",AQ,"cm^2");
		
	}else if(NL==5){
		printf("PENT�GONO\n");
		printf("Informe seu ap�tema: ");
		scanf("%f",&A);
		AP=5*M*A;
		printf("A �rea do pent�gono � %.2f %s",AP,"cm^2");
		
	}else
	{
		printf("ERRO");
	}
	
	return 0;
}