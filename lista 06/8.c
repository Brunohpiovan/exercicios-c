#include <stdio.h>

int main()
{	
	
	int N1,N2;
	
	printf("informe um valor inteiro: ");
	scanf("%d",&N1);
	printf("informe um valor inteiro diferente: ");
	scanf("%d",&N2);
	if (N1>N2){
		printf("o menor valor e %d %s %d.",N2,"e o maior",N1);
	}else{
		printf("o menor valor e %d %s %d.",N1,"e o maior",N2);
	}
	
	return 0;
}