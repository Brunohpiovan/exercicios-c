#include <stdio.h>
#define TAM 5


int main(int argc, char** argv)
{
	
	int N[TAM];
	int X,MAIORN,POSMAIOR;
	
	for(X=0;X<TAM;X++){
		printf("Informe um numero :");
		scanf("%d",&N[X]);
		if(X==0){
			MAIORN=N[X];
			POSMAIOR=X;
		}else if(N[X]>MAIORN){
			MAIORN=N[X];
			POSMAIOR=X;
		}
		
	}
	printf("O maior numero digitado foi %d,e esta na posicao %d do vetor.",MAIORN,POSMAIOR);
	return 0;
}