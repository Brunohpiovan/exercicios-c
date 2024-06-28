#include <stdio.h>
#include <math.h>

int main()
{	
	
	float L1,L2,L3,T,A;
	
	printf("informe o primeiro lado do triangulo(cm): ");
	scanf("%f",&L1);
	printf("informe o segundo lado do triangulo(cm): ");
	scanf("%f",&L2);
	printf("informe o terceiro lado do triangulo(cm): ");
	scanf("%f",&L3);
	T=(L1+L2+L3)/2;
	A=sqrt(T*(T-L1)*(T-L2)*(T-L3));
	printf("a area do triangulo e de:%.1f %s",A,"cm^2");
	
	
	return 0;
}