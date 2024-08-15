#include <stdio.h>



int main(int argc, char** argv)
{
	
	int x,y,z;
	
	printf("Informe um numero inicial: ");
	scanf("%d",&y);
	printf("Informe um numero final: ");
	scanf("%d",&z);
	
	for(x=y;x<=z;x++){
		printf("%d ",x);
	}
	
	return 0;
}