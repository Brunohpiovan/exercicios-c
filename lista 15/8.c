#include <stdio.h>



int main(int argc, char** argv)
{
	
	int X,I;
	float F,N,D,SOMA;
	
	N=1;
	D=1;
	SOMA=0;
	I=1;
	
	for(X=1;X<=10;X++){
		F=N/D;
		N++;
		D=D+I+2;
		SOMA=SOMA+F;
		
	}
	printf("O resultado de S e %.2f",SOMA);
	
	return 0;
}