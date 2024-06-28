#include <stdio.h>



int main(int argc, char** argv)
{
	
	int N;
	
	do{
		printf("Informe um numero entre 1 e 6: ");
		scanf("%d",&N);
		if (N<1 || N>6){
			printf("Valor invalido!\n");
		}
	}while(N<1 || N>6);
	
	printf("Aceito.");
	
	
	
	
	return 0;
}