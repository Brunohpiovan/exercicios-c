#include <stdio.h>


int main(int argc, char** argv)
{
	
	int x,N;
	float R;
	
	for(x=1;x<=10;x++){
		printf("\nInforme um numero: ");
		scanf("%d",&N);
		R=N%2;
		if(R==0){
			printf("O numero %d e par\n",N);
		}else
		{
			printf("O numero %d e impar\n",N);
		}
	}
	return 0;
}