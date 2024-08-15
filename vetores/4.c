#include <stdio.h>
#define TAM 5

int main(int argc, char** argv)
{
	
	int X;
	float N[TAM],MENOR;
	
	for(X=0;X<TAM;X++){
		printf("Informe um numero real: ");
		scanf("%f",&N[X]);
		if(X==0){
			MENOR=N[X];
		}else if(N[X]<MENOR){
			MENOR=N[X];
		}
	}
	printf("Os numeros digitados foram:\n");
	for(X=0;X<TAM;X++){
		printf("%.1f ",N[X]);
	}
	printf("\nO menor numero digitado foi %.1f",MENOR);
	return 0;
}