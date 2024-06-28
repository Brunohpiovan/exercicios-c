/*
ENTRADA:raio
PROCESSAMENTO:A=3.14*pow(R,2);
SAIDA;area do circulo
*/

#include <stdio.h>
#include <math.h> 

int main()
{	
	float A,R;
	
	printf("digite o raio do circulo:(cm)");
	scanf("%f",&R);
	A=3.14*pow(R,2);
	printf("a area total do circulo e de %.2f %s",A,"cm^2");
	
	
	return 0;
}