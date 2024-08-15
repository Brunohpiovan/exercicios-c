#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10



int main(int argc, char** argv)
{
	
	int N[TAM];
	int X,Y,repetido,NUM,flag=0;
	
	srand(time(NULL));
	
	for(X=0;X<TAM;X++){
		do{
			repetido=0;
			N[X]=rand()%100;
			
			for(Y=0;Y<X;Y++){
				if(N[X]==N[Y]){
					repetido=1;
					break;
				}
			}
		}while(repetido==1);
	}
	
	printf("Digite um numero para buscar no vetor: ");
	scanf("%d",&NUM);
	
	for(X=0;X<TAM;X++){
		if(NUM==N[X]){
			printf("O numero %d,foi encontrado na posicao %d do vetor.",NUM,X);
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("\nEsse numero nao existe no vetor.\n");
	}
	
	printf("\nApresentando o vetor:\n");
	for(X=0;X<TAM;X++){
		printf("%d ",N[X]);
	}
	

	
	return 0;
}