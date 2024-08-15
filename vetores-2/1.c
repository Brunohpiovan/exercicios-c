#include <stdio.h>
#define TAM 8

int main(int argc, char** argv)
{
	
	int N[TAM];
	int X;
	
	for(X=0;X<TAM;X++){
		printf("Informe um numero: ");
		scanf("%d",&N[X]);
		printf("Esse numero ocupara a posicao %d nos vetores.\n",X);
	}
	printf("Os numeros digitados foram:\n");
	for(X=0;X<TAM;X++){
		printf("Posicao %d:%d\n",X,N[X]);
	}
	
	return 0;
}