#include <stdio.h>

int main()
{
	float M,N1,N2;
	
	printf("informe sua primeira nota: ");
	scanf("%f",&N1);
	printf("informe sua segunda nota: ");
	scanf("%f",&N2);
	M=(N1+N2)/2;
	if(M >= 6.0){
		printf("APROVADO!");
	}else{
		printf("reprovado.");
	}
	
	
	return 0;
}