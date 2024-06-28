#include <stdio.h>



int main(int argc, char** argv)
{
	
	int X;
	float F,N,D,SOMA;
	
	N=1;
	D=1;
	SOMA=0;
	
	
	for(X=1;X<=50;X++){
		F=N/D;
		N=N+2;
		D++;
		SOMA=SOMA+F;
		
	}
	printf("O resultado de S e %.2f",SOMA);
	
	return 0;
}