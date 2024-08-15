#include <stdio.h>


void lernum(){
	int N;
	printf("Informe um numero: ");
	scanf("%d",&N);
	if(N%2==0){
		printf("Valor Par.");
	}else
	{
		printf("Valor Impar.");
	}
}


int main(int argc, char** argv)
{
	lernum();
	return 0;
}