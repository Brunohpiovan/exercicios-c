#include <stdio.h>
#define TAM 6

int main(int argc, char** argv)
{
	
	int X;
	int N[TAM];
	
	for(X=0;X<TAM;X++){
		printf("\nInforme N%d:",X+1);
		scanf("%d",&N[X]);
	}
	for(X=0;X<TAM;X++){
		printf("N%d=%d\n",X+1,N[X]);
	}
	
	return 0;
}