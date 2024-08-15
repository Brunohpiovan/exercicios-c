#include <stdio.h>


int main(int argc, char** argv)
{

	int N1,N2;
		
	printf("Informe um valor inteiro: ");
	scanf("%d",&N1);
	printf("Informe outro valor inteiro: ");
	scanf("%d",&N2);
	
	if(N1<N2){
		printf("%d %d",N1,N2);
	}else if(N1>N2){
		printf("%d %d",N2,N1);
	}

	
	
	return 0;
}