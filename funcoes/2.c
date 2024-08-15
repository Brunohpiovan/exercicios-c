#include <stdio.h>
#include <stdio.h>

float lercelsius();
float calculofahrenheit(float);
void apresentar(float,float);

int main(int argc, char** argv)
{
	float C,F;
	C=lercelsius();
	F=calculofahrenheit(C);
	apresentar(C, F);
	
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
void apresentar(float celsius,float resultado){
	printf("A temperatura em celsius era:%.2f\n",celsius);
	printf("A conversao resulta em: %.2f ",resultado);
}