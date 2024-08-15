#include <stdio.h>
#define TAM 6

int main(int argc, char** argv)
{
	int N[TAM];
	int X;
	printf("Carregando valores:\n");
	for(X=TAM-1;X>=0;X--){
		scanf("%d",&N[X]);
	}
	printf("Apresentando resultados:\n");
	for(X=0;X<TAM;X++){
		printf("%d\n",N[X]);
	}
	
	return 0;
}