#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(int argc, char** argv)
{
	
	int NL;
	float AT,M,AQ,AP,A;
	
	setlocale(LC_ALL,"Portuguese");
	printf("Quantos lados tem o seu polígono regular? ");
	scanf("%d",&NL);
	printf("qual a medida de seus lados?(cm) ");
	scanf("%f",&M);
	
	if(NL==3)
	{
		AT=(pow(M,2)*sqrt(3))/4;
		printf("TRIÂNGULO.\n");
		printf("A área do triângulo é %.2f %s",AT,"cm^2");
	}else if(NL==4){
		AQ=M*M;
		printf("QUADRADO.\n");
		printf("A área do quadrado é %.2f %s",AQ,"cm^2");
		
	}else if(NL==5){
		printf("PENTÁGONO\n");
		printf("Informe seu apótema: ");
		scanf("%f",&A);
		AP=5*M*A;
		printf("A área do pentágono é %.2f %s",AP,"cm^2");
		
	}else
	{
		printf("ERRO");
	}
	
	return 0;
}