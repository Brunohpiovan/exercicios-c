#include <stdio.h>
#define TAM 5

int main(int argc, char** argv)
{
	int N[TAM]={2,4,6,8,10};
	int X,IND,FLAG=0;
	
	do{
		printf("Digite um numero para buscar no vetor:");
		scanf("%d",&IND);
		for(X=0;X<TAM;X++){
			if(IND==N[X]){
				printf("Numero encontrado na posicao %d do vetor.",X);
				FLAG=1;
				break;
			}
		}
		if(FLAG==0){
			printf("Numero nao encontrado.\n");
		}		
	}while(FLAG==0);
	
	return 0;
}
