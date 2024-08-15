#include <stdio.h>


int main(int argc, char** argv)
{
	
	int A,B,C;
	
	printf("Informe o primeiro lado do triangulo: ");
	scanf("%d",&A);
	printf("Informe o segundo lado do triangulo: ");
	scanf("%d",&B);
	printf("Informe o terceiro lado do triangulo: ");
	scanf("%d",&C);
	if(A<B+C && B<C+A && C<A+B){
		printf("Esses lados formam um triangulo!");
	}else
	{
		printf("Esses lados nao formam um triangulo.");
	}
	return 0;
}