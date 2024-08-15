#include <stdio.h>



int main(int argc, char** argv)
{

	int N;
		
	printf("Informe um valor:");
	scanf("%d",&N);
	if(N>0){
		printf("Valor positivo.");
	}else if(N<0){
		printf("Valor negativo");
	}else
	printf("Valor neutro");
	
	
	return 0;
}