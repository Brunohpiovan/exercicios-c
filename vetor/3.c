#include <stdio.h>


int main(int argc, char** argv)
{
	
	int i;
	double N[5],MAIOR=0;
	
	
	for(i=0;i<5;i++){
		printf("informe um numero real: ");
		scanf("%lf",&N[i]);
		if(N[i]>MAIOR){
			MAIOR=N[i];
		}
	}

	printf("O maior numero real digitado foi %.1lf",MAIOR);
	
	return 0;
}