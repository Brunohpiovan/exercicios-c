#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(int argc, char** argv)
{
	
	int N1,N2,D;

	setlocale(LC_ALL,"Portuguese");
	printf("Primeiro jogador,digite um numero: ");
	scanf("%d",&N1);
	printf("Segundo jogador,tente adivinhar o numero: ");
	scanf("%d",&N2);
	if(N2==N1){
		printf("Você acertou!!!");
	}else
	{
		D=abs(N1-N2);
		printf("Voce errou,por uma diferença de %d %s",D,"numeros.");
	}
	
	return 0;
}