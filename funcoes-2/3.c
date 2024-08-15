#include <stdio.h>
#define TAM 4

void valores(){
	int N[TAM];
	int X,MENOR,MAIOR;
	for(X=0;X<TAM;X++){
		printf("Informe um valor: ");
		scanf("%d",&N[X]);
		if(X==0){
			MENOR=N[X];
			MAIOR=N[X];
		}else if(N[X]>MAIOR){
			MAIOR=N[X];
		}else if(N[X]<MENOR){
			MENOR=N[X];
		}
	}
	printf("\nAPRESENTANDO VALORES DIGITADOS\n");
	for(X=0;X<TAM;X++){
		printf("%d\n",N[X]);
	}
	printf("\nO maior numero e:%d\n",MAIOR);
	printf("O menor numero e:%d",MENOR);
}

int main(int argc, char** argv)
{
	valores();
	return 0;
}