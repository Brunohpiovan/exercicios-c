#include <stdio.h>


int main(int argc, char** argv)
{
	
	float N,F;
	
	printf("Informe sua nota: ");
	scanf("%f",&N);
	printf("Informe sua frequencia: ");
	scanf("%f",&F);
	
	if (F>=75){
		if(N>=6){
			printf("Aprovado.");
		}
		 else if (N>=4 && N<6){
			 printf("Recuperacao");
		 }else
		 {
			 printf("reprovado.");
		 }
	}else
	{
		printf("Reprovado por frequencia.");
	}
	
	return 0;
}