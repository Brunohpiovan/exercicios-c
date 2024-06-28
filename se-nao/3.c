#include <stdio.h>

int main()
{	
	float T;
	
	printf("informe a temperatura da agua(C): ");
	scanf("%f",&T);
	if (T>100){
		printf("A agua esta em estado de vapor.");
	}else if (T>0){
		printf("A agua esta em estado liquido.");
	}else {
		printf("A agua esta em estado solido.");
	}
	
	
	return 0;
}