#include <stdio.h>


int main(int argc, char** argv)
{
	int I,MAX;
	
	printf("Digite um valor maximo: ");
	scanf("%d",&MAX);
	
	for (I=1; I<=MAX ; I++){
		printf("%d ",I);
	}
	
	return 0;
}