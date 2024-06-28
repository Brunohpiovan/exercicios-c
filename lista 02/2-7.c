/*
ENTRADA:tempo,distancia
PROCESSAMENTO:DT=T*KM;
	QG=DT/QL;
SAIDA:quantidade de galoes
*/
#include <stdio.h>
#include <math.h>


int main()
{	
	float QL,T,KM,DT,QG;
	
	QL=5*12;
	printf("qual o tempo gasto na viagem em horas? ");
	scanf("%f",&T);
	printf("qual a distancia em km? ");
	scanf("%f",&KM);
	DT=T*KM;
	QG=DT/QL;
	printf("a quantidade de galoes necessarios e de %.1f",QG);
	
	return 0;
}