#include <stdio.h>


int main(int argc, char** argv)
{
	
	int L1,L2,L3;
	
	printf("Informe o primeiro lado: ");
	scanf("%d",&L1);
	printf("Informe o segundo lado: ");
	scanf("%d",&L2);
	printf("informe o terceiro lado:");
	scanf("%d",&L3);
	
	if (L1<L2+L3 && L2<L1+L3 && L3<L1+L2){
		printf("E um triangulo.");
	}else
	{
		printf("Nao e um triangulo.");
	}
	
	
	return 0;
}