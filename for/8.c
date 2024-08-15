#include <stdio.h>

int main(int argc, char** argv)
{
	
	int x,y;
	
	printf("Informe um numero menor que 10: ");
	scanf("%d",&y);
	
	for(x=y;x<=10;x++){
		printf("%d ",x);
	}
	return 0;
}