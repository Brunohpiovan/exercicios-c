/*
ENTRADA:salario minimo,horas trbalhadas,horas extras
PROCESSAMENTO:SL=(SM+VT+VE-VA)*89/100;
SAIDA:salario liquido

*/
#include <stdio.h>
#include <math.h>

int main()
{	
	float SM,HT,HA,HE,VT,VA,VE,SL,TH;
	
		printf("qual o valor do salario minimo? ");
		scanf("%f",&SM);
		printf("quantas horas vc trabalhou? ");
		scanf("%f",&HT);
		printf("quantas horas vc ficou ausente? ");
		scanf("%f",&HA);
		printf("quantas horas voce fez extra? ");
		scanf("%f",&HE);
		VT=HT*(SM*4/100);
		VA=HA*(SM*4/100);
		VE=HE*(SM*6/100);
		SL=(SM+VT+VE-VA)*89/100;
		printf("o seu salario final e de %.2f",SL);
		
	
	return 0;
}