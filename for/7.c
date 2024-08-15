#include <stdio.h>


int main(int argc, char** argv)
{
	
	int x,y;
	
	printf("Informe um valor positivo maior que 0: ");
	scanf("%d",&y);
	for(x=1;x<=y;x++){
		printf("%d ",x);
	}
	return 0;
}