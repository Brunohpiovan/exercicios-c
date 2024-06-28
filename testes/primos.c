#include <stdio.h>


int main(int argc, char** argv)
{
	
	int x,N;
	float R;
	
	for(x=1;x<=5;x++){
	printf("Informe um numero inteiro e positivo maior que 1:");
	scanf("%d",&N);
	if(N==2){
		printf("Numero primo.\n");
	}else if(N>2){
		R=N%2;
		if(R==0){
			printf("Numero nao primo.\n");
		}else{
			printf("Numero primo.\n");
		}
	}
	}
	
	
	return 0;
}