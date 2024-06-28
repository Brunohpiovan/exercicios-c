#include <stdio.h>


int main(int argc, char** argv)
{
	
	int I,MAX;
	
	printf("informe um numero positivo: ");
	scanf("%d",&MAX);
	
	for(I=1 ; I<=MAX ; I++){
		printf("%d ",I);
	}
	
	return 0;
}