#include <stdio.h>

float nota1(){
	float nota1;
	printf("Informe a N1: ");
	scanf("%f",&nota1);
	return nota1;
}
float nota2(){
	float nota2;
	printf("Informe a N2: ");
	scanf("%f",&nota2);
	return nota2;
}
float calculo(float nota1,float nota2){
	float media;
	media=(nota1+nota2)/2;
	return media;
}
void apresentar(float M){
	printf("A sua media final foi:%.1f",M);
}


int main(int argc, char** argv)
{
	float N1,N2,M;
	
	N1=nota1();
	N2=nota2();
	M=calculo(N1,N2);
	apresentar(M);
	return 0;
}