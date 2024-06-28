#include <stdio.h>
#include <math.h>

int main()
{  	
	float R,S,D;
	int A,B,C;
	
	
		printf("informe um numero inteiro: ");
		scanf("%d",&A);
		printf("informe um segundo numero inteiro: ");
		scanf("%d",&B);
		printf("informe o terceiro numero inteiro: ");
		scanf("%d",&C);
		R=pow(A+B,2);
		S=pow(B+C,2);
		D=(R+S)/2;
		printf("o resultado da expressao D=(R+S)/2 e %.1f",D);
	
	return 0;
}