#include <stdio.h>


int main(int argc, char** argv)
{
	
	int i=1,V;
	
	printf("Informe um valor positivo: ");
	scanf("%d",&V);
	
	while(i <= V){
		printf("%d ",i);
		i++;
	}
	
	return 0;
}