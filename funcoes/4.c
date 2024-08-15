#include <stdio.h>

float lerfah(){
	float fahrenheit;
	printf("Informe a temperatura em fahrenheit: ");
	scanf("%f",&fahrenheit);
	return fahrenheit;
}
float conversao(float F){
	float C;
	C=5*(F-32)/9;
	return C;
}
void apresentar(float F,float resultado){
	printf("A temperatura em fahrenheit era:%.2f\n",F);
	printf("O valor da conversao resulta em:%.2f graus",resultado);
}



int main(int argc, char** argv)
{
	float F,RES;
	
	F=lerfah();
	RES=conversao(F);
	apresentar(F,RES);
	return 0;
}