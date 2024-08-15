#include <stdio.h>
#define TAM 10

int main(int argc, char** argv)
{
	
	int X,MENOR=0;
	int N[TAM];
	
	for(X=0;X<TAM;X++){
		printf("Informe um valor positivo: ");
		scanf("%d",&N[X]);
		if(N[X]<10){
			MENOR++;
		}
	}
	printf("Existem %d elementos menores do que 10.",MENOR);
	
	return 0;
}