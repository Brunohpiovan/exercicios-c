#include <stdio.h>

int main(int argc, char** argv)
{
	int N;
	
	printf("Informe um numero menor que 10: ");
	scanf("%d",&N);
	
	for(N; N<=10 ; N++){
		printf("%d ",N);
	}
	return 0;
}