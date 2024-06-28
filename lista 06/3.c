#include <stdio.h>

int main()
{
	float T;
	
	printf("informe sua temperatura corporal(c):");
	scanf("%f",&T);
	if(T<37){
		printf("voce esta sem febre.");
	}else{
		printf("voce esta com febre!!!");
	}
	
	
	
	return 0;
}