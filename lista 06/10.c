#include <stdio.h>

int main()
{	
	int N;
	
	printf("informe um numero: ");
	scanf("%d",&N);
	if(N%2==0){
		printf("o numero e par!");
	}else{
		printf("o numero e impar!");
	}
	
	return 0;
}