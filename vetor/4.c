#include <stdio.h>


int main(int argc, char** argv)
{
	
	int i;
	double N[5],MENOR;
	
	
	for(i=0;i<5;i++){
		printf("informe um numero real: ");
		scanf("%lf",&N[i]);
		
	}
	MENOR=N[0];
	for(i=0;i<5;i++){
		if(N[i]<MENOR){
			MENOR=N[i];
		}
	}
	

	printf("O menor numero real digitado foi %.1lf",MENOR);
	return 0;
}