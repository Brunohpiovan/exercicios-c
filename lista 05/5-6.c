#include <stdio.h>
#include <math.h>

int main()
{	float R,H,A,V;
	
	printf("informe o raio do cilindro(CM): ");
	scanf("%f",&R);
	printf("informe a altura do cilindro(CM): ");
	scanf("%f",&H);
	A=2*M_PI*R*H*(H+R);
	V=M_PI*pow(R,2)*H;
	printf("a area do cilindro e de %.1f %s %.1f",A,"cm e seu volume e",V);
	
	return 0;
}