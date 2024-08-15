#include <stdio.h>


int main(int argc, char** argv)
{
	
	int N;
	float IP;
	
	printf("Informe um numero inteiro: ");
	scanf("%d",&N);
	IP=N%2;
	if(IP==0){
		printf("O numero e par.");
	}else
	{
		printf("O numero e impar.");
	}
	
	
	return 0;
}