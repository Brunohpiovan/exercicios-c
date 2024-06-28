#include <stdio.h>

int main()
{	float M,N1,N2,N3,N4;

	printf("informe sua nota na primeira avaliacao: ");
	scanf("%f",&N1);
	printf("informe sua nota na segunda avaliacao: ");
	scanf("%f",&N2);
	printf("informe sua nota na terceira avaliacao: ");
	scanf("%f",&N3);
	printf("informe sua nota na quarta avaliacao: ");
	scanf("%f",&N4);
	M=(N1*2+N2*4+N3*6+N4*8)/20;
	printf("sua media ponderada foi de:%.1f ",M);
	
	return 0;
}