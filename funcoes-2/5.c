#include <stdio.h>
#include <stdlib.h>
#define TAM 10
int N[TAM];
int X;


void lernum(){
	for(X=0;X<TAM;X++){
		printf("Informe um valor: ");
		scanf("%d",&N[X]);
	}
}
void valorbs(){
	printf("\nNUMEROS DIGITADOS:\n");
	for(X=0;X<TAM;X++){
		printf("VALORES: %d\n",N[X]);
	}
	for(X=0;X<TAM;X++){
		printf("Valores absolutos: %d\n",abs(N[X]));
	}
}

int main(int argc, char** argv)
{
	
	lernum();
	valorbs();
	
	return 0;
}