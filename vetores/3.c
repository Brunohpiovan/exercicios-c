#include <stdio.h>
#define TAM 5

int main(int argc, char** argv)
{
	
	int X;
	float N[TAM],MAIOR;
	
	for(X=0;X<TAM;X++){
		printf("Informe um numero real: ");
		scanf("%f",&N[X]);
		if(X==0){
			MAIOR=N[X];
		}else if(N[X]>MAIOR){
			MAIOR=N[X];
		}
	}
	printf("Os numeros digitados foram:\n");
	for(X=0;X<TAM;X++){
		printf("%.1f ",N[X]);
	}
	printf("\nO maior numero digitado foi %.1f",MAIOR);
	return 0;
}