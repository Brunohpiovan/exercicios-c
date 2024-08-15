#include <stdio.h>
#define TAM 5

int main(int argc, char** argv)
{
	
	int X,N[TAM],TRO;
	
	for(X=0;X<TAM;X++){
		printf("Informe numeros: ");
		scanf("%d",&N[X]);
	}
	printf("Numeros antes da troca:\n");
	for(X=0;X<TAM;X++){
		printf("%d\n",N[X]);
	}
	TRO=N[0];
	N[0]=N[4];
	N[4]=TRO;
	
	printf("Numeros apos a troca:\n");
	for(X=0;X<TAM;X++){
		printf("%d\n",N[X]);
	}
	return 0;
}
