#include <stdio.h>
#include <locale.h>
#include <math.h>



int main(int argc, char** argv)
{
	
	float C,F,K,KM,M;
	int E,ET,ED;
	
	setlocale(LC_ALL,"Portuguese");
	printf("\n(1)CONVERSÃO DE TEMPERATURA");
	printf("\n(2)CONVERSÃO DE DISTÂNCIA\n");
	scanf("%d",&E);
	
	if(E==1){
			printf("\n(1)Converter Celsius para Farenheit");
			printf("\n(2)Converter Farenheit para Celsius");
			printf("\n(3)-Converter Celsius para Kelvin\n");
			scanf("%d",&ET);
			if(ET==1){
				printf("Informe a temperatura em celsius: ");
				scanf("%f",&C);
				F=(9*C/5)+32;
				printf("A temperatura convertida e de %.2f %s",F,"Farenheit.");
			}else if(ET==2){
				printf("Informe a temperatura em Farenheit: ");
				scanf("%f",&F);
				C=5*(F-32)/9;
				printf("A temperatura convertida em Celsius e de %.2f %s",C,"C.");
			}else if(ET==3){
				printf("Informe a temperatura em Celsius: ");
				scanf("%f",&C);
				K=C+273;
				printf("A temperatura convertida e de %.2f %s",C,"KELVIN.");
			}else
			{
				printf("ERRO");
			}	
	}else if(E==2){
		   	printf("\n(1)Converter KM para milhas");
			printf("\n(2)Converter milhas para KM\n");
			scanf("%d",&ED);
			if(ED==1){
				printf("Informe a distância em KM: ");
				scanf("%f",&KM);
				M=KM*0.62137;
				printf("A distância convertida e de %.2f %s",M,"milhas.");
			}else if(ED==2){
				printf("Informe a distância em MILHAS: ");
				scanf("%f",&M);
				KM=M/0.62137;
				printf("A distância convertida e de %.2f %s",KM,"KM.");
			}else
			{
				printf("ERRO");
			}
	}else
	{
		printf("ERRO");
	}
}