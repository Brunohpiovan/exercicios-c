#include <stdio.h>
#define TAM 6

int main(int argc, char** argv)
{
	int N[TAM],A[TAM];
	int X;
	printf("Carregando valores:\n");
	for(X=0;X<TAM;X++){
		scanf("%d",&N[X]);
	}
	for(X=0;X<TAM;X++){
		A[TAM-1-X]=N[X];
	}
	printf("Apresentando resultados:\n");
	for(X=0;X<TAM;X++){
		printf("%d\n",A[X]);
	}
	return 0;
}