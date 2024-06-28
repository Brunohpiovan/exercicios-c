#include <stdio.h>


int main(int argc, char** argv)
{
	
	int V;
	
	printf("Informe um valor positivo,menor do que 10: ");
	scanf("%d",&V);
	
	while(V <= 10){
		printf("%d ",V);
		V++;
	}
	
	return 0;
}