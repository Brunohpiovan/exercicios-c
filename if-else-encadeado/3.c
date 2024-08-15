#include <stdio.h>


int main(int argc, char** argv)
{
	
	float TEMP;
	
	printf("Informe a temperatura da agua em CELSIUS:");
	scanf("%f",&TEMP);
	if(TEMP>100){
		printf("A agua esta em estado de vapor.");
	}else if(TEMP>0){
		printf("A agua esta em estado liquido.");
	}else
	{
		printf("A agua esta em estado solido");
	}
	
	return 0;
}