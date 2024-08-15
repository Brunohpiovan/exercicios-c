#include <stdio.h>
#define TAM 6

int main(int argc, char** argv)
{
	
	int X,N[TAM];
	
	for(X=0;X<TAM;X++){
		printf("Informe 6 numeros: ");
		scanf("%d",&N[X]);
	}
	printf("Numeros antes da troca:\n");
	for(X=0;X<TAM;X++){
		printf("%d\n",N[X]);
	}
	printf("Numeros apos a troca:\n");
	for(X=5;X>=0;X--){
		printf("%d\n",N[X]);
	}
	return 0;
}