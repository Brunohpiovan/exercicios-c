#include <stdio.h>

float lercelsius();
float calculofahrenheit(float);
void apresentar(float);

int main(int argc, char** argv)
{
	float C,F;
	C=lercelsius();
	F=calculofahrenheit(C);
	apresentar(F);
	
	return 0;
}
float lercelsius(){
	float celsius;
	printf("Qual a temperatura em celsius?");
	scanf("%f",&celsius);
	return celsius;
}
float calculofahrenheit(float celsius){
	float RES;
	RES=(9*celsius/5) + 32;
	return RES;
}
void apresentar(float resultado){
	printf("A conversao resulta em: %.2f ",resultado);
}