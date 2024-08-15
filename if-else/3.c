#include <stdio.h>


int main(int argc, char** argv)
{
	
	float TEMP;
	
	printf("Informe sua temperatura corporal:");
	scanf("%f",&TEMP);
	if(TEMP<=37){
		printf("Voce esta sem febre.");
	}else
	{
		printf("Voce esta com febre,procure um profissional da saude!");
	}
	
		
	return 0;
}