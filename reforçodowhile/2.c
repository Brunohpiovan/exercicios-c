#include <stdio.h>


int main(int argc, char** argv)
{
	
	
	int N,MAIOR=0;
	
	do{
		printf("Informe um numero inteiro positivo:");
		scanf("%d",&N);
		if(N>MAIOR){
			MAIOR=N;
		}
	}while(N>0);
	printf("o maior numero digitado foi %d",MAIOR);
	
	return 0;
}