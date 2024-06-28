#include <stdio.h>



int main(int argc, char** argv)
{
	
	
	int N;
	double F,SOMA=0,X;
	
	printf("Informe o valor inteiro maior ou igual a 9: ");
	scanf("%d",&N);
	for(X=1;X<=10;X++){
		F=X/(N-X+1);
		SOMA+=F;

	}
	printf("A soma destes 10 termos e %.2f",SOMA);
	
	
	return 0;
	
}