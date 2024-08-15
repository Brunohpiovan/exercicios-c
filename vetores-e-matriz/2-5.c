#include <stdio.h>
#define TAM 4

int main(int argc, char** argv)
{
	
	int N[TAM];
	int X,Y,M=0;
	
	for(X=0;X<TAM;X++){
		do{
			printf("Informe um valor inteiro,positivo e impar: ");
			scanf("%d",&Y);
		}while(Y<0||Y%2==0);
		N[X]=Y;
	}
	for(X=0;X<TAM;X++){
		if(N[X]%5==0){
			M++;
		}
	}
	printf("\nExistem %d numeros multiplos de 5 no vetor,e sao eles:\n",M);
	for(X=0;X<TAM;X++){
		if(N[X]%5==0){
			printf("%d ",N[X]);
		}
	}
	printf("\nNumeros nas posicoes pares dos vetores: \n");
	for(X=0;X<TAM;X++){
		if(X%2==0){
			printf("%d ",N[X]);
		}
	}
	printf("\nVetor original:\n");
	for(X=0;X<TAM;X++){
		printf("%d ",N[X]);
	}
	
	
	
	return 0;
}