#include <stdio.h>


int main(int argc, char** argv)
{

	float x,y,a;
		
	printf("Informe o primeiro valor: ");
	scanf("%f",&x);
	printf("Informe o segundo valor: ");
	scanf("%f",&y);
	
	if(y<x){
		a=x;
		x=y;
		y=a;
		printf("Os valores sao %f %f",x,y);
		
	}else 
	printf("Os valores sao %f %f",x,y);
	
	return 0;
}