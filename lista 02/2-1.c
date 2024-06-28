/*
ENTRADA:notas
PROCESSAMENTO:M=(N1+N2+N3+N4)/4;
SAIDA:media
*/
#include <stdio.h>

int main()
{	
	float N1,N2,N3,N4,M;
	
	printf("digite a primeira nota: ");
	scanf("%f",&N1);
	printf("digite a segunda nota: ");
	scanf("%f",&N2);
	printf("digite a terceira nota: ");
	scanf("%f",&N3);
	printf("digite a quarta nota: ");
	scanf("%f",&N4);
	M=(N1+N2+N3+N4)/4;
	printf("A sua media aritimetica foi de %.1f",M );
	
	return 0;
}